#include "StdAfx.h"
#include "WVSqlJavaParser.h"
#include "outil/UtilFunc.h"
#include <codecvt>

// #include "WVSqlParser-SqlTypeSet.h"
// #include "WVSqlParser-TokenType.h"

#include "OUtil/WVUtilTrace.h"
#include "outil/WVString.h"
#include "resource.h"
#include "OrangeMsg.h"

// Orange DB Type -> AntLR DB Type
 
static DatabaseType ConvertAntlrDbType(int dbType)
{
	// 기존 GSP DB 타입과 유사하게 case문 유지함 

	switch (dbType)
	{
	case DB_TYPE::tstORACLE:
	case DB_TYPE::tstAltibase:
	case DB_TYPE::tstTibero:
		return DatabaseType::DB_ORACLE;
	case DB_TYPE::tstMSSQL:
		return DatabaseType::DB_SQLSERVER;
	case DB_TYPE::tstMariaDB:
	case DB_TYPE::tstMySQL:
	case DB_TYPE::tstSunDB:
	case DB_TYPE::tstGoldilocksDB:
	case DB_TYPE::tstTDV:
		return DatabaseType::DB_MYSQL;
	case DB_TYPE::tstPostgreSQL:
	case DB_TYPE::tstGreenplum:
		return DatabaseType::DB_POSTGRESQL;
	case DB_TYPE::tstDB2:
	case DB_TYPE::tstDB2forZOS:
	case DB_TYPE::tstDB2foriSeries:
		return DatabaseType::DB_DB2;


	default:
	// case DB_TYPE::tstInformix:
		// case DB_TYPE::tstVertica:
	// case DB_TYPE::tstTeraData:
	// case DB_TYPE::tstNetezza:
		// case DB_TYPE::tstSapHana:
	// case DB_TYPE::tstSymforware:
	// case DB_TYPE::tstCubrid:
		return DatabaseType::DB_ORACLE;
	}
}

// ──────────────────────────────────────────────────────────────────────────────
// dev() 내부 공통 헬퍼: 2D 데이터 TRACE 출력
// ──────────────────────────────────────────────────────────────────────────────
static void DevPrint2D(const std::vector<std::vector<TOString>>& data, LPCTSTR szLabel)
{
	TRACE(_T("[%s] 행수=%d\n"), szLabel, (int)data.size());
	for (size_t r = 0; r < data.size(); r++)
	{
		CString sRow;
		for (size_t c = 0; c < data[r].size(); c++)
		{
			if (c > 0)
				sRow += _T(", ");
			sRow += data[r][c];
		}
		TRACE(_T("  [%d] %s\n"), (int)r, sRow);
	}
}

