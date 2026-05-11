#pragma once

#ifdef SO_SQL_PARSER_EXT_DLL
#define SO_SQL_PARSER_EXT_CLASS _declspec(dllexport)
#else
#define SO_SQL_PARSER_EXT_CLASS _declspec(dllimport)
#endif



#include "SOCommon/SOCommon.h" // CString 관련 참조가 틀어짐... TOString



// #include "gudusoft/gsqlparser/TGSqlParser.hpp"
#include <sstream>
// #include "JavaDefine.h"
#include <set>
#include <map>
#include <string>
#include <vector>
// #include <list>
#include <tuple>
#include <stdexcept>
#include <algorithm>

// #include "../src_core/SqlParserLib/SQLEngine.h"
#include "../include/antlr4/SQLEngine.h"

enum DB_TYPE
{
	//	2024-06-07 192.168.79.116 Server 확인 결과
	//	select * from torange.symbolcode where category_id=55000 and category_name = 'db_type'
	tstNone = 0,
	tstORACLE = 21,
	tstDB2 = 22,
	tstMSSQL = 23,
	tstSybaseASE = 24,
	tstSybaseIQ = 25,
	tstMySQL = 26,
	tstAltibase = 27,
	tstInformix = 28,
	tstSymforware = 29,
	tstPostgreSQL = 30,
	tstTeraData = 31,
	tstTibero = 32,
	tstCubrid = 33,
	tstNetezza = 34,
	tstSapHana = 35,
	tstGreenplum = 36,
	tstDB2forZOS = 37,
	tstDB2foriSeries = 38,
	tstSunDB = 39,
	tstKairos = 40,
	tstPetaSQL = 41,
	tstMongo = 42,
	tstFirebird = 43,
	tstCouchDB = 44,
	tstInfluxDB = 45,
	tstVertica = 46,
	tstOther = 47,
	tstMariaDB = 126,
	tstGoldilocksDB = 127,
	tstTDV = 128,
};

enum EM_MAKESELECT_RESULT { RT_SUCCESS = 0, RT_PARSE_FAIL, RT_NOT_SUPPORT_INSERT_TYPE, RT_INSERT_SHOW_AFTERDATA, RT_EMPTY_TABLE_NAME, RT_DELETE, RT_UPDATE };

/* sqlformatter */
class CWVSQLFormatOption
{
public:
	bool m_bKeywordRightAlign;
	bool m_bLeadingComma;
	int	 m_nKeywordCase;
	bool m_bMultiLine;
	bool m_bIndent;

public:
	CWVSQLFormatOption()
	{
		m_bKeywordRightAlign = true;
		m_bLeadingComma = false;
		m_nKeywordCase = 0;
		m_bMultiLine = false;
		m_bIndent = true;
	}

	const CWVSQLFormatOption& operator=(CWVSQLFormatOption& p_optSQLFormatter)
	{
		m_bKeywordRightAlign = p_optSQLFormatter.m_bKeywordRightAlign;
		m_bLeadingComma = p_optSQLFormatter.m_bLeadingComma;
		m_nKeywordCase = p_optSQLFormatter.m_nKeywordCase;
		m_bMultiLine = p_optSQLFormatter.m_bMultiLine;
		m_bIndent = p_optSQLFormatter.m_bIndent;

		return *this;
	}
};

class SO_SQL_PARSER_EXT_CLASS CWVSqlParser
{

public:
	// 기본 생성자: DB 타입 미설정, initParser 별도 호출 필요
	CWVSqlParser();
	// DB 타입·대소문자 옵션으로 파서 초기화 (내부적으로 initParser 호출)
	CWVSqlParser(int databaseType, bool bUppercase = true);
	// 소멸자: destroyParser()를 호출하여 내부 상태 정리
	~CWVSqlParser();

