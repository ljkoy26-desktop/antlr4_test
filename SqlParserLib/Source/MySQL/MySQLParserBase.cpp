#include "MySQLParserBase.h"

namespace antlrcpptest {

    MySQLParserBase::MySQLParserBase(antlr4::TokenStream* input) : antlr4::Parser(input)
    {
        serverVersion = 80200; // 기본 버전 설정
    }

    bool MySQLParserBase::isSqlModeActive(SqlMode mode) {
        return sqlModes.count(mode) > 0;
    }

    // 파서 로직 함수 (일단 항상 true/false 리턴하는 껍데기로 구현)
    bool MySQLParserBase::isSelectStatementWithInto() { return false; }
    bool MySQLParserBase::isStoredRoutineBody() { return false; }

    // 버전 체크 함수 구현
    bool MySQLParserBase::isServerVersionGe80011() { return serverVersion >= 80011; }
    bool MySQLParserBase::isServerVersionGe80013() { return serverVersion >= 80013; }
    bool MySQLParserBase::isServerVersionLt80014() { return serverVersion < 80014; }
    bool MySQLParserBase::isServerVersionGe80014() { return serverVersion >= 80014; }
    bool MySQLParserBase::isServerVersionGe80016() { return serverVersion >= 80016; }
    bool MySQLParserBase::isServerVersionGe80017() { return serverVersion >= 80017; }
    bool MySQLParserBase::isServerVersionGe80018() { return serverVersion >= 80018; }
    bool MySQLParserBase::isServerVersionGe80019() { return serverVersion >= 80019; }
    bool MySQLParserBase::isServerVersionLt80021() { return serverVersion < 80021; }
    bool MySQLParserBase::isServerVersionGe80021() { return serverVersion >= 80021; }
    bool MySQLParserBase::isServerVersionLt80022() { return serverVersion < 80022; }
    bool MySQLParserBase::isServerVersionGe80022() { return serverVersion >= 80022; }
    bool MySQLParserBase::isServerVersionLt80023() { return serverVersion < 80023; }
    bool MySQLParserBase::isServerVersionGe80023() { return serverVersion >= 80023; }
    bool MySQLParserBase::isServerVersionLt80024() { return serverVersion < 80024; }
    bool MySQLParserBase::isServerVersionGe80024() { return serverVersion >= 80024; }
    bool MySQLParserBase::isServerVersionLt80025() { return serverVersion < 80025; }
    bool MySQLParserBase::isServerVersionGe80025() { return serverVersion >= 80025; }
    bool MySQLParserBase::isServerVersionGe80027() { return serverVersion >= 80027; }
    bool MySQLParserBase::isServerVersionLt80031() { return serverVersion < 80031; }
    bool MySQLParserBase::isServerVersionGe80031() { return serverVersion >= 80031; }
    bool MySQLParserBase::isServerVersionGe80032() { return serverVersion >= 80032; }
    bool MySQLParserBase::isServerVersionGe80100() { return serverVersion >= 80100; }
    bool MySQLParserBase::isServerVersionGe80200() { return serverVersion >= 80200; }
    bool MySQLParserBase::isServerVersionLt80011() { return serverVersion < 80011; }
    bool MySQLParserBase::isServerVersionLt80012() { return serverVersion < 80012; }
    bool MySQLParserBase::isServerVersionLt80016() { return serverVersion < 80016; }
    bool MySQLParserBase::isServerVersionGe80004() { return serverVersion >= 80004; }


    bool MySQLParserBase::isServerVersionLt80017() {        return serverVersion < 80017;    }

    bool MySQLParserBase::isPureIdentifier() {
        // 실제 로직: 현재 토큰이 순수한 식별자(ID)인지 확인해야 함.
        // 일단 빌드 통과를 위해 기본값 반환 (파싱 로직에 따라 true/false 조정 필요할 수 있음)
        return true;
    }

    bool MySQLParserBase::isTextStringLiteral() {
        // 실제 로직: 현재 토큰이 텍스트 문자열인지 확인해야 함.
        return true;
    }

}