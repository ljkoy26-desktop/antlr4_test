#pragma once

// 1. Windows 매크로 충돌 방지
#undef min
#undef max
#undef ERROR
#undef NO_ERROR

// 2. ANTLR 런타임 헤더
#include <antlr4-runtime.h>

// 3. [핵심] 전방 선언 (Forward Declaration)
// 컴파일러에게 MySQLParser가 클래스임을 미리 알려서 Visitor와의 충돌을 방지합니다.
namespace antlrcpptest {
    class MySQLParser;
}

// 4. 부모 클래스들 (Base 클래스)
#include "MySQL/MySQLLexerBase.h"
#include "MySQL/MySQLParserBase.h"

// 5. 렉서와 파서
#include "MySQL/MySQLLexer.h"
#include "MySQL/MySQLParser.h"

// 6. 비지터 (필요한 경우에만 Parser 뒤에 위치)
// 보통 Parser.h가 내부적으로 Visitor를 참조하므로 에러가 나면 아래 순서를 유지하세요.
#include "MySQL/MySQLParserVisitor.h"
#include "MySQL/MySQLParserBaseVisitor.h"