	typedef std::vector<TOString> Object;
	enum SqlType { SqlTypeUnknown, SqlTypeQuery, SqlTypeDML, SqlTypeDDL, SqlTypeDCL, SqlTypePLSQL, SqlTypeETC };
	enum SqlCommand { SqlCmdUnknown, SqlSelect, SqlInsert, SqlUpdate, SqlDelete, SqlMerge };
	//
public:
	// SQL 파싱 후 DELETE→MakeDeleteBeforeData, UPDATE→MakeUpdateBeforeData 위임
	bool MakeBeforeData(LPCTSTR sqlText, std::vector< std::vector<TOString> >& data);
	// SQL 파싱 후 INSERT→MakeInsertAfterData, UPDATE→MakeUpdateAfterData 위임
	bool MakeAfterData(LPCTSTR sqlText, std::vector< std::vector<TOString> >& data);
	// INSERT 후 데이터: [컬럼명 행, 값 행] 형태로 반환
	bool MakeInsertAfterData(std::vector< std::vector<TOString> >& afterData);
	// DELETE 이전 데이터: WHERE 조건 텍스트를 [["condition"], [whereText]] 형태로 반환
	bool MakeDeleteBeforeData(std::vector< std::vector<TOString> >& afterData);
	// UPDATE 이후 데이터: SET 절 컬럼·값 목록 반환
	bool MakeUpdateAfterData(std::vector< std::vector<TOString> >& afterData);
	// UPDATE 이전 데이터: WHERE 조건 텍스트를 [["condition"], [whereText]] 형태로 반환
	bool MakeUpdateBeforeData(std::vector< std::vector<TOString> >& afterData);
	//
	// Parse() 호출 여부 반환 (destroyParser 이후에는 false)
	bool IsParse(); // Pass
	// doParse를 호출하는 public 래퍼: 성공 true, 실패 false
	bool Parse(LPCTSTR sqlText); // Pass



////	void Clear();
	// [GSP→Antlr4] DML SQL로부터 변경 대상 조회용 SELECT 문 생성
	EM_MAKESELECT_RESULT MakeSelectStmt(LPCTSTR sqlText, TOString& strSelect);
	// [GSP→Antlr4] DML SQL로부터 변경 이후 조회용 SELECT 문 생성
	EM_MAKESELECT_RESULT MakeSelectAfterStmt(LPCTSTR sqlText, TOString& strSelect);
	// [GSP→Antlr4] MERGE 문으로부터 변경 이후 조회용 SELECT 문 생성
	EM_MAKESELECT_RESULT MakeAfterSelect4Merge(LPCTSTR sqlText, TOString& strSelect);
	// SQL 텍스트를 파싱한 뒤 IsIncludeWhereInSet(0) 호출하는 텍스트 오버로드
	bool IsIncludeWhereInSet(CString sqlText);
	// UPDATE idx번째 문장에서 SET 절 컬럼이 WHERE 절에도 등장하는지 확인
	bool IsIncludeWhereInSet(UINT idx);
	// 세미콜론 기준으로 SQL 문장을 분리하여 CString 벡터 반환
	std::vector<CString>  SeparateSQL(int databaseType, LPCTSTR sqlText);
	// SQL 포매터 (Antlr4 기반 미지원, 빈 문자열 반환)
	CString Formatter2();
	//
	// SQL 문법 오류 여부 검사, 오류 시 m_sLastError에 메시지 저장
	bool           CheckSyntax(int databaseType, LPCTSTR sqlText);
	// 현재 DB 타입으로 SQL을 토큰화한 뒤 SHA-256 해시값(64자 hex) 반환
	CString        MakeHash1(LPCTSTR sqlText);
	// DB 타입을 직접 지정하여 MakeHash1을 호출하는 래퍼
	CString        MakeHash2(int databaseType, LPCTSTR sqlText);
	// 현재 DB 타입으로 파싱하여 주석 토큰 제거 후 SQL 텍스트 반환
	CString		  RemoveComment1(LPCTSTR sqlText);
	// DB 타입을 직접 지정하여 RemoveComment1을 호출하는 래퍼 (단일 SQL 권장)
	CString		  RemoveComment2(int databaseType, LPCTSTR sqlText);		// single sql 권장
//
	// Parse() 후 m_oSQLEngine에 저장된 SQL 문장 수 반환
	UINT	 GetStatementCount(); // Pass
	// idx번째 SQL 문장의 원본 텍스트를 TOString으로 반환
	TOString GetStatementText(UINT idx); // Pass
	// 첫 번째 의미 있는 토큰(SQL 명령어)을 반환 (예: "SELECT", "UPDATE")
	TOString GetSqlCommand(UINT idx);  // Pass
	// SqlStatementType을 SqlType 열거형으로 매핑하여 반환
	SqlType  GetSqlType(UINT idx);
	// idx번째 문장의 전체 테이블·컬럼 Object 집합 반환
	std::set<std::vector<TOString>>& GetAllObjects(UINT idx); // Pass
	// DML이면 첫 번째 테이블·관련 컬럼만, SELECT이면 traverseSql 결과 전체 반환
	std::set<std::vector<TOString>>  GetAllTargetObjects(UINT idx); // Pass
	// SELECT 결과 컬럼 별칭→원본컬럼 매핑을 mapOrgColumns에 채워 반환
	void GetOriginColumnsOfAlias(std::multimap<TOString, std::vector<TOString> >& mapOrgColumns); // Pass
	// INSERT 문에서 컬럼명·값 목록 추출 (서브쿼리 형태면 false)
	bool GetInsertValues(TOString sqlInsert, std::vector<TOString>& columns, std::vector<TOString>& values); // Pass
//
	// m_sLastError(마지막 파싱 오류 메시지)를 CString으로 반환
	CString GetErrMessage();
	//
	//
protected:
	// DB 타입을 설정하고 파서 내부 상태를 초기화
	bool initParser(int databaseType);
	// SQL 텍스트를 m_oSQLEngine에 파싱, 파싱 오류 시 m_sLastError에 저장
	bool doParse(LPCTSTR sqlText);
	// m_oSQLEngine.Clear()로 파싱 결과·상태를 초기화
	void destroyParser();
	//
	// vecTableRefs/vecColumnRefs 기반으로 m_objects[idx]를 채워 넣음
	bool traverseSql(UINT idx);
	//	void traverseSql(UINT idx, gudusoft::gsqlparser::TCustomSqlStatement stmt); // sqlengine에 위임..?
	//
	// DML 대상 테이블명(별칭 포함)을 반환
	TOString getTable(UINT idx);
	// UPDATE/DELETE WHERE 절 텍스트를 반환
	TOString getWhere(UINT idx);
	// UPDATE SET 절 컬럼명 목록을 콤마 구분 문자열로 반환
	TOString getSelectColumnsForUpdate(UINT idx);
	// INSERT 문으로부터 SELECT 문을 생성하여 ckSelect에 저장
	EM_MAKESELECT_RESULT getSelectStmtForInsert(TOString& ckSelect);
	// WHERE 절에 등장하는 컬럼명 목록을 반환 (비교연산자 앞 식별자 추출)
	std::vector<std::pair<CString, CString>> getWhereInColumn(UINT idx);
	// UPDATE SET 절 col=val 쌍 목록 반환
	std::vector<std::pair<CString, CString>> getSetInColumn(UINT idx);
	//
		// std::set<std::vector<TOString>> setObject(nodes::TTable table);
	// SqlStatementInfo의 vecTableRefs/vecColumnRefs를 이용해 Object 집합 생성
	std::set<std::vector<TOString>> setObject(SqlStatementInfo stmtInfo);