void CWVSqlParser::dev()
{
	TRACE(_T("\n ========= CWVSqlParser::dev() START ========= \n"));

	CStringW              sql;
	TOString              strSelect;
	EM_MAKESELECT_RESULT  ret;

	// ──────────────────────────────────────────────────────────────────
	// [1] Parse / IsParse / GetStatementCount / GetStatementText / GetSqlCommand
	// ──────────────────────────────────────────────────────────────────
	try
	{
		TRACE(_T("\n===== [1] Parse / IsParse / GetStatementCount / GetStatementText / GetSqlCommand =====\n"));
		initParser(DB_TYPE::tstORACLE);

		sql = _T("SELECT e.empno, e.ename FROM scott.emp e WHERE e.deptno = 10;");
		Parse(sql);

		TRACE(_T("[IsParse] %s\n"), IsParse() ? _T("true") : _T("false"));
		TRACE(_T("[GetStatementCount] %d\n"), GetStatementCount());

		for (UINT i = 0; i < GetStatementCount(); i++)
		{
			TRACE(_T("[GetStatementText(%u)] %s\n"), i, GetStatementText(i));
			TRACE(_T("[GetSqlCommand(%u)]    %s\n"), i, GetSqlCommand(i));
		}
	}
	catch (std::exception& e)
	{
		TRACE(_T("[예외] %s\n"), CA2T(e.what(), CP_UTF8));
	}

	// ──────────────────────────────────────────────────────────────────
	// [2] GetAllObjects / GetAllTargetObjects
	// ──────────────────────────────────────────────────────────────────
	try
	{
		TRACE(_T("\n===== [2] GetAllObjects / GetAllTargetObjects =====\n"));
		initParser(DB_TYPE::tstORACLE);

		sql = _T("begin ")
			_T("update emp set a=1 where 1=0; ")
			_T("end ");
		//sql = _T("select e.*, e.*, RSDN_RGST_NO as ea from \"고객식별자_NEW\" e;");
		Parse(sql);
		{
			std::multimap<TOString, Object > mapColumns;
			GetOriginColumnsOfAlias(mapColumns);

			debugObjects(GetAllObjects(0));
			debugObjects(GetAllTargetObjects(0));

		}

		sql = _T("SELECT substr(RSDN_RGST_NO, 6) as rr FROM MKKIM.고객식별자_NEW;");
		Parse(sql);
		{
			std::multimap<TOString, Object > mapColumns;
			GetOriginColumnsOfAlias(mapColumns);
		}

		sql = _T("SELECT substr(RSDN_RGST_NO, 6) FROM MKKIM.고객식별자_NEW;");
		Parse(sql);
		{
			std::multimap<TOString, Object > mapColumns;
			GetOriginColumnsOfAlias(mapColumns);
		}

		sql = _T(
			"update\n"
			"scott.emp\n"
			"set\n"
			"comm = case\n"
			"when length(round(comm)) < 4 then comm * 10\n"
			"when length(round(comm)) > 4 then comm / 10\n"
			"when length(round(comm)) = 4 then round(comm)\n"
			"else 1000\n"
			"end\n"
			"where\n"
			"sals > 3000 \n"
			"and comm is not null\n"
			"and band = (select band from sys.emp where comm is not null)"
		);
		
		Parse(sql);
		debugObjects(GetAllObjects(0));
		debugObjects(GetAllTargetObjects(0));

		sql = _T(
			"select count(*) from scott.emp where ename is not null\n"
		);
		Parse(sql);
		debugObjects(GetAllObjects(0));
		debugObjects(GetAllTargetObjects(0));


		sql = _T("INSERT INTO ")
			_T("  \"SYS\".\"SCOTT_EMP\" ( ")
			_T("    \"A_EMPNO\", ")
			_T("    \"A_ENAME\", ")
			_T("    \"A_JOB\", ")
			_T("    \"A_MGR\", ")
			_T("    \"A_HIREDATE\", ")
			_T("    \"A_SAL\", ")
			_T("    \"A_COMM\", ")
			_T("    \"A_DEPTNO\", ")
			_T("    \"A_TS\", ")
			_T("    \"B_EMPNO\", ")
			_T("    \"B_ENAME\", ")
			_T("    \"B_JOB\", ")
			_T("    \"B_MGR\", ")
			_T("    \"B_HIREDATE\", ")
			_T("    \"B_SAL\", ")
			_T("    \"B_COMM\", ")
			_T("    \"B_DEPTNO\", ")
			_T("    \"B_TS\", ")
			_T("    \"C_EMPNO\", ")
			_T("    \"C_ENAME\", ")
			_T("    \"C_JOB\", ")
			_T("    \"C_MGR\", ")
			_T("    \"C_HIREDATE\", ")
			_T("    \"C_SAL\", ")
			_T("    \"C_COMM\", ")
			_T("    \"C_DEPTNO\", ")
			_T("    \"C_TS\", ")
			_T("    \"D_EMPNO\", ")
			_T("    \"D_ENAME\", ")
			_T("    \"D_JOB\", ")
			_T("    \"D_MGR\", ")
			_T("    \"D_HIREDATE\", ")
			_T("    \"D_SAL\", ")
			_T("    \"D_COMM\", ")
			_T("    \"D_DEPTNO\", ")
			_T("    \"D_TS\" ")
			_T("  ) ")
			_T("VALUES ")
			_T("  ( ")
			_T("    8261, ")
			_T("    'eJOJaRWvELPqehLYPHpyXwzIPffNCtTIMhzkGvbSDPtFWITHngsxLIWUzqfvyCcVBKlONrHxeqFD', ")
			_T("    'uUngGA', ")
			_T("    379, ")
			_T("    TO_DATE('2018/04/09', 'YYYY/MM/DD'), ")
			_T("    81034.77, ")
			_T("    89185.41, ")
			_T("    21, ")
			_T("    TO_DATE('2020/04/24', 'YYYY/MM/DD'), ")
			_T("    6374, ")
			_T("    'uEpdjrGveSsEekmndiCHjPGzOejChZDaCQQkMvillhfGk', ")
			_T("    'ps', ")
			_T("    2111, ")
			_T("    TO_DATE('2016/01/14', 'YYYY/MM/DD'), ")
			_T("    71738.69, ")
			_T("    68843.17, ")
			_T("    96, ")
			_T("    TO_DATE('2015/04/23', 'YYYY/MM/DD'), ")
			_T("    6732, ")
			_T("    'AxUuQBrJtVPArYKsFEpOQRQNXJWbalfPFKzEfUKMlwJNqpati', ")
			_T("    'GNwVaM', ")
			_T("    7962, ")
			_T("    TO_DATE('2012/09/25', 'YYYY/MM/DD'), ")
			_T("    49836.97, ")
			_T("    60565.55, ")
			_T("    23, ")
			_T("    TO_DATE('2017/01/29', 'YYYY/MM/DD'), ")
			_T("    1095, ")
			_T("    'JGRLzljYUfUlTXKvzJGybvocXPyl', ")
			_T("    'GrzynTroP', ")
			_T("    6331, ")
			_T("    TO_DATE('2017/08/25', 'YYYY/MM/DD'), ")
			_T("    38515.43, ")
			_T("    80846.87, ")
			_T("    26, ")
			_T("    TO_DATE('2012/05/16', 'YYYY/MM/DD') ")
			_T("  ) ");
		
		Parse(sql);
		debugObjects(GetAllObjects(0));
		debugObjects(GetAllTargetObjects(0));

		ret = MakeSelectStmt(sql, strSelect);
		if (RT_PARSE_FAIL == ret)
		{
			TRACE(_T("MakeSelectStmt 실패\n"));
			return;
		}
		TRACE(_T("\n[MakeSelectStmt]\n %s\n"), strSelect);

		ret = MakeSelectAfterStmt(sql, strSelect);
		if (RT_PARSE_FAIL == ret)
		{
			TRACE(_T("MakeSelectStmt 실패\n"));
			return;
		}
		TRACE(_T("\n[MakeSelectAfterStmt]\n %s\n"), strSelect);

		TRACE(_T(" ========= 변경전후 쿼리 테스트   ========= \n"));
		//sql = _T(
		//	"MERGE INTO CSSADM.TB_EL_DEVC_MSTR A \n"
		//	"USING CHLEE.TB_EL_DEVC_MSTR_BY_SB_TMP PARTITION(P_003269) B -- EDIT[이관번호] \n"
		//	"ON(A.DEVC_NO = B.DEVC_NO) \n"
		//	"WHEN MATCHED THEN \n"
		//	"UPDATE \n"
		//	"SET \n"
		//	"A.DEVC_POSN_BIZBR_CD = B.LATER_AS_DLR_CD --소속 대리점 \n"
		//	",A.RMKS_CNTNT = '대리점교체[2021.01.01][2021년 홈개통AS 권역이관(협력사/자회사)요청][홈개통AS현장지원팀-2012-0029]' \n"
		//	",A.SYS_UPDATE_DATE = SYSDATE\n"
		//);
		sql = _T("merge into pm_user2 ")
			_T("using emp ")
			_T("on (USER_ID = TO_CHAR(EMPNO)) ")
			_T("when matched then ")
			_T("update set  USER_NAME = ename ")
			_T("when not matched then ")
			_T("insert (user_id, user_name) ")
			_T("values (TO_CHAR(EMPNO), ename) ");

		Parse(sql);
		ret = MakeSelectStmt(sql, strSelect);
		if (RT_PARSE_FAIL == ret)
		{
			TRACE(_T("MakeSelectStmt 실패\n"));
			return;
		}
		TRACE(_T("\n[MakeSelectStmt]\n %s\n"), strSelect);

		sql = _T("merge into MKKIM.PM_USER2 T ")
			_T("using mkkim.pm_user S ")
			_T("on (S.USER_ID = T.USER_ID) ")
			_T("when not matched then ")
			_T("    insert (t.user_id, t.user_name) ")
			_T("    values (s.user_id, '박상은') ");

		Parse(sql);

		ret = MakeSelectStmt(sql, strSelect);
		if (RT_PARSE_FAIL == ret)
		{
			TRACE(_T("MakeSelectStmt 실패\n"));
			return;
		}
		TRACE(_T("\n[MakeSelectStmt]\n %s\n"), strSelect);

		ret = MakeSelectAfterStmt(sql, strSelect);
		if (RT_PARSE_FAIL == ret)
		{
			TRACE(_T("MakeSelectStmt 실패\n"));
			return;
		}
		TRACE(_T("\n[MakeSelectAfterStmt]\n %s\n"), strSelect);

		sql = _T(" INSERT INTO dbo.EmployeeSales ")
			_T(" SELECT 'SELECT', sp.BusinessEntityID, c.LastName, sp.SalesYTD ")
			_T(" FROM Sales.SalesPerson AS sp ")
			_T(" INNER JOIN Person.Person AS c ")
			_T(" ON sp.BusinessEntityID = c.BusinessEntityID ")
			_T(" WHERE sp.BusinessEntityID LIKE '2%' ")
			_T(" ORDER BY sp.BusinessEntityID, c.LastName ");
		TRACE(_T("[Parse] %s\n"), sql);
		ret = MakeSelectAfterStmt(sql, strSelect);
		if (RT_PARSE_FAIL == ret)
		{
			TRACE(_T("MakeSelectAfterStmt 실패\n"));
			return;
		}
		TRACE(_T("[MakeSelectAfterStmt] %s\n"), strSelect);

		TRACE(" ========= set=where조건 테스트   ========= \n");
		sql = _T(
			"update\n"
			"scott.emp\n"
			"set\n"
			"comm = case\n"
			"when length(round(comm)) < 4 then comm * 10\n"
			"when length(round(comm)) > 4 then comm / 10\n"
			"when length(round(comm)) = 4 then round(comm)\n"
			"else 1000\n"
			"end\n"
			"where\n"
			"sals > 3000 \n"
			"and comm is not null\n"
		);
		if (!IsIncludeWhereInSet(sql))
		{
			TRACE(_T("IsIncludeWhereInSet 실패\n"));
			return;
		}
		ret = MakeSelectStmt(sql, strSelect);
		if (RT_PARSE_FAIL == ret)
		{
			TRACE(_T("MakeSelectStmt 실패\n"));
			return;
		}
		TRACE(_T("[MakeSelectStmt] %s\n"), strSelect);

		ret = MakeSelectAfterStmt(sql, strSelect);
		if (RT_PARSE_FAIL == ret)
		{
			TRACE(_T("MakeSelectAfterStmt 실패\n"));
			return;
		}
		TRACE(_T("[MakeSelectAfterStmt] %s\n"), strSelect);

		sql = _T(
			"insert into emp;"
		);
		CheckSyntax(DB_TYPE::tstORACLE, sql);
		TRACE(_T("[CheckSyntax] \n%s\n%s\n"), sql, GetErrMessage());

		TRACE(_T(" ========= target object 추출 테스트   ========= \n"));
		/*"select name from emp, dept;\n"*/
		//"UPDATE scott.source s SET s.name='한글', no=10\n"
		//" WHERE s.top IN (\n"
		//"  SELECT top FROM scott2.target INNER JOIN dest ON target.no=dest.target WHERE xx=s.no\n"
		//" );\n"
	//"INSERT INTO Production.UnitMeasure (Name, UnitMeasureCode,ModifiedDate) \n"
	//	"VALUES(N'Square Yards', N'Y2', GETDATE()); "

		sql = _T(
			"UPDATE "
			"( "
			"    SELECT A.LGT_SELNG_AMT, "
			"           ROUND(b.fix_SELNG_AMT / 1000) AS AMT "
			"      FROM CSSADM.TB_MK_ENPR_CUST_MS_INFO A, "
			"           CSSADM.TB_MK_CUST_MS_MON_IF_02 B "
			"     WHERE A.SELNG_YYMM = '202011' "
			"       AND A.SELNG_YYMM = B.BASE_YYMM(+) "
			"       AND A.SELNG_UNIT_BIS_CD = B.SELNG_UNIT_SVC_CD(+) "
			") SET LGT_SELNG_AMT = AMT ;"
		);
		Parse(sql);
		debugObjects(GetAllObjects(0));
		debugObjects(GetAllTargetObjects(0));

		TRACE(_T(" ========= TEST   ========= \n"));

		sql = _T("                       SELECT * FROM (" \
			"                               SELECT tax_rates.* FROM" \
			"                                       wp_woocommerce_tax_rates as tax_rates" \
			"                               LEFT OUTER JOIN" \
			"                                       wp_woocommerce_tax_rate_locations as locations ON tax_rates.tax_rate_id = locations.tax_rate_id" \
			"                               LEFT OUTER JOIN" \
			"                                       wp_woocommerce_tax_rate_locations as locations2 ON tax_rates.tax_rate_id = locations2.tax_rate_id" \
			"                               WHERE" \
			"                                       tax_rate_country IN ( 'GB', '' )" \
			"                                       AND tax_rate_state IN ( '', '' )" \
			"                                       AND tax_rate_class = ''" \
			"                                       AND" \
			"                                       (" \
			"                                               (" \
			"                                                       locations.location_type IS NULL" \
			"                                               )" \
			"                                               OR" \
			"                                               (" \
			"                                                       locations.location_type = 'postcode'" \
			"                                                       AND locations.location_code IN ('*','')" \
			"                                                       AND locations2.location_type = 'city'" \
			"                                                       AND locations2.location_code = ''" \
			"                                               )" \
			"                                               OR" \
			"                                               (" \
			"                                                       locations.location_type = 'postcode'" \
			"                                                       AND locations.location_code IN ('*','')" \
			"                                                       AND 0 = (" \
			"                                                               SELECT COUNT(*) FROM wp_woocommerce_tax_rate_locations as sublocations" \
			"                                                               WHERE sublocations.location_type = 'city'" \
			"                                                               AND sublocations.tax_rate_id = tax_rates.tax_rate_id" \
			"                                                       )" \
			"                                               )" \
			"                                               OR" \
			"                                               (" \
			"                                                       locations.location_type = 'city'" \
			"                                                       AND locations.location_code = ''" \
			"                                                       AND 0 = (" \
			"                                                               SELECT COUNT(*) FROM wp_woocommerce_tax_rate_locations as sublocations" \
			"                                                               WHERE sublocations.location_type = 'postcode'" \
			"                                                               AND sublocations.tax_rate_id = tax_rates.tax_rate_id" \
			"                                                       )" \
			"                                               )" \
			"                                       )" \
			"                               GROUP BY" \
			"                                       tax_rate_id" \
			"                               ORDER BY" \
			"                                       tax_rate_priority, tax_rate_order" \
			"                       ) as ordered_taxes" \
			"                       GROUP BY" \
			"                               tax_rate_priority");
		Parse(sql);
		debugObjects(GetAllObjects(0));
		debugObjects(GetAllTargetObjects(0));


		TRACE(_T(" ========= Make Hash 테스트   ========= \n"));
		sql = _T(
			"insert into 테이블 values ('김민경');"
		);
		TRACE(_T("%s\n"), sql);
		ASSERT(MakeHash1(sql).Compare(_T("30A02298808BE1AC5F694745754829722DD7BC292186CF07B1DDF4FA411FE370")) == 0);

		sql = _T(
			"insert into "
			"			at2adm.tb_cm_email_batch_mail_info( "
			"				batch_id, "
			"				email_dv_cd, "
			"				to_email, "
			"				use_yn, "
			"				sys_create_date, "
			"				operator_id "
			"			) "
			"			values "
			"			( "
			"				'PIMDB1180M', "
			"				'T', "
			"				'melisasr@lguplus.co.kr', "
			"				'Y', "
			"				sysdate, "
			"				'박새롬' "
			"			) "
		);
		TRACE(_T("%s\n"), sql);
		ASSERT(MakeHash1(sql).Compare(_T("162BBDAA67ADD489E3626DBF8A13514C5979381EB1B6F90D6AF31A103965693C")) == 0);


		sql = _T(
			"/*1번*/\n"
			"select * --line comment\n"
			"	from emp /*abc*/ "
			"where ename = 'job';"
		);
		TRACE(_T("%s\n"), sql);
		CString s1 = MakeHash1(sql);
		sql = _T(
			"/*2번*/\n"
			"select * -- modify comment \n"
			"	\t from emp /*abcdefg*/ \n\n"
			"where ename = 'job'"
		);
		TRACE(_T("%s\n"), sql);
		CString s2 = MakeHash1(sql);
		ASSERT(s1 == s2);

		sql = _T(
			"update emp \n"
			"set 11=11 \n"
			"where 12=12;"
		);
		TRACE(_T("%s\n"), sql);
		CString sss = MakeHash1(sql);


		ASSERT(MakeHash1(_T("update scott.emp set empno = 1111 where empno = 1112")).Compare(_T("220D08037355EB61DE6990AEF5BF007F7D47F5F3347FB5E483CAE7EFAC9F51F6")) == 0);
		ASSERT(MakeHash1(_T("update scott.emp set empno = 1111    \n\n\n\n\n\n where empno = 1112;")).Compare(_T("220D08037355EB61DE6990AEF5BF007F7D47F5F3347FB5E483CAE7EFAC9F51F6")) == 0);
		ASSERT(MakeHash1(_T("WITH TEST AS ( \n"
			"SELECT \n"
			"* \n"
			"FROM scott.emp \n"
			"WHERE empno BETWEEN 1000 and 9999 \n"
			"AND EXISTS(SELECT 1 FROM scott.emp) \n"
			") \n"
			"SELECT \n"
			"* \n"
			"FROM scott.dept d \n"
			"INNER JOIN TEST t ON d.deptno = t.deptno")).Compare(_T("83DBDC83D7B11AAF1DC47E6B8C2B4C4BD7F1039DEB69852AD2FDBEDDAABB210E")) == 0);


		TRACE(" ========= mysql replace 구문 테스트   ========= \n");
		initParser(DB_TYPE::tstMySQL);
		sql = _T(
			"REPLACE INTO cities\n"
			"SET id = 4,\n"
			"name = 'Phoenix',\n"
			"population = 1768980;\n"
		);
		Parse(sql);
		ret = MakeSelectStmt(sql, strSelect);
		if (RT_PARSE_FAIL == ret)
		{
			TRACE(_T("MakeSelectStmt 실패\n"));
			return;
		}
		ret = MakeSelectAfterStmt(sql, strSelect);
		if (RT_PARSE_FAIL == ret)
		{
			TRACE(_T("MakeSelectStmt 실패\n"));
			return;
		}
	}
	catch (exception& e)
	{
		TRACE(_T("An exception occurred: %s"), e.what()/*CA2T(e.what(), CP_UTF8)*/);
	}

}


