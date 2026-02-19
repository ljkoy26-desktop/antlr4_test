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

// 4. SQL Server 파서 (네임스페이스 확인: antlrcpp_sqlserver)
#include "SQL Server/TSqlLexer.h"
#include "SQL Server/TSqlParser.h"

// 5. PostgreSQL 파서 (네임스페이스 확인: antlrcpp_postgresql)
#include "PostgreSQL/PostgreSQLLexerBase.h"
#include "PostgreSQL/PostgreSQLParserBase.h"
#include "PostgreSQL/PostgreSQLLexer.h"
#include "PostgreSQL/PostgreSQLParser.h"

// 6. DB2 파서 (네임스페이스 확인: antlrcpp_db2)
#include "DB2/Db2Lexer.h"
#include "DB2/Db2Parser.h"