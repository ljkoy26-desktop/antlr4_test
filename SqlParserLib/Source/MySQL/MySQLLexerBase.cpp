#include "antlr4-runtime.h"
#include "MySQLLexerBase.h"
#include "MySQLLexer.h"
#include "SqlMode.h"
// #include "SqlModes.h" // SqlModes 클래스가 정의된 헤더가 필요합니다. 없으면 에러납니다.

#include <set>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <iostream>

// [중요] 헤더와 동일한 네임스페이스로 감싸야 합니다.
namespace antlrcpptest {

    MySQLLexerBase::MySQLLexerBase(antlr4::CharStream* input) : antlr4::Lexer(input)
    {
        this->serverVersion = 80200;
        // SqlModes::sqlModeFromString 구현체가 없다면 이 줄에서 에러가 날 수 있습니다.
        // 임시로 비워두거나 구현체가 확실하다면 유지하세요.
        // this->sqlModes = SqlModes::sqlModeFromString("ANSI_QUOTES"); 

        this->supportMle = true;
        this->inVersionComment = false;
    }

    bool MySQLLexerBase::isSqlModeActive(SqlMode mode) {
        // sqlModes가 std::set<SqlMode> 라면 count가 맞습니다.
        return sqlModes.count(mode) > 0;
    }

    void MySQLLexerBase::reset() {
        inVersionComment = false;
        Lexer::reset();
    }

    std::unique_ptr<antlr4::Token> MySQLLexerBase::nextToken()
    {
        if (!this->pendingTokens.empty()) {
            std::unique_ptr<antlr4::Token> pending = std::move(this->pendingTokens.front());
            this->pendingTokens.pop();
            return pending;
        }

        std::unique_ptr<antlr4::Token> next = Lexer::nextToken(); // std::move 불필요
        if (!pendingTokens.empty()) {
            std::unique_ptr<antlr4::Token> pending = std::move(this->pendingTokens.front());
            this->pendingTokens.pop();
            this->pendingTokens.push(std::move(next));
            return pending;
        }

        return next;
    }

    bool MySQLLexerBase::checkMySQLVersion(std::string text) {
        if (text.length() < 8) return false;

        // "/*!12345" 형태에서 숫자만 파싱
        try {
            int version = std::stoi(text.substr(3));
            if (version <= serverVersion) {
                inVersionComment = true;
                return true;
            }
        }
        catch (...) {
            return false;
        }

        return false;
    }

    int MySQLLexerBase::determineFunction(int proposed) {
        // _input 접근은 화살표(->)로 해야 합니다. (C++ ANTLR)
        char input = static_cast<char>(_input->LA(1));

        if (isSqlModeActive(SqlMode::IgnoreSpace)) {
            while (isspace(input)) {
                this->getInterpreter<antlr4::atn::LexerATNSimulator>()->consume(_input);
                input = static_cast<char>(_input->LA(1));
            }
        }

        return (input == '(') ? proposed : MySQLLexer::IDENTIFIER;
    }