CWVSqlParser::CWVSqlParser()
{
}

CWVSqlParser::CWVSqlParser(int databaseType, bool bUppercase)
	: m_bUppercase(bUppercase)
{
	initParser(databaseType);
}

CWVSqlParser::~CWVSqlParser()
{
	destroyParser();
}

std::string CWVSqlParser::getError()
{
	TRACE(_T(" ========= CWVSqlParser::getError()   ========= \n"));

	std::wstring_convert<std::codecvt_utf8<wchar_t>> myconv;
	return myconv.to_bytes(_error.str());
	// return myconv.to_bytes(_error.str());
}

static UINT ThrSelfKill(LPVOID sleepms)
{
	TRACE(_T(" ========= ThrSelfKill sleepms [%d]   ========= \n"), (DWORD)sleepms);
	Sleep((DWORD)sleepms);
	HANDLE hnd;
	hnd = OpenProcess(SYNCHRONIZE | PROCESS_TERMINATE, TRUE, GetCurrentProcessId());
	if (hnd)
		TerminateProcess(hnd, 0);
	return 0;
}

void CWVSqlParser::destroyParser()
{
	TRACE(_T(" ========= CWVSqlParser::destroyParser()   ========= \n"));
	m_oSQLEngine.Clear();
}

bool CWVSqlParser::initParser(int databaseType)
{
	TRACE(_T(" ========= CWVSqlParser::initParser databaseType [%d]   ========= \n"), databaseType);
	destroyParser();
	m_dbType = databaseType;

	m_emAntlrDBType = ConvertAntlrDbType(m_dbType);

	return true;
}

bool CWVSqlParser::doParse(LPCTSTR sqlText)
{
	m_oSQLEngine.Clear();

	m_strsql = CT2A(sqlText);

	bool bParse = m_oSQLEngine.Parse(m_strsql, (int)m_emAntlrDBType);

	if (m_oSQLEngine.GetStatementCount() == 1)
	{
		SqlStatementInfo stInfo = m_oSQLEngine.GetStatements().at(0);
		if (stInfo.bHasError && !stInfo.szParseErrorMsg.empty())
			m_sLastError = stInfo.szParseErrorMsg;
	}	

	TRACE(_T(" ========= CWVSqlParser::doParse 파싱성공여부 [%d : %s]   ========= \n"), bParse, sqlText);
	return bParse;
}

std::vector<CString> CWVSqlParser::SeparateSQL(int databaseType, LPCTSTR sqlText)
{
	TRACE(_T(" ========= CWVSqlParser::SeparateSQL databaseType [%d] sqlText [%s]   ========= \n"), databaseType, sqlText);
	
	std::vector<CString> ret;

	if (m_oSQLEngine.GetStatementCount() == 0)
		initParser(databaseType);

	m_strsql = CT2A(sqlText);
	const std::vector<SqlStatementInfo>& vec = m_oSQLEngine.GetStatements();

	int nSQLCount = vec.size();
	for (int i = 0; i < nSQLCount; i++)
	{
		SqlStatementInfo stInfo = vec[i];
		ret.push_back(stInfo.sqlText.c_str());
	}

	return ret;
}

