#pragma once

// 1. ANTLR 런타임
#include <antlr4-runtime.h>

// 2. Oracle 파서 (네임스페이스 확인: antlrcpp_oracle)
#include "Oracle/PlSqlLexerBase.h"
#include "Oracle/PlSqlParserBase.h"
#include "Oracle/PlSqlLexer.h"
#include "Oracle/PlSqlParser.h"

// 3. MySQL 파서 (네임스페이스 확인: antlrcpp_mysql)
#include "MySQL/MySQLLexerBase.h"
#include "MySQL/MySQLParserBase.h"
#include "MySQL/MySQLLexer.h"
#include "MySQL/MySQLParser.h"