    int MySQLLexerBase::determineNumericType(std::string text) {
        int length = (int)text.length() - 1; // size_t -> int 형변환
        if (length < longLength) return MySQLLexer::INT_NUMBER;

        bool negative = false;
        int index = 0;

        if (text[index] == '+') {
            ++index; --length;
        }
        else if (text[index] == '-') {
            ++index; --length;
            negative = true;
        }

        while (index < text.length() && text[index] == '0' && length > 0) {
            ++index; --length;
        }

        if (length < longLength) return MySQLLexer::INT_NUMBER;

        std::string cmp;
        int smaller, bigger;

        if (negative) {
            if (length == longLength) {
                cmp = signedLongString.substr(1);
                smaller = MySQLLexer::INT_NUMBER;
                bigger = MySQLLexer::LONG_NUMBER;
            }
            else if (length < signedLongLongLength) {
                return MySQLLexer::LONG_NUMBER;
            }
            else if (length > signedLongLongLength) {
                return MySQLLexer::DECIMAL_NUMBER;
            }
            else {
                cmp = signedLongLongString.substr(1);
                smaller = MySQLLexer::LONG_NUMBER;
                bigger = MySQLLexer::DECIMAL_NUMBER;
            }
        }
        else {
            if (length == longLength) {
                cmp = longString;
                smaller = MySQLLexer::INT_NUMBER;
                bigger = MySQLLexer::LONG_NUMBER;
            }
            else if (length < longLongLength) {
                return MySQLLexer::LONG_NUMBER;
            }
            else if (length > longLongLength) {
                if (length > unsignedLongLongLength) return MySQLLexer::DECIMAL_NUMBER;
                cmp = unsignedLongLongString;
                smaller = MySQLLexer::ULONGLONG_NUMBER;
                bigger = MySQLLexer::DECIMAL_NUMBER;
            }
            else {
                cmp = longLongString;
                smaller = MySQLLexer::LONG_NUMBER;
                bigger = MySQLLexer::ULONGLONG_NUMBER;
            }
        }

        int cmpIndex = 0;
        while (index < text.length() && cmpIndex < cmp.length() && text[index] == cmp[cmpIndex]) {
            ++index; ++cmpIndex;
        }

        // 인덱스 범위 초과 방지
        if (index > 0 && index <= text.length() && cmpIndex > 0 && cmpIndex <= cmp.length())
            return (text[index - 1] <= cmp[cmpIndex - 1]) ? smaller : bigger;

        return bigger;
    }

    int MySQLLexerBase::checkCharset(std::string text) {
        return (charSets.count(text) > 0) ? MySQLLexer::UNDERSCORE_CHARSET : MySQLLexer::IDENTIFIER;
    }

    void MySQLLexerBase::emitDot() {
        auto len = this->getText().length();
        auto* t = new antlr4::CommonToken(
            std::pair<antlr4::TokenSource*, antlr4::CharStream*>(this, this->_input),
            MySQLLexer::DOT_SYMBOL, 0, this->tokenStartCharIndex, this->tokenStartCharIndex);

        t->setCharPositionInLine(t->getCharPositionInLine() - (size_t)len);
        pendingTokens.push(std::unique_ptr<antlr4::CommonToken>(t)); // unique_ptr로 감싸서 push

        this->setCharPositionInLine(this->getCharPositionInLine() + 1);
        ++this->tokenStartCharIndex;
        this->justEmittedDot = true;
    }

    antlr4::Token* MySQLLexerBase::emit() {
        auto t = Lexer::emit();
        if (this->justEmittedDot) {
            antlr4::CommonToken* p = dynamic_cast<antlr4::CommonToken*>(t);
            if (p) {
                p->setCharPositionInLine(p->getCharPositionInLine() + 1);
            }
            this->setCharPositionInLine(this->getCharPositionInLine() - 1);
            this->justEmittedDot = false;
        }
        return t;
    }

    // -------------------------------------------------------------------------
    // 아래 함수들은 this->type = ... 대신 setType(...)을 사용해야 합니다.
    // -------------------------------------------------------------------------

    // 단순 버전 체크
    bool MySQLLexerBase::isMasterCompressionAlgorithm() { return this->serverVersion >= 80018 && this->isServerVersionLt80024(); }
    bool MySQLLexerBase::isServerVersionGe80011() { return this->serverVersion >= 80011; }
    bool MySQLLexerBase::isServerVersionGe80013() { return this->serverVersion >= 80013; }
    bool MySQLLexerBase::isServerVersionLt80014() { return this->serverVersion < 80014; }
    bool MySQLLexerBase::isServerVersionGe80014() { return this->serverVersion >= 80014; }
    bool MySQLLexerBase::isServerVersionGe80016() { return this->serverVersion >= 80016; }
    bool MySQLLexerBase::isServerVersionGe80017() { return this->serverVersion >= 80017; }
}