bool CWVSqlParser::CheckSyntax(int databaseType, LPCTSTR sqlText)
{
	TRACE(_T(" ========= CWVSqlParser::CheckSyntax databaseType [%d] sqlText [%s]   ========= \n"), databaseType, sqlText);

	SQLEngine engine;
	std::string sql = CT2A(sqlText);
	m_sLastError.clear();

	bool bReturn = engine.Parse(sql, (int)m_emAntlrDBType);

	if (!bReturn)
		return false;		

	SqlStatementInfo stInfo = engine.GetStatements().at(0);
	if (stInfo.bHasError && !stInfo.szParseErrorMsg.empty())
	{
		m_sLastError = stInfo.szParseErrorMsg;
		return false;
	}		

	return bReturn;
}
CString CWVSqlParser::MakeHash1(LPCTSTR sqlText)
{
	TRACE(_T(" ========= CWVSqlParser::MakeHash1 sqlText [%s]   ========= \n"), sqlText);
	CString hash;
	const char delim = ' ';

	try
	{
		if (m_oSQLEngine.GetStatementCount() == 0)
			initParser(m_dbType);

		m_strsql = CT2A(sqlText);

		BCRYPT_ALG_HANDLE hAlg = NULL;
		BCRYPT_HASH_HANDLE hHash = NULL;
		PBYTE pbHash = NULL, pbHashObject = NULL;
		DWORD cbData, cbHash, cbHashObject;

		BCryptOpenAlgorithmProvider(&hAlg, BCRYPT_SHA256_ALGORITHM, NULL, 0);
		BCryptGetProperty(hAlg, BCRYPT_OBJECT_LENGTH, (PBYTE)&cbHashObject, sizeof(DWORD), &cbData, 0);
		pbHashObject = (PBYTE)alloca(cbHashObject);
		BCryptGetProperty(hAlg, BCRYPT_HASH_LENGTH, (PBYTE)&cbHash, sizeof(DWORD), &cbData, 0);
		pbHash = (PBYTE)alloca(cbHash);
		BCryptCreateHash(hAlg, &hHash, pbHashObject, cbHashObject, NULL, 0, 0);

		m_oSQLEngine.Clear();
		m_oSQLEngine.Parse(m_strsql, (int)m_emAntlrDBType);

		std::vector<TokenInfo> vecToken = m_oSQLEngine.GetTokens();
		int nTotalCnt = vecToken.size();

		for (int i = 0; i < nTotalCnt; i++)
		{
			TokenInfo tok = vecToken.at(i);
			CStringA tokStr = tok.text.c_str();

			LPSTR pStr = tokStr.GetBuffer();
			int nStrLen = tokStr.GetLength();

			bool exact = false;
			bool skip = false;

			if (tok.role == TokenRole::KEYWORD_RETURN ||
				tok.role == TokenRole::COMMENT ||
				tok.role == TokenRole::SEPARATOR_SEMICOLON ||
				tok.role == TokenRole::WHITESPACE)
			{
				continue;
			}

			switch (tok.role)
			{
			case TokenRole::LITERAL_INTEGER:
			case TokenRole::LITERAL_FLOAT:
			case TokenRole::LITERAL_STRING:
			{
				exact = true;
				break;
			}
			case TokenRole::IDENTIFIER:
			{
				if (*pStr == '"' || *pStr == '`')
					exact = true;
				break;
			}
			}

			UCHAR token[MAXIMUM_REPARSE_DATA_BUFFER_SIZE];
			memset(token, 0, MAXIMUM_REPARSE_DATA_BUFFER_SIZE);
			//PUCHAR token = (PUCHAR)alloca(nStrLen + 1);
			int nTemp = nStrLen;
			if (nStrLen > MAXIMUM_REPARSE_DATA_BUFFER_SIZE - 1)
			{
				CString strTemp;
				strTemp.Format(_T("CWVSqlParser::MakeHash - Too much token -[%d]"), nStrLen);
				WVTRACE(strTemp);
				nTemp = MAXIMUM_REPARSE_DATA_BUFFER_SIZE - 1;
			}
			*token = delim;
			if (exact)
			{
				memcpy(token + 1, pStr, nTemp);
			}
			else for (int j = 0; j < nTemp; ++j)
				token[j + 1] = toupper(pStr[j]);

			BCryptHashData(hHash, token, nTemp + 1, 0);
		}

		BCryptFinishHash(hHash, pbHash, cbHash, 0);

		LPTSTR buffer = hash.GetBufferSetLength(cbHash * 2);
		for (DWORD i = 0; i < cbHash; ++i)
			_stprintf(buffer + (i * 2), _T("%02X"), pbHash[i] & 0xff);
		TRACE(_T("Hash SQL: %s\n"), hash);

		BCryptDestroyHash(hHash);
		BCryptCloseAlgorithmProvider(hAlg, 0);
	}
	catch (exception e)
	{
		TRACE(L"An exception occurred: %s", static_cast<LPCTSTR>(CA2T(e.what(), CP_UTF8)));
	}
	return hash;
}

CString CWVSqlParser::MakeHash2(int databaseType, LPCTSTR sqlText)
{
	TRACE(_T(" ========= CWVSqlParser::MakeHash2 databaseType [%d] sqlText [%s]   ========= \n"), databaseType, sqlText);
	try
	{
		CWVSqlParser sqlparser;
		sqlparser.initParser(databaseType);
		return sqlparser.MakeHash1(sqlText);
	}
	catch (exception e)
	{
		TRACE(L"An exception occurred: %s", static_cast<LPCTSTR>(CA2T(e.what(), CP_UTF8)));
	}
	return _T("");
}

CString CWVSqlParser::RemoveComment1(LPCTSTR sqlText)
{
	TRACE(_T(" ========= CWVSqlParser::RemoveComment1 sqlText [%s]   ========= \n"), sqlText);

	std::string result;

	try
	{
		SQLEngine engine;
		std::string sql = CT2A(sqlText);
		if (!engine.Parse(sql, (int)m_emAntlrDBType))
			return _T("");


		
		std::vector<TokenInfo> tokens = engine.GetTokens();
		for (int i = 0; i < tokens.size(); i++)
		{
			TokenInfo tok = tokens[i];

			bool skip = false;

			if (SQLEngine::IsCommentType(tok))
				continue;

			result.append(tok.text);
		}
	}
	catch (exception e)
	{
		TRACE(_T("An exception occurred: %s"), static_cast<LPCTSTR>(CA2T(e.what(), CP_UTF8)));
	}

	return (LPTSTR)CW2T(CA2W(result.c_str(), CP_UTF8));
}

CString CWVSqlParser::RemoveComment2(int databaseType, LPCTSTR sqlText)
{
	TRACE(_T(" ========= CWVSqlParser::RemoveComment2 databaseType [%d] sqlText [%s]   ========= \n"), databaseType, sqlText);
	try
	{
		CWVSqlParser sqlparser;
		sqlparser.initParser(databaseType);
		return sqlparser.RemoveComment1(sqlText);
	}
	catch (exception e)
	{
		TRACE(_T("An exception occurred: %s"), static_cast<LPCTSTR>(CA2T(e.what(), CP_UTF8)));
	}

	return _T("");
}

bool CWVSqlParser::Parse(LPCTSTR sqlText)
{
	TRACE(_T(" ========= CWVSqlParser::Parse sqlText [%s]   ========= \n"), sqlText);
	try
	{
		if (doParse(sqlText))
			return true;
	
		TRACE(_T("파싱실패 -> [%s] \n"), m_sLastError.c_str());
	}
	catch (exception e)
	{
		TRACE(_T("An exception occurred: %s"), static_cast<LPCTSTR>(CA2T(e.what(), CP_UTF8)));
	}

	return false;
}

// [GSP→Antlr4 마이그레이션]
// setObject: SqlStatementInfo의 vecTableRefs/vecColumnRefs를 이용해 Object 집합 생성
std::set<std::vector<TOString>> CWVSqlParser::setObject(SqlStatementInfo stmtInfo)
{
	TRACE(_T(" ========= CWVSqlParser::setObject()   ========= \n"));

	std::set<std::vector<TOString>> objs;

	// 테이블 참조 처리: Object = {column="", table, schema, db}
	for (const auto& tableRef : stmtInfo.vecTableRefs)
	{
		TOString table  = CA2W(tableRef.szTable.c_str(),    CP_UTF8);
		TOString schema = CA2W(tableRef.szSchema.c_str(),   CP_UTF8);
		TOString db     = CA2W(tableRef.szDatabase.c_str(), CP_UTF8);

		table.Trim(L"\"");
		schema.Trim(L"\"");
		db.Trim(L"\"");

		if (m_bUppercase) { table.MakeUpper(); schema.MakeUpper(); db.MakeUpper(); }

		std::vector<TOString> tableObj = { L"", table, schema, db };
		objs.insert(tableObj);
	}

	// 컬럼 참조 처리: 테이블 결정 여부에 따라 Object 분기
	for (const auto& colRef : stmtInfo.vecColumnRefs)
	{
		if (colRef.szColumn.empty()) 
			continue;

		TOString col = CA2W(colRef.szColumn.c_str(), CP_UTF8);
		col.Trim(L"\"");
		if (m_bUppercase) col.MakeUpper();

		if (colRef.bTableDetermined && !colRef.szResolvedTable.empty())
		{
			TOString table = CA2W(colRef.szResolvedTable.c_str(), CP_UTF8);
			if (m_bUppercase) table.MakeUpper();

			// 해당 테이블의 스키마·DB 조회
			TOString schema, db;
			for (const auto& t : stmtInfo.vecTableRefs)
			{
				TOString tname = CA2W(t.szTable.c_str(), CP_UTF8);
				if (m_bUppercase) tname.MakeUpper();
				if (tname.CompareNoCase(table) == 0)
				{
					schema = CA2W(t.szSchema.c_str(),   CP_UTF8);
					db     = CA2W(t.szDatabase.c_str(), CP_UTF8);
					if (m_bUppercase) { schema.MakeUpper(); db.MakeUpper(); }
					break;
				}
			}

			std::vector<TOString> colObj = { col, table, schema, db };
			objs.insert(colObj);
		}
		else
		{
			// 테이블 미결정: column만 저장
			std::vector<TOString> colObj = { col, L"", L"", L"" };
			objs.insert(colObj);
		}
	}

	return objs;
}

// [마이그레이션 스텁] GSP TCustomSqlStatement 기반 traverseSql → SQLEngine 위임
//void CWVSqlParser::traverseSql(UINT idx, gudusoft::gsqlparser::TCustomSqlStatement stmt)
//{
//	TRACE(_T(" ========= CWVSqlParser::traverseSql idx [%d]   ========= \n"), idx);
//	traverseSql(idx);
//}

void CWVSqlParser::debugObjects(std::set<std::vector<TOString>> objects)
{
	TRACE(_T(" ========= CWVSqlParser::debugObjects()   ========= \n"));
	int ii = 0;
	TRACE(_T("objects size = %d\n"), objects.size());

	for (auto obj : objects)
	{
		TRACE(_T("[%d] [column:%s] [table: %s] [schema: %s] [db: %s] \n"), ii, 
			(LPCTSTR)CW2T(obj[0]),
			(LPCTSTR)CW2T(obj[1]),
			(LPCTSTR)CW2T(obj[2]), 
			(LPCTSTR)CW2T(obj[3])
		);

		ii++;
	}
}

