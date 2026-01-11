#pragma once

#include "antlr4-runtime.h"
#include "SqlMode.h"
#include <set>

namespace antlrcpptest {

    class MySQLParserBase : public antlr4::Parser {
    public:
        MySQLParserBase(antlr4::TokenStream* input);
        virtual ~MySQLParserBase() = default;

        // 멤버 변수 추가
        int serverVersion;
        std::set<SqlMode> sqlModes;

        // 파서가 호출하는 검증 함수들 선언
        bool isServerVersionGe80011();
        bool isServerVersionGe80013();
        bool isServerVersionLt80014();
        bool isServerVersionGe80014();
        bool isServerVersionGe80016();
        bool isServerVersionGe80017();
        bool isServerVersionGe80018();
        bool isServerVersionGe80019();
        bool isServerVersionLt80021();
        bool isServerVersionGe80021();
        bool isServerVersionLt80022();
        bool isServerVersionGe80022();
        bool isServerVersionLt80023();
        bool isServerVersionGe80023();
        bool isServerVersionLt80024();
        bool isServerVersionGe80024();
        bool isServerVersionLt80025();
        bool isServerVersionGe80025();
        bool isServerVersionGe80027();
        bool isServerVersionLt80031();
        bool isServerVersionGe80031();
        bool isServerVersionGe80032();
        bool isServerVersionGe80100();
        bool isServerVersionGe80200();
        bool isServerVersionLt80011();
        bool isServerVersionLt80012();
        bool isServerVersionLt80016();
        bool isServerVersionGe80004();

        bool isServerVersionLt80017();
        bool isPureIdentifier();
        bool isTextStringLiteral();

        bool isSqlModeActive(SqlMode mode);
        bool isSelectStatementWithInto(); // 파서 전용 함수
        bool isStoredRoutineBody();       // 파서 전용 함수
    };

}