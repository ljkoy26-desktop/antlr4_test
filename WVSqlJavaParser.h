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

#include "../src_core/SqlParserLib/SQLEngine.h"

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

enum EM_MAKESELECT_RESULT { RT_SUCCESS = 0, RT_PARSE_FAIL, RT_NOT_SUPPORT_INSERT_TYPE, RT_INSERT_SHOW_AFTERDATA, RT_EMPTY_TABLE_NAME, RT_DELETE, RT_UPDATE};

class SO_SQL_PARSER_EXT_CLASS CWVSqlParser
{
public:
	// void dev();
	
	CWVSqlParser();
	CWVSqlParser(int databaseType, bool bUppercase = true);
	~CWVSqlParser();

	typedef std::vector<TOString> Object;
	enum SqlType { SqlTypeUnknown, SqlTypeQuery, SqlTypeDML, SqlTypeDDL, SqlTypeDCL, SqlTypePLSQL, SqlTypeETC };
	enum SqlCommand { SqlCmdUnknown, SqlSelect, SqlInsert, SqlUpdate, SqlDelete, SqlMerge};
//
public:
	bool MakeBeforeData(LPCTSTR sqlText, std::vector< std::vector<TOString> >& data);
	bool MakeAfterData(LPCTSTR sqlText, std::vector< std::vector<TOString> >& data);
	bool MakeInsertAfterData(std::vector< std::vector<TOString> >& afterData);
	bool MakeDeleteBeforeData(std::vector< std::vector<TOString> >& afterData);
	bool MakeUpdateAfterData(std::vector< std::vector<TOString> >& afterData);
	bool MakeUpdateBeforeData(std::vector< std::vector<TOString> >& afterData);
//
	bool Parse(LPCTSTR sqlText);
////	void Clear();
	EM_MAKESELECT_RESULT MakeSelectStmt(LPCTSTR sqlText, TOString& strSelect);
	EM_MAKESELECT_RESULT MakeSelectAfterStmt(LPCTSTR sqlText, TOString& strSelect);
	EM_MAKESELECT_RESULT MakeAfterSelect4Merge(LPCTSTR sqlText, TOString& strSelect);
	bool IsIncludeWhereInSet(CString sqlText);
	bool IsIncludeWhereInSet(UINT idx);
	std::vector<CString>  SeparateSQL	(int databaseType, LPCTSTR sqlText);
	CString Formatter();
	//
	bool           CheckSyntax(int databaseType, LPCTSTR sqlText);
	CString        MakeHash1(LPCTSTR sqlText);
	CString        MakeHash2(int databaseType, LPCTSTR sqlText);
	CString		  RemoveComment1(LPCTSTR sqlText);
	CString		  RemoveComment2(int databaseType, LPCTSTR sqlText);		// single sql 권장
//
	UINT	 GetStatementCount();
	TOString GetStatementText(UINT idx);
	TOString GetSqlCommand(UINT idx);
	SqlType  GetSqlType(UINT idx);
	std::set<std::vector<TOString>>& GetAllObjects(UINT idx);
	std::set<std::vector<TOString>>  GetAllTargetObjects(UINT idx);
	void GetOriginColumnsOfAlias(std::multimap<TOString, std::vector<TOString> >& mapOrgColumns);
	bool GetInsertValues(TOString sqlInsert, std::vector<TOString>& columns, std::vector<TOString>& values);
//
	CString GetErrMessage();
//
//
protected:
	bool initParser(int databaseType);
	bool doParse(LPCTSTR sqlText);
	void destroyParser();
//
	bool traverseSql(UINT idx);
//	void traverseSql(UINT idx, gudusoft::gsqlparser::TCustomSqlStatement stmt); // sqlengine에 위임..?
// 
	TOString getTable(UINT idx);
	TOString getWhere(UINT idx);
	TOString getSelectColumnsForUpdate(UINT idx);
	EM_MAKESELECT_RESULT getSelectStmtForInsert(TOString& ckSelect);
	std::vector<std::pair<CString, CString>> getWhereInColumn(UINT idx);
	std::vector<std::pair<CString, CString>> getSetInColumn(UINT idx);
// 
	// std::set<std::vector<TOString>> setObject(nodes::TTable table);
	std::set<std::vector<TOString>> setObject(SqlStatementInfo stmtInfo);
	
	void debugObjects(std::set<Object> objects);
	bool isUpdateStmt(UINT idx);
	bool isInsertStmt(UINT idx);
	bool isDeleteStmt(UINT idx);
	bool isMergeStmt(UINT idx);
	bool isSelectStmt(UINT idx);


	// bool hasMatchedClasuse(bool bMatched, gudusoft::gsqlparser::nodes::TMergeWhenClause & node); //???
	bool hasMatchedClasuse(bool bMatched);
	
//
////	BOOL FindIndexOfDML();
//	void clearError() { _error.str(std::wstring()); }
	std::string getError();
//
protected:
//
//
	// SQLEngine 인스턴스 멤버변수 - Parse() 후 메타정보 조회에 사용
	SQLEngine m_oSQLEngine;
//
//	//jvm::global<gudusoft::gsqlparser::TGSqlParser> m_parser;
	int m_dbType;
	bool m_bUppercase;
	// std::wstring m_wstrsql; // 한개의 SQL 문장을 담는 멤버 변수로 보여집니다.
	std::string m_strsql;
	std::vector<std::set<std::vector<TOString>> > m_objects; // 실제로 sql statement 목록을 담는 함수로 보여집니다. ( m_oSQLEngine과 동작 유사해보임 , 굳이 안가지고 있어도 될거같은 변수임 )
	std::wstringstream _error;
	// std::stringstream _error;
};
//