// [GSP→Antlr4 마이그레이션] vecTableRefs/vecColumnRefs 기반 m_objects 채우기
bool CWVSqlParser::traverseSql(UINT idx)
{
	TRACE(_T(" ========= CWVSqlParser::traverseSql idx [%d]   ========= \n"), idx);

	if (idx >= (UINT)m_oSQLEngine.GetStatementCount()) 
		return false;

	while (m_objects.size() <= (size_t)idx)
		m_objects.push_back({});

	const SqlStatementInfo& stmtInfo = m_oSQLEngine.GetStatements()[idx];

	// 테이블명 → {스키마, DB} 매핑 (컬럼 결정 시 사용)
	std::map<TOString, std::pair<TOString, TOString>> tableMap;

	for (const auto& tableRef : stmtInfo.vecTableRefs)
	{
		TOString table  = CA2W(tableRef.szTable.c_str(),    CP_UTF8);
		TOString schema = CA2W(tableRef.szSchema.c_str(),   CP_UTF8);
		TOString db     = CA2W(tableRef.szDatabase.c_str(), CP_UTF8);
		if (m_bUppercase) { table.MakeUpper(); schema.MakeUpper(); db.MakeUpper(); }

		tableMap[table] = { schema, db };

		// 테이블 엔트리: {column="", table, schema, db}
		std::vector<TOString> tableObj = { L"", table, schema, db };
		m_objects[idx].insert(tableObj);
	}

	// 컬럼 엔트리 추가
	for (const auto& colRef : stmtInfo.vecColumnRefs)
	{
		if (colRef.szColumn.empty()) continue;

		TOString col = CA2W(colRef.szColumn.c_str(), CP_UTF8);
		if (m_bUppercase) col.MakeUpper();

		if (colRef.bTableDetermined && !colRef.szResolvedTable.empty())
		{
			TOString resolvedTable = CA2W(colRef.szResolvedTable.c_str(), CP_UTF8);
			if (m_bUppercase) resolvedTable.MakeUpper();

			auto it = tableMap.find(resolvedTable);
			if (it != tableMap.end())
			{
				Object colObj = { col, resolvedTable, it->second.first, it->second.second };
				m_objects[idx].insert(colObj);
			}
			else
			{
				Object colObj = { col, resolvedTable, L"", L"" };
				m_objects[idx].insert(colObj);
			}
		}
		else
		{
			Object colObj = { col, L"", L"", L"" };
			m_objects[idx].insert(colObj);
		}
	}

#ifdef DEBUG
	//debugObjects(m_objects[idx]);
#endif // DEBUG

	return true;
}

UINT CWVSqlParser::GetStatementCount()
{
	UINT uCount = (UINT)m_oSQLEngine.GetStatementCount();
	// TRACE(_T(" ========= CWVSqlParser::GetStatementCount()  [%d] ========= \n"), uCount);
	return uCount;
}

bool CWVSqlParser::IsParse()
{
	bool b = m_oSQLEngine.IsParse();
	TRACE(_T(" ========= CWVSqlParser::IsParse()  [%d] ========= \n"), b);
	return b;
}
TOString CWVSqlParser::GetStatementText(UINT idx)
{
	TRACE(_T(" ========= CWVSqlParser::GetStatementText idx [%d]   ========= \n"), idx);

	if (idx >= GetStatementCount()) 
		return L"";
	return CA2W(m_oSQLEngine.GetStatements()[idx].sqlText.c_str(), CP_UTF8);
}

// [GSP→Antlr4] 첫 번째 의미 있는 토큰(길이 > 1) 반환
TOString CWVSqlParser::GetSqlCommand(UINT idx)
{

	if (idx >= GetStatementCount()) return L"";

	const SqlStatementInfo& stmtInfo = m_oSQLEngine.GetStatements()[idx];
	int dbType = (stmtInfo.nDatabaseType >= 0) ? stmtInfo.nDatabaseType : (int)m_emAntlrDBType;
	std::vector<TokenInfo> tokens = m_oSQLEngine.TokenizeQuery(stmtInfo.sqlText, dbType);

	TRACE(_T(" ========= CWVSqlParser::GetSqlCommand idx [%d] tokens Count [%d]  ========= \n"), idx, tokens.size());

	for (const auto& tok : tokens)
	{
		if (tok.role == TokenRole::WHITESPACE || tok.role == TokenRole::COMMENT)
			continue;

		TOString cmd = CA2W(tok.text.c_str(), CP_UTF8);
		if (cmd.GetLength() > 1)
		{
			CString tokentext = tok.text.c_str();
			TRACE(_T(" ========= CWVSqlParser::GetSqlCommand idx [%d]  cmd [%s] token type [%d]  ========= \n"), idx, tokentext, tok.role);
			return cmd;
		}			
	}

	return L"";
}

// [GSP→Antlr4] SqlStatementType → CWVSqlParser::SqlType 매핑
CWVSqlParser::SqlType CWVSqlParser::GetSqlType(UINT idx)
{
	CWVSqlParser::SqlType sqlType = SqlTypeUnknown;

	if (idx >= GetStatementCount())
	{
		return sqlType;
		TRACE(_T(" ========= CWVSqlParser::GetSqlType idx Unknown [%d] ========= \n"), idx);
	}

	switch (m_oSQLEngine.GetStatementTypeAt((int)idx))
	{
	case SqlStatementType::SELECT_STATEMENT:
		sqlType = SqlTypeQuery;
		break;

	case SqlStatementType::INSERT_STATEMENT:
	case SqlStatementType::UPDATE_STATEMENT:
	case SqlStatementType::DELETE_STATEMENT:
	case SqlStatementType::MERGE_STATEMENT:
	case SqlStatementType::REPLACE_STATEMENT:
		sqlType = SqlTypeDML;
		break;

	case SqlStatementType::CREATE_STATEMENT:
	case SqlStatementType::ALTER_STATEMENT:
	case SqlStatementType::DROP_STATEMENT:
	case SqlStatementType::TRUNCATE_STATEMENT:
		sqlType = SqlTypeDDL;
		break;

	case SqlStatementType::GRANT_STATEMENT:
	case SqlStatementType::REVOKE_STATEMENT:
	case SqlStatementType::TRANSACTION_STATEMENT:
		sqlType = SqlTypeDCL;
		break;

	case SqlStatementType::CALL_STATEMENT:
	case SqlStatementType::CREATE_PROCEDURE:
	case SqlStatementType::CREATE_FUNCTION:
	case SqlStatementType::CREATE_TRIGGER:
	case SqlStatementType::CREATE_EVENT:
		sqlType = SqlTypePLSQL;
		break;

	case SqlStatementType::SET_STATEMENT:
	case SqlStatementType::SHOW_STATEMENT:
	case SqlStatementType::USE_STATEMENT:
		sqlType = SqlTypeETC;
		break;

	default:
		sqlType = SqlTypeETC;
	}

	TRACE(_T(" ========= CWVSqlParser::GetSqlType idx [%d]  sqlType [%d] ========= \n"), idx, sqlType);

	return sqlType;
}

std::set<CWVSqlParser::Object>& CWVSqlParser::GetAllObjects(UINT idx)
{
	TRACE(_T(" ========= CWVSqlParser::GetAllObjects idx [%d]   ========= \n"), idx);
	static std::set<Object> dummy;
	if (idx >= GetStatementCount()) return dummy;

	while (m_objects.size() <= (size_t)idx)
		m_objects.push_back({});

	if (m_objects[idx].empty())
		traverseSql(idx);

	return m_objects[idx];
}

// [GSP→Antlr4] DML이면 첫 번째 테이블을 대상 테이블로 반환
std::set<CWVSqlParser::Object> CWVSqlParser::GetAllTargetObjects(UINT idx)
{
	TRACE(_T(" ========= CWVSqlParser::GetAllTargetObjects idx [%d]   ========= \n"), idx);
	std::set<Object> objects;

	if (idx >= GetStatementCount()) return objects;

	const SqlStatementInfo& stmtInfo = m_oSQLEngine.GetStatements()[idx];

	if (GetSqlType(idx) == SqlTypeDML)
	{
		// DML: 첫 번째 테이블 참조가 대상 테이블
		if (!stmtInfo.vecTableRefs.empty())
		{
			const TableRefInfo& target = stmtInfo.vecTableRefs[0];
			TOString table  = CA2W(target.szTable.c_str(),    CP_UTF8);
			TOString schema = CA2W(target.szSchema.c_str(),   CP_UTF8);
			TOString db     = CA2W(target.szDatabase.c_str(), CP_UTF8);
			if (m_bUppercase) { table.MakeUpper(); schema.MakeUpper(); db.MakeUpper(); }

			Object tableObj = { L"", table, schema, db };
			objects.insert(tableObj);

			for (const auto& colRef : stmtInfo.vecColumnRefs)
			{
				if (colRef.szColumn.empty()) continue;
				TOString col = CA2W(colRef.szColumn.c_str(), CP_UTF8);
				if (m_bUppercase) col.MakeUpper();

				if (colRef.bTableDetermined)
				{
					TOString resolvedTable = CA2W(colRef.szResolvedTable.c_str(), CP_UTF8);
					if (m_bUppercase) resolvedTable.MakeUpper();
					if (resolvedTable.CompareNoCase(table) == 0)
					{
						Object colObj = { col, table, schema, db };
						objects.insert(colObj);
					}
				}
				else
				{
					Object colObj = { col, L"", L"", L"" };
					objects.insert(colObj);
				}
			}
		}
	}
	else
	{
		traverseSql(idx);
		if (idx < m_objects.size())
			objects = m_objects[idx];
	}

#ifdef DEBUG
	//debugObjects(objects);
#endif // DEBUG

	return objects;
}

