#include "antlr4-runtime.h"
#include "MySQLLexerBase.h"
#include "MySQLLexer.h"
#include "SqlMode.h"
// #include "SqlModes.h" // Include if SqlModes static functions are needed.

#include <set>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <iostream>

// All source code should be in namespace.
namespace antlrcpptest {

    MySQLLexerBase::MySQLLexerBase(antlr4::CharStream* input) : antlr4::Lexer(input)
    {
        this->serverVersion = 80200;
        // If SqlModes::sqlModeFromString static function exists, you can use it like below.
        // Uncomment if needed.
        // this->sqlModes = SqlModes::sqlModeFromString("ANSI_QUOTES");

        this->supportMle = true;
        this->inVersionComment = false;
        this->justEmittedDot = false;
    }

    bool MySQLLexerBase::isSqlModeActive(SqlMode mode) {
        // sqlModes is std::set<SqlMode> so use count for testing.
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

        std::unique_ptr<antlr4::Token> next = Lexer::nextToken(); // std::move ���ʿ�
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

        // Parse version number from "/*!12345" format
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
        // Use arrow operator (->) for _input member. (C++ ANTLR)
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
        int length = (int)text.length() - 1; // size_t -> int conversion
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

        // Bounds check for index
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
        pendingTokens.push(std::unique_ptr<antlr4::CommonToken>(t)); // push as unique_ptr

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
    // The following functions use setType(...) to set the type.
    // -------------------------------------------------------------------------

    // Static variable initialization
    std::string MySQLLexerBase::longString = "2147483647";
    int MySQLLexerBase::longLength = 10;
    std::string MySQLLexerBase::signedLongString = "-2147483648";
    std::string MySQLLexerBase::longLongString = "9223372036854775807";
    int MySQLLexerBase::longLongLength = 19;
    std::string MySQLLexerBase::signedLongLongString = "-9223372036854775808";
    int MySQLLexerBase::signedLongLongLength = 19;
    std::string MySQLLexerBase::unsignedLongLongString = "18446744073709551615";
    int MySQLLexerBase::unsignedLongLongLength = 20;

    // Version check functions
    bool MySQLLexerBase::isMasterCompressionAlgorithm() { return this->serverVersion >= 80018 && this->isServerVersionLt80024(); }
    bool MySQLLexerBase::isServerVersionGe80011() { return this->serverVersion >= 80011; }
    bool MySQLLexerBase::isServerVersionGe80013() { return this->serverVersion >= 80013; }
    bool MySQLLexerBase::isServerVersionLt80014() { return this->serverVersion < 80014; }
    bool MySQLLexerBase::isServerVersionGe80014() { return this->serverVersion >= 80014; }
    bool MySQLLexerBase::isServerVersionGe80016() { return this->serverVersion >= 80016; }
    bool MySQLLexerBase::isServerVersionGe80017() { return this->serverVersion >= 80017; }
    bool MySQLLexerBase::isServerVersionGe80018() { return this->serverVersion >= 80018; }
    bool MySQLLexerBase::isServerVersionLt80021() { return this->serverVersion < 80021; }
    bool MySQLLexerBase::isServerVersionGe80021() { return this->serverVersion >= 80021; }
    bool MySQLLexerBase::isServerVersionLt80022() { return this->serverVersion < 80022; }
    bool MySQLLexerBase::isServerVersionGe80022() { return this->serverVersion >= 80022; }
    bool MySQLLexerBase::isServerVersionLt80023() { return this->serverVersion < 80023; }
    bool MySQLLexerBase::isServerVersionGe80023() { return this->serverVersion >= 80023; }
    bool MySQLLexerBase::isServerVersionLt80024() { return this->serverVersion < 80024; }
    bool MySQLLexerBase::isServerVersionGe80024() { return this->serverVersion >= 80024; }
    bool MySQLLexerBase::isServerVersionLt80031() { return this->serverVersion < 80031; }

    // Token type setting functions
    void MySQLLexerBase::doLogicalOr() { setType(determineFunction(MySQLLexer::LOGICAL_OR_OPERATOR)); }
    void MySQLLexerBase::doIntNumber() { setType(determineNumericType(getText())); }
    void MySQLLexerBase::doAdddate() { setType(determineFunction(MySQLLexer::ADDDATE_SYMBOL)); }
    void MySQLLexerBase::doBitAnd() { setType(determineFunction(MySQLLexer::BIT_AND_SYMBOL)); }
    void MySQLLexerBase::doBitOr() { setType(determineFunction(MySQLLexer::BIT_OR_SYMBOL)); }
    void MySQLLexerBase::doBitXor() { setType(determineFunction(MySQLLexer::BIT_XOR_SYMBOL)); }
    void MySQLLexerBase::doCast() { setType(determineFunction(MySQLLexer::CAST_SYMBOL)); }
    void MySQLLexerBase::doCount() { setType(determineFunction(MySQLLexer::COUNT_SYMBOL)); }
    void MySQLLexerBase::doCurdate() { setType(determineFunction(MySQLLexer::CURDATE_SYMBOL)); }
    void MySQLLexerBase::doCurrentDate() { setType(determineFunction(MySQLLexer::CURRENT_DATE_SYMBOL)); }
    void MySQLLexerBase::doCurrentTime() { setType(determineFunction(MySQLLexer::CURRENT_TIME_SYMBOL)); }
    void MySQLLexerBase::doCurtime() { setType(determineFunction(MySQLLexer::CURTIME_SYMBOL)); }
    void MySQLLexerBase::doDateAdd() { setType(determineFunction(MySQLLexer::DATE_ADD_SYMBOL)); }
    void MySQLLexerBase::doDateSub() { setType(determineFunction(MySQLLexer::DATE_SUB_SYMBOL)); }
    void MySQLLexerBase::doExtract() { setType(determineFunction(MySQLLexer::EXTRACT_SYMBOL)); }
    void MySQLLexerBase::doGroupConcat() { setType(determineFunction(MySQLLexer::GROUP_CONCAT_SYMBOL)); }
    void MySQLLexerBase::doMax() { setType(determineFunction(MySQLLexer::MAX_SYMBOL)); }
    void MySQLLexerBase::doMid() { setType(determineFunction(MySQLLexer::MID_SYMBOL)); }
    void MySQLLexerBase::doMin() { setType(determineFunction(MySQLLexer::MIN_SYMBOL)); }
    void MySQLLexerBase::doNot() { setType(determineFunction(MySQLLexer::NOT_SYMBOL)); }
    void MySQLLexerBase::doNow() { setType(determineFunction(MySQLLexer::NOW_SYMBOL)); }
    void MySQLLexerBase::doPosition() { setType(determineFunction(MySQLLexer::POSITION_SYMBOL)); }
    void MySQLLexerBase::doSessionUser() { setType(determineFunction(MySQLLexer::SESSION_USER_SYMBOL)); }
    void MySQLLexerBase::doStddevSamp() { setType(determineFunction(MySQLLexer::STDDEV_SAMP_SYMBOL)); }
    void MySQLLexerBase::doStddev() { setType(determineFunction(MySQLLexer::STDDEV_SYMBOL)); }
    void MySQLLexerBase::doStddevPop() { setType(determineFunction(MySQLLexer::STDDEV_POP_SYMBOL)); }
    void MySQLLexerBase::doStd() { setType(determineFunction(MySQLLexer::STD_SYMBOL)); }
    void MySQLLexerBase::doSubdate() { setType(determineFunction(MySQLLexer::SUBDATE_SYMBOL)); }
    void MySQLLexerBase::doSubstr() { setType(determineFunction(MySQLLexer::SUBSTR_SYMBOL)); }
    void MySQLLexerBase::doSubstring() { setType(determineFunction(MySQLLexer::SUBSTRING_SYMBOL)); }
    void MySQLLexerBase::doSum() { setType(determineFunction(MySQLLexer::SUM_SYMBOL)); }
    void MySQLLexerBase::doSysdate() { setType(determineFunction(MySQLLexer::SYSDATE_SYMBOL)); }
    void MySQLLexerBase::doSystemUser() { setType(determineFunction(MySQLLexer::SYSTEM_USER_SYMBOL)); }
    void MySQLLexerBase::doTrim() { setType(determineFunction(MySQLLexer::TRIM_SYMBOL)); }
    void MySQLLexerBase::doVariance() { setType(determineFunction(MySQLLexer::VARIANCE_SYMBOL)); }
    void MySQLLexerBase::doVarPop() { setType(determineFunction(MySQLLexer::VAR_POP_SYMBOL)); }
    void MySQLLexerBase::doVarSamp() { setType(determineFunction(MySQLLexer::VAR_SAMP_SYMBOL)); }
    void MySQLLexerBase::doUnderscoreCharset() { setType(checkCharset(getText())); }

    // Boolean return functions
    bool MySQLLexerBase::doDollarQuotedStringText() {
        return supportMle;
    }

    bool MySQLLexerBase::isVersionComment() {
        return checkMySQLVersion(getText());
    }

    bool MySQLLexerBase::isBackTickQuotedId() {
        return !isSqlModeActive(SqlMode::NoBackslashEscapes);
    }

    bool MySQLLexerBase::isDoubleQuotedText() {
        return !isSqlModeActive(SqlMode::AnsiQuotes);
    }

    bool MySQLLexerBase::isSingleQuotedText() {
        return !isSqlModeActive(SqlMode::NoBackslashEscapes);
    }

    void MySQLLexerBase::startInVersionComment() {
        inVersionComment = true;
    }

    void MySQLLexerBase::endInVersionComment() {
        inVersionComment = false;
    }

    bool MySQLLexerBase::isInVersionComment() {
        return inVersionComment;
    }
}