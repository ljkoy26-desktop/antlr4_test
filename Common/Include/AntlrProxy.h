#pragma once

// 1. Windows 매크로 충돌 방지
#undef min
#undef max
#undef ERROR
#undef NO_ERROR

// 2. ANTLR 런타임 헤더
#include <antlr4-runtime.h>

// 3. 부모 클래스들 (Base 클래스)
#include "MySQL/MySQLLexerBase.h"
#include "MySQL/MySQLParserBase.h"

// 4. 렉서와 파서 (반드시 Parser가 Visitor보다 먼저!)
#include "MySQL/MySQLLexer.h"
#include "MySQL/MySQLParser.h"

// 5. 비지터 (필요한 경우에만 Parser 뒤에 위치)
// 주의: Parser.h가 완전히 정의된 후에만 Visitor를 포함해야 합니다.
#include "MySQL/MySQLParserVisitor.h"
#include "MySQL/MySQLParserBaseVisitor.h"