	// idx번째 문장이 UPDATE 문인지 여부 반환
	bool isUpdateStmt(UINT idx);
	// idx번째 문장이 INSERT 또는 REPLACE 문인지 여부 반환
	bool isInsertStmt(UINT idx);
	// idx번째 문장이 DELETE 문인지 여부 반환
	bool isDeleteStmt(UINT idx);
	// idx번째 문장이 MERGE 문인지 여부 반환
	bool isMergeStmt(UINT idx);
	// idx번째 문장이 SELECT 문인지 여부 반환
	bool isSelectStmt(UINT idx);


	// bool hasMatchedClasuse(bool bMatched, gudusoft::gsqlparser::nodes::TMergeWhenClause & node); //???
	// MERGE 문에서 WHEN [NOT] MATCHED 절 존재 여부 반환
	bool hasMatchedClasuse(bool bMatched);

	//
	////	BOOL FindIndexOfDML();
	//	void clearError() { _error.str(std::wstring()); }
	// 내부 _error 스트림을 UTF-8 std::string으로 변환하여 반환
	std::string getError();



public:
	/* 테스트를 위한 함수  */

	// 개발/테스트용 내부 함수: Oracle DB 타입으로 주요 API를 일괄 검증
	void devOracle1();
	// 개발/테스트용 내부 함수: MySQL DB 타입으로 주요 API를 일괄 검증
	void devMySQL1();
	// 개발/테스트용 내부 함수: GetOriginColumnsOfAlias를 다양한 패턴으로 검증
	void dev2();
	// 디버그용: Object 집합 내용을 TRACE로 출력 (column, table, schema, db)
	void debugObjects(std::set<Object> objects);




	//
protected:
	//
	//
		// SQLEngine 인스턴스 멤버변수 - Parse() 후 메타정보 조회에 사용
	SQLEngine m_oSQLEngine;
	//
	//	//jvm::global<gudusoft::gsqlparser::TGSqlParser> m_parser;
	int m_dbType;
	DatabaseType m_emAntlrDBType;
	bool m_bUppercase;
	// std::wstring m_wstrsql; // 한개의 SQL 문장을 담는 멤버 변수로 보여집니다.
	std::string m_strsql;
	std::vector<std::set<std::vector<TOString>> > m_objects; // 실제로 sql statement 목록을 담는 함수로 보여집니다. ( m_oSQLEngine과 동작 유사해보임 , 굳이 안가지고 있어도 될거같은 변수임 )
	std::wstringstream _error;
	std::string m_sLastError;
	// std::stringstream _error;
};
//