EM_MAKESELECT_RESULT CWVSqlParser::MakeSelectStmt(LPCTSTR sqlText, TOString& strSelect)
{
	TRACE(_T(" ========= CWVSqlParser::MakeSelectStmt sqlText [%s]   ========= \n"), sqlText);
	try
	{
		UINT idx = 0;

		if (doParse(sqlText) == false)
			return RT_PARSE_FAIL;

		if (isInsertStmt(0))
		{
			return getSelectStmtForInsert(strSelect);
		}
		else if (isMergeStmt(0))
		{
			// [마이그레이션 스텁] MERGE 문장 AST 분석 미지원 → MakeAfterSelect4Merge 위임
			return MakeAfterSelect4Merge(sqlText, strSelect);
		}
		else
		{
			TOString sTable = getTable(idx);
			TOString sWhere = getWhere(idx);

			if (sTable.IsEmpty())
				return RT_EMPTY_TABLE_NAME;

			strSelect = L"select ";
			if (isUpdateStmt(0))
				strSelect.Append(getSelectColumnsForUpdate(idx));
			else
				strSelect.AppendChar(L'*');

			strSelect.Append(L" from ");
			strSelect.Append(sTable);
			strSelect.Append(L" ");
			strSelect.Append(sWhere);
		}
	}
	catch (exception& e)
	{
		_error << L"Exception: " << CA2W(e.what(), CP_UTF8);
	}

	return RT_SUCCESS;
}

EM_MAKESELECT_RESULT CWVSqlParser::MakeSelectAfterStmt(LPCTSTR sqlText, TOString& strSelect)
{
	TRACE(_T(" ========= CWVSqlParser::MakeSelectAfterStmt sqlText [%s]   ========= \n"), sqlText);
	try
	{
		UINT idx = 0;
		int pos = 0;

		if (doParse(sqlText) == false)
			return RT_PARSE_FAIL;

		std::vector<std::pair<CString, CString>> vSetCols;
		TOString sTable, sWhere;
		if (isMergeStmt(idx))
		{
			return MakeAfterSelect4Merge(sqlText, strSelect);
		}
		else if (!isInsertStmt(idx)) // update, delete
		{
			sTable = getTable(idx);
			sWhere = getWhere(idx);
			vSetCols = getSetInColumn(idx);

			// Alias Check And Remove (alias.column → column)
			for (int i = 0; i < (int)vSetCols.size(); i++)
			{
				pos = 0;
				int t = 0;
				for (CString token; L"" != (token = vSetCols.at(i).first.Tokenize(_T("."), pos));)
				{
					if (t == 1)
						vSetCols.at(i).first = token;
					t++;
				}
			}

			strSelect = L"select ";
			if (isUpdateStmt(idx))
			{
				TOString t;
				for (auto iter = vSetCols.begin(); iter != vSetCols.end(); ++iter)
				{
					t.Append((TOString)iter->second + L" as ");
					t.Append((TOString)iter->first);
					t.Append(L", ");
				}
				if (t.GetLength() >= 2)
					t.Delete(t.GetLength() - 2, 2);
				strSelect.Append(t);
			}
			else
				strSelect.AppendChar(L'*');

			strSelect.Append(L" from ");
			strSelect.Append(sTable);
			strSelect.Append(L" ");
			strSelect.Append(sWhere);
		}
		else // insert
			return getSelectStmtForInsert(strSelect);
	}
	catch (exception& e)
	{
		_error << L"Exception: " << CA2W(e.what(), CP_UTF8);
	}

	return RT_SUCCESS;
}

// UPDATE 문의 SET 컬럼과 WHERE 컬럼이 겹치는지 확인
bool CWVSqlParser::IsIncludeWhereInSet(CString sqlText)
{
	TRACE(_T(" ========= CWVSqlParser::IsIncludeWhereInSet sqlText [%s]   ========= \n"), sqlText);
	try
	{
		if (!Parse(sqlText))
			return false;
		return IsIncludeWhereInSet(0);
	}
	catch (exception& e)
	{
		_error << L"Exception: " << CA2W(e.what(), CP_UTF8);
	}
	return false;
}

bool CWVSqlParser::IsIncludeWhereInSet(UINT idx)
{
	TRACE(_T(" ========= CWVSqlParser::IsIncludeWhereInSet idx [%d]   ========= \n"), idx);
	if (idx >= GetStatementCount()) return false;

	// [마이그레이션 스텁] MERGE: WHEN NOT MATCHED만 있으면 true (WHERE in SET 없음)
	if (isMergeStmt(idx))
		return false;

	if (!isUpdateStmt(idx))
		return false;

	TOString sColumns = getSelectColumnsForUpdate(idx);
	sColumns.Replace(L" ", L"");
	std::vector<std::pair<CString, CString>> vWhereCols = getWhereInColumn(idx);

	std::set<TOString> colSet;
	int pos = 0;
	for (TOString token; L"" != (token = sColumns.Tokenize(L",", pos));)
		colSet.insert(token);

	for (const auto& whereCol : vWhereCols)
	{
		for (const CString& col : colSet)
		{
			if (whereCol.first.CompareNoCase(col) == 0)
				return true;
		}
	}

	return false;
}

// [GSP→Antlr4] DML 대상 테이블 반환 (별칭 포함)
TOString CWVSqlParser::getTable(UINT idx)
{
	TRACE(_T(" ========= CWVSqlParser::getTable idx [%d]   ========= \n"), idx);
	TOString sTable;

	if (idx >= GetStatementCount()) return sTable;
	if (GetSqlType(idx) != SqlTypeDML) return sTable;

	const auto& stmts = m_oSQLEngine.GetStatements();
	const SqlStatementInfo& stmtInfo = stmts[idx];

	if (!stmtInfo.vecTableRefs.empty())
	{
		const TableRefInfo& ref = stmtInfo.vecTableRefs[0];
		sTable = CA2W(ref.szTable.c_str(), CP_UTF8);

		if (!ref.szAlias.empty())
		{
			sTable += L" ";
			sTable += CA2W(ref.szAlias.c_str(), CP_UTF8);
		}
	}

	return sTable;
}

// [GSP→Antlr4] UPDATE/DELETE WHERE 절 텍스트 반환
TOString CWVSqlParser::getWhere(UINT idx)
{
	TRACE(_T(" ========= CWVSqlParser::getWhere idx [%d]   ========= \n"), idx);
	TOString sWhere;

	if (idx >= GetStatementCount()) return sWhere;

	if (isUpdateStmt(idx) || isDeleteStmt(idx))
	{
		std::string whereText = m_oSQLEngine.GetWhereClauseText((int)idx);
		sWhere = CA2W(whereText.c_str(), CP_UTF8);
	}

	return sWhere;
}

// [GSP→Antlr4] UPDATE SET 절 컬럼명 목록을 콤마 구분 문자열로 반환
TOString CWVSqlParser::getSelectColumnsForUpdate(UINT idx)
{
	TRACE(_T(" ========= CWVSqlParser::getSelectColumnsForUpdate idx [%d]   ========= \n"), idx);
	TOString sColumns;

	if (idx >= GetStatementCount()) return sColumns;

	auto pairs = m_oSQLEngine.GetSetPairs((int)idx);
	for (const auto& p : pairs)
	{
		if (!sColumns.IsEmpty())
			sColumns += L", ";
		sColumns += CA2W(p.first.c_str(), CP_UTF8);
	}

	return sColumns;
}

// [GSP→Antlr4] INSERT 문으로부터 SELECT 문 생성
EM_MAKESELECT_RESULT CWVSqlParser::getSelectStmtForInsert(TOString& sSelect)
{
	TRACE(_T(" ========= CWVSqlParser::getSelectStmtForInsert()   ========= \n"));
	try
	{
		if (!isInsertStmt(0))
			return RT_NOT_SUPPORT_INSERT_TYPE;

		InsertInfo info = m_oSQLEngine.GetInsertInfo(0);

		// INSERT ... SELECT 형태
		if (!info.szSubQuery.empty())
		{
			sSelect = CA2W(info.szSubQuery.c_str(), CP_UTF8);
			return RT_INSERT_SHOW_AFTERDATA;
		}

		// INSERT ... VALUES 형태: SELECT v1, v2, ... FROM DUAL
		TOString sColumnValues;
		for (const auto& val : info.vecValues)
		{
			if (!sColumnValues.IsEmpty())
				sColumnValues.Append(L", ");
			sColumnValues.Append(CA2W(val.c_str(), CP_UTF8));
		}

		if (!sColumnValues.IsEmpty())
		{
			sSelect.Append(L"select ");
			sSelect.Append(sColumnValues);
			if (m_dbType == DB_TYPE::tstORACLE || m_dbType == 0)
				sSelect.Append(L" from dual");
			else if (m_dbType == DB_TYPE::tstSapHana)
				sSelect.Append(L" from dummy");
			return RT_INSERT_SHOW_AFTERDATA;
		}
	}
	catch (exception& e)
	{
		_error << L"Exception: " << CA2W(e.what(), CP_UTF8);
	}
	return RT_PARSE_FAIL;
}

CString CWVSqlParser::GetErrMessage()
{
	TRACE(_T(" ========= CWVSqlParser::GetErrMessage()   ========= \n"));
	return m_sLastError.c_str();

	// return (LPCSTR)getError().c_str();
}

// [마이그레이션 스텁] SELECT 결과 컬럼 별칭→원본컬럼 매핑
// Antlr4 기반 파서에서는 SELECT AST 표현식 트리 미지원 → 빈 맵 반환


	// [GSP→Antlr4] SELECT 결과 컬럼 별칭→원본컬럼 매핑
	// GSP: stmt.getResultColumnList() + cell.getAliasClause() / getExpr() / getPrefixTable()
	// Antlr4: SQLEngine::GetSelectColumnAliases() 사용

void CWVSqlParser::GetOriginColumnsOfAlias(std::multimap<TOString, Object>& mapOrgColumn)
{
	TRACE(_T(" ========= CWVSqlParser::GetOriginColumnsOfAlias()   ========= \n"));
	// 미지원: mapOrgColumn 비어있는 채로 반환

	if (GetStatementCount() == 0)
		return;

	if (GetSqlType(0) != SqlTypeQuery)
		return;

	try
	{
		std::vector<SelectColumnInfo> vecCols = m_oSQLEngine.GetSelectColumnAliases(0);

		for (const SelectColumnInfo& stSel : vecCols)
		{
			// object[0]=alias, object[1]=expression, object[2]=prefixTable
			TOString szAlias(CA2T(stSel.szAlias.c_str(), CP_UTF8));
			TOString szExpr(CA2T(stSel.szExpression.c_str(), CP_UTF8));
			TOString szTable(CA2T(stSel.szPrefixTable.c_str(), CP_UTF8));

			szAlias.MakeUpper();
			szExpr.MakeUpper();
			szTable.MakeUpper();

			Object object = { szAlias, szExpr, szTable };
			mapOrgColumn.insert(std::make_pair(szAlias, object));
		}
	}
	catch (std::exception& e)
	{
		_error << L"Exception: " << CA2W(e.what(), CP_UTF8);
	}
}

// [GSP→Antlr4] UPDATE SET 절 col=val 쌍 목록 반환
std::vector<std::pair<CString, CString>> CWVSqlParser::getSetInColumn(UINT idx)
{
	TRACE(_T(" ========= CWVSqlParser::getSetInColumn idx [%d]   ========= \n"), idx);
	std::vector<std::pair<CString, CString>> columList;

	if (idx >= GetStatementCount()) return columList;

	auto pairs = m_oSQLEngine.GetSetPairs((int)idx);
	for (const auto& p : pairs)
	{
		std::pair<CString, CString> c;
		c.first  = CA2W(p.first.c_str(),  CP_UTF8);
		c.second = CA2W(p.second.c_str(), CP_UTF8);
		columList.push_back(c);
	}

	return columList;
}

// [GSP→Antlr4] WHERE 절에 등장하는 컬럼명 목록 반환
// WHERE 텍스트를 토큰화하여 비교연산자 앞의 식별자를 컬럼으로 추출
std::vector<std::pair<CString, CString>> CWVSqlParser::getWhereInColumn(UINT idx)
{
	TRACE(_T(" ========= CWVSqlParser::getWhereInColumn idx [%d]   ========= \n"), idx);
	std::vector<std::pair<CString, CString>> columList;

	if (idx >= GetStatementCount()) return columList;

	std::string whereText = m_oSQLEngine.GetWhereClauseText((int)idx);
	if (whereText.empty()) return columList;

	const SqlStatementInfo& stmtInfo = m_oSQLEngine.GetStatements()[idx];
	int dbType = (stmtInfo.nDatabaseType >= 0) ? stmtInfo.nDatabaseType : (int)m_emAntlrDBType;
	std::vector<TokenInfo> tokens = m_oSQLEngine.TokenizeQuery(whereText, dbType);

	std::set<std::string> seenCols;
	for (size_t i = 0; i < tokens.size(); i++)
	{
		const TokenInfo& tok = tokens[i];
		if (tok.role != TokenRole::IDENTIFIER && tok.role != TokenRole::COLUMN_NAME)
			continue;

		// 다음 의미있는 토큰이 비교 연산자인지 확인
		bool followedByOp = false;
		for (size_t j = i + 1; j < tokens.size(); j++)
		{
			if (tokens[j].role == TokenRole::WHITESPACE) continue;
			if (tokens[j].role == TokenRole::OPERATOR_COMPARISON)
				followedByOp = true;
			break;
		}

		if (followedByOp && seenCols.find(tok.text) == seenCols.end())
		{
			seenCols.insert(tok.text);
			std::pair<CString, CString> c;
			c.first  = CA2W(tok.text.c_str(), CP_UTF8);
			c.second = L"";
			columList.push_back(c);
			TRACE(_T("%s\n"), (LPCTSTR)c.first);
		}
	}

	return columList;
}

bool CWVSqlParser::isUpdateStmt(UINT idx)
{
	TRACE(_T(" ========= CWVSqlParser::isUpdateStmt idx [%d]   ========= \n"), idx);
	if (idx >= GetStatementCount()) return false;
	return m_oSQLEngine.GetStatementTypeAt((int)idx) == SqlStatementType::UPDATE_STATEMENT;
}

bool CWVSqlParser::isInsertStmt(UINT idx)
{
	TRACE(_T(" ========= CWVSqlParser::isInsertStmt idx [%d]   ========= \n"), idx);
	if (idx >= GetStatementCount()) return false;
	SqlStatementType t = m_oSQLEngine.GetStatementTypeAt((int)idx);
	return t == SqlStatementType::INSERT_STATEMENT || t == SqlStatementType::REPLACE_STATEMENT;
}

bool CWVSqlParser::isDeleteStmt(UINT idx)
{
	TRACE(_T(" ========= CWVSqlParser::isDeleteStmt idx [%d]   ========= \n"), idx);
	if (idx >= GetStatementCount()) return false;
	return m_oSQLEngine.GetStatementTypeAt((int)idx) == SqlStatementType::DELETE_STATEMENT;
}

bool CWVSqlParser::isMergeStmt(UINT idx)
{
	TRACE(_T(" ========= CWVSqlParser::isMergeStmt idx [%d]   ========= \n"), idx);
	if (idx >= GetStatementCount()) return false;
	return m_oSQLEngine.GetStatementTypeAt((int)idx) == SqlStatementType::MERGE_STATEMENT;
}

bool CWVSqlParser::isSelectStmt(UINT idx)
{
	TRACE(_T(" ========= CWVSqlParser::isSelectStmt idx [%d]   ========= \n"), idx);
	if (idx >= GetStatementCount()) return false;
	return m_oSQLEngine.GetStatementTypeAt((int)idx) == SqlStatementType::SELECT_STATEMENT;
}

// [마이그레이션 스텁] SQL 포매터 - Antlr4 기반 파서 미지원
CString CWVSqlParser::Formatter()
{
	TRACE(_T(" ========= CWVSqlParser::Formatter()   ========= \n"));
	return _T("");
}

// [GSP→Antlr4] INSERT 컬럼·값 목록 반환 (서브쿼리 형태면 false)
bool CWVSqlParser::GetInsertValues(TOString sqlInsert, std::vector<TOString>& colReturn, std::vector<TOString>& valReturn)
{
	TRACE(_T(" ========= CWVSqlParser::GetInsertValues sqlInsert [%s]   ========= \n"), (LPCTSTR)sqlInsert);
	try
	{
		if (!Parse(CW2T(sqlInsert)))
			return false;

		if (!isInsertStmt(0))
			return false;

		InsertInfo info = m_oSQLEngine.GetInsertInfo(0);

		// 서브쿼리 형태(INSERT ... SELECT)는 미지원
		if (!info.szSubQuery.empty())
			return false;

		for (const auto& col : info.vecColumns)
			colReturn.push_back(col.c_str());

		for (const auto& val : info.vecValues)
			valReturn.push_back(val.c_str());

		return !colReturn.empty() || !valReturn.empty();
	}
	catch (exception& e)
	{
		_error << L"Exception: " << CA2W(e.what(), CP_UTF8);
	}

	return false;
}

// [GSP→Antlr4] MERGE WHEN NOT MATCHED INSERT 절 → SELECT 문 생성
// - MATCHED 절이 있거나 NOT MATCHED 절만 있을 때 분기
// - ON 조건 텍스트는 Antlr4 파서에서 직접 추출 불가
EM_MAKESELECT_RESULT CWVSqlParser::MakeAfterSelect4Merge(LPCTSTR sqlText, TOString& strSelect)
{
	TRACE(_T(" ========= CWVSqlParser::MakeAfterSelect4Merge sqlText [%s]   ========= \n"), sqlText);

	// hasMatchedClasuse 는 node(GSP 타입) 파라미터를 받으므로 호출 대신
	// 동일한 텍스트 탐색 로직을 인라인으로 수행
	bool bMatched = false, bNotMatched = false;
	if (GetStatementCount() > 0)
	{
		std::string sql = m_oSQLEngine.GetStatements()[0].sqlText;
		std::string upper = sql;
		std::transform(upper.begin(), upper.end(), upper.begin(), ::toupper);

		auto isWordChar = [](unsigned char c) { return std::isalnum(c) || c == '_'; };
		size_t p = 0;
		while ((p = upper.find("WHEN", p)) != std::string::npos)
		{
			if (p > 0 && isWordChar((unsigned char)upper[p - 1])) { p++; continue; }
			size_t aw = p + 4;
			if (aw < upper.size() && isWordChar((unsigned char)upper[aw])) { p++; continue; }
			while (aw < upper.size() && std::isspace((unsigned char)upper[aw])) aw++;

			if (upper.substr(aw, 3) == "NOT" && (aw + 3 >= upper.size() || !isWordChar((unsigned char)upper[aw + 3])))
			{
				size_t an = aw + 3;
				while (an < upper.size() && std::isspace((unsigned char)upper[an])) an++;
				if (upper.substr(an, 7) == "MATCHED" && (an + 7 >= upper.size() || !isWordChar((unsigned char)upper[an + 7])))
					bNotMatched = true;
			}
			else if (upper.substr(aw, 7) == "MATCHED" && (aw + 7 >= upper.size() || !isWordChar((unsigned char)upper[aw + 7])))
			{
				bMatched = true;
			}
			p++;
		}
	}

	if (!isMergeStmt(0) || bMatched || !bNotMatched)
	{
		// MATCHED 절 있음 → 일반 SELECT (MakeSelectStmt MERGE 분기 재진입 방지를 위해 직접 구성)
		UINT idx = 0;
		TOString sTable = getTable(idx);
		if (sTable.IsEmpty()) return RT_EMPTY_TABLE_NAME;

		strSelect.Format(L"SELECT * FROM %s", (LPCWSTR)sTable);
		TOString sWhere = getWhere(idx);
		if (!sWhere.IsEmpty())
		{
			strSelect.Append(L" ");
			strSelect.Append(sWhere);
		}
		return RT_SUCCESS;
	}

	// WHEN NOT MATCHED 만 있는 경우
	// vecTableRefs[0] = 대상 테이블, vecTableRefs[1] = 소스 테이블 (일반적인 MERGE 구조)
	const auto& stmts = m_oSQLEngine.GetStatements();
	if (stmts.empty() || stmts[0].vecTableRefs.size() < 2)
		return RT_NOT_SUPPORT_INSERT_TYPE;

	TOString tableTarget = CA2W(stmts[0].vecTableRefs[0].szTable.c_str(), CP_UTF8);
	TOString aliasTarget = CA2W(stmts[0].vecTableRefs[0].szAlias.c_str(), CP_UTF8);
	TOString tableSource = CA2W(stmts[0].vecTableRefs[1].szTable.c_str(), CP_UTF8);
	TOString aliasSource = CA2W(stmts[0].vecTableRefs[1].szAlias.c_str(), CP_UTF8);

	// INSERT 컬럼값 목록
	InsertInfo info = m_oSQLEngine.GetInsertInfo(0);
	TOString sColumnValues;
	for (const auto& val : info.vecValues)
	{
		if (!sColumnValues.IsEmpty()) sColumnValues.Append(L", ");
		sColumnValues.Append(CA2W(val.c_str(), CP_UTF8));
	}
	if (sColumnValues.IsEmpty()) sColumnValues = L"*";

	strSelect.Format(L"SELECT %s FROM %s%s WHERE NOT EXISTS ( SELECT 1 FROM %s%s )"
		, (LPCWSTR)sColumnValues
		, (LPCWSTR)tableSource
		, aliasSource.IsEmpty() ? L"" : (L" " + aliasSource)
		, (LPCWSTR)tableTarget
		, aliasTarget.IsEmpty() ? L"" : (L" " + aliasTarget)
	);

	return RT_SUCCESS;
}
// [GSP→Antlr4] MERGE WHEN [NOT] MATCHED 절 존재 여부
// - bool 반환: SQL 텍스트에서 "WHEN [NOT] MATCHED" 패턴 탐색으로 대체 가능
// - node 출력 파라미터: GSP 타입이므로 채울 수 없음 (호출측에서 미사용)

bool CWVSqlParser::hasMatchedClasuse(bool bMatched)
{
	TRACE(_T(" ========= CWVSqlParser::hasMatchedClasuse bMatched [%d]   ========= \n"), bMatched);

	if (GetStatementCount() == 0) return false;

	std::string sql = m_oSQLEngine.GetStatements()[0].sqlText;

	// 대문자 변환
	std::string upper = sql;
	std::transform(upper.begin(), upper.end(), upper.begin(), ::toupper);

	auto isWordChar = [](unsigned char c) { return std::isalnum(c) || c == '_'; };

	size_t pos = 0;
	while ((pos = upper.find("WHEN", pos)) != std::string::npos)
	{
		// 단어 경계 확인 (WHENEVER 등 부분 매칭 방지)
		if (pos > 0 && isWordChar((unsigned char)upper[pos - 1])) { pos++; continue; }
		size_t afterWhen = pos + 4;
		if (afterWhen < upper.size() && isWordChar((unsigned char)upper[afterWhen])) { pos++; continue; }

		// WHEN 이후 공백 건너뜀
		while (afterWhen < upper.size() && std::isspace((unsigned char)upper[afterWhen])) afterWhen++;

		// WHEN NOT MATCHED 패턴 확인
		if (upper.substr(afterWhen, 3) == "NOT" && !isWordChar((unsigned char)upper[afterWhen + 3]))
		{
			size_t afterNot = afterWhen + 3;
			while (afterNot < upper.size() && std::isspace((unsigned char)upper[afterNot])) afterNot++;
			if (upper.substr(afterNot, 7) == "MATCHED" && (afterNot + 7 >= upper.size() || !isWordChar((unsigned char)upper[afterNot + 7])))
			{
				if (!bMatched) return true;  // WHEN NOT MATCHED 발견
				pos++;
				continue;
			}
		}

		// WHEN MATCHED (NOT 없음) 패턴 확인
		if (upper.substr(afterWhen, 7) == "MATCHED" && (afterWhen + 7 >= upper.size() || !isWordChar((unsigned char)upper[afterWhen + 7])))
		{
			if (bMatched) return true;  // WHEN MATCHED 발견
		}

		pos++;
	}

	return false;
}

// [GSP→Antlr4] INSERT 후 데이터: [컬럼명 행, 값 행]
bool CWVSqlParser::MakeInsertAfterData(std::vector<std::vector<TOString>>& afterData)
{
	TRACE(_T(" ========= CWVSqlParser::MakeInsertAfterData()   ========= \n"));

	InsertInfo info = m_oSQLEngine.GetInsertInfo(0);

	std::vector<TOString> cols;
	for (const auto& col : info.vecColumns)
		cols.push_back(col.c_str());
	if (!cols.empty())
		afterData.push_back(cols);

	std::vector<TOString> vals;
	for (const auto& val : info.vecValues)
		vals.push_back(val.c_str());
	if (!vals.empty())
		afterData.push_back(vals);

	return true;
}

// [GSP→Antlr4] DELETE 이전 데이터: WHERE 조건 텍스트를 [["condition"], [whereText]] 형태로 반환
bool CWVSqlParser::MakeDeleteBeforeData(std::vector<std::vector<TOString>>& attachmentData)
{
	TRACE(_T(" ========= CWVSqlParser::MakeDeleteBeforeData()   ========= \n"));

	std::string whereText = m_oSQLEngine.GetWhereClauseText(0);

	std::vector<TOString> columns = { L"condition" };
	std::vector<TOString> values  = { whereText.c_str() };

	attachmentData.push_back(columns);
	attachmentData.push_back(values);

	return true;
}

// [GSP→Antlr4] UPDATE 이전 데이터: WHERE 조건 텍스트를 [["condition"], [whereText]] 형태로 반환
bool CWVSqlParser::MakeUpdateBeforeData(std::vector<std::vector<TOString>>& attachmentData)
{
	TRACE(_T(" ========= CWVSqlParser::MakeUpdateBeforeData()   ========= \n"));

	std::string whereText = m_oSQLEngine.GetWhereClauseText(0);

	std::vector<TOString> columns = { L"condition" };
	std::vector<TOString> values  = { whereText.c_str() };

	attachmentData.push_back(columns);
	attachmentData.push_back(values);

	return true;
}

// [GSP→Antlr4] UPDATE 이후 데이터: SET 절 컬럼·값 목록 반환
bool CWVSqlParser::MakeUpdateAfterData(std::vector<std::vector<TOString>>& afterData)
{
	TRACE(_T(" ========= CWVSqlParser::MakeUpdateAfterData()   ========= \n"));

	auto pairs = m_oSQLEngine.GetSetPairs(0);

	std::vector<TOString> columns, values;
	for (const auto& p : pairs)
	{
		columns.push_back(_T("asdasd"));

		columns.push_back(p.first.c_str());
		values.push_back(p.second.c_str());
	}

	if (!columns.empty())
		afterData.push_back(columns);
	if (!values.empty())
		afterData.push_back(values);

	return true;
}

bool CWVSqlParser::MakeBeforeData(LPCTSTR sqlText, std::vector< std::vector<TOString> >& data)
{
	TRACE(_T(" ========= CWVSqlParser::MakeBeforeData sqlText [%s]   ========= \n"), sqlText);
	if (!Parse(sqlText))
		return false;

	if (isDeleteStmt(0))
		return MakeDeleteBeforeData(data);
	else if (isUpdateStmt(0))
		return MakeUpdateBeforeData(data);

	return false;
}

bool CWVSqlParser::MakeAfterData(LPCTSTR sqlText, std::vector< std::vector<TOString> >& data)
{
	TRACE(_T(" ========= CWVSqlParser::MakeAfterData sqlText [%s]   ========= \n"), sqlText);
	if (!Parse(sqlText))
		return false;

	if (isInsertStmt(0))
		return MakeInsertAfterData(data);
	else if (isUpdateStmt(0))
		return MakeUpdateAfterData(data);

	return false;
}