#include "StdAfx.h"
#include "WVSqlJavaParser.h"
#include "outil/UtilFunc.h"
#include <codecvt>

#include "OUtil/WVUtilTrace.h"
#include "outil/WVString.h"
#include "resource.h"
#include "OrangeMsg.h"

#include "outil/SQLFormatter.h"





// Orange DB 타입 정수값을 Antlr4 DatabaseType 열거형으로 변환
// 예) tstORACLE(21) → DB_ORACLE, tstMSSQL(23) → DB_SQLSERVER
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
// 2D 벡터 데이터를 레이블과 함께 TRACE로 출력하는 개발/테스트용 내부 헬퍼
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

// 개발/테스트용 내부 함수: Parse, GetAllObjects 등 주요 API를 일괄 검증
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
		TRACE(_T("[예외] %hs\n"), e.what());
	}

	// ──────────────────────────────────────────────────────────────────
	// [2] GetAllObjects / GetAllTargetObjects
	// ──────────────────────────────────────────────────────────────────
	try
	{
		TRACE(_T("\n===== [2] GetAllObjects / GetAllTargetObjects =====\n"));
		initParser(DB_TYPE::tstORACLE);

		sql = _T(
			"UPDATE scott.source s SET s.name = '한글', no = 10\n"
			" WHERE s.top IN (\n"
			"  SELECT top FROM scott2.target\n"
			"  INNER JOIN dest ON target.no = dest.target\n"
			"  WHERE xx = s.no\n"
			" );\n"
		);
		Parse(sql);
		debugObjects(GetAllObjects(0));
		debugObjects(GetAllTargetObjects(0));

		// UPDATE (inline view)
		sql = _T(
			"UPDATE "
			"( "
			"    SELECT A.LGT_SELNG_AMT, ROUND(b.fix_SELNG_AMT / 1000) AS AMT "
			"      FROM CSSADM.TB_MK_ENPR_CUST_MS_INFO A, CSSADM.TB_MK_CUST_MS_MON_IF_02 B "
			"     WHERE A.SELNG_YYMM = '202011' "
			") SET LGT_SELNG_AMT = AMT ;"
		);
		Parse(sql);
		debugObjects(GetAllObjects(0));
		debugObjects(GetAllTargetObjects(0));
	}
	catch (std::exception& e)
	{
		TRACE(_T("[예외] %hs\n"), e.what());
	}

	// ──────────────────────────────────────────────────────────────────
	// [3] GetOriginColumnsOfAlias
	// ──────────────────────────────────────────────────────────────────
	try
	{
		TRACE(_T("\n===== [3] GetOriginColumnsOfAlias =====\n"));
		initParser(DB_TYPE::tstORACLE);

		sql = _T("SELECT e.empno AS eno, e.ename AS nm, substr(e.sal, 1) AS sal FROM scott.emp e;");
		Parse(sql);

		std::multimap<TOString, Object> mapColumns;
		GetOriginColumnsOfAlias(mapColumns);
		TRACE(_T("[GetOriginColumnsOfAlias] 결과 %d개\n"), (int)mapColumns.size());
		for (auto& kv : mapColumns)
		{
			const Object& obj = kv.second;
			TRACE(_T("  alias=%-15s  expr=%-20s  table=%s\n"),
				(obj.size() > 0 ? (LPCTSTR)obj[0] : _T("")),
				(obj.size() > 1 ? (LPCTSTR)obj[1] : _T("")),
				(obj.size() > 2 ? (LPCTSTR)obj[2] : _T("")));
		}

		// 별칭 없는 경우 - 결과 0개 확인
		sql = _T("SELECT substr(col, 6) FROM MKKIM.tbl;");
		Parse(sql);
		mapColumns.clear();
		GetOriginColumnsOfAlias(mapColumns);
		TRACE(_T("[GetOriginColumnsOfAlias - 별칭없음] 결과 %d개 (0이어야 정상)\n"), (int)mapColumns.size());
	}
	catch (std::exception& e)
	{
		TRACE(_T("[예외] %hs\n"), e.what());
	}

	// ──────────────────────────────────────────────────────────────────
	// [4] GetInsertValues
	// ──────────────────────────────────────────────────────────────────
	try
	{
		TRACE(_T("\n===== [4] GetInsertValues =====\n"));
		TOString sqlInsert = _T("INSERT INTO emp (empno, ename, sal) VALUES (1001, 'HONG', 3000)");
		std::vector<TOString> vecCols;
		std::vector<TOString> vecVals;

		if (GetInsertValues(sqlInsert, vecCols, vecVals))
		{
			TRACE(_T("[GetInsertValues] 컬럼 %d개 / 값 %d개\n"),
				(int)vecCols.size(), (int)vecVals.size());
			for (size_t i = 0; i < vecCols.size() && i < vecVals.size(); i++)
				TRACE(_T("  [%d] %s = %s\n"), (int)i, vecCols[i], vecVals[i]);
		}
		else
		{
			TRACE(_T("[GetInsertValues] 실패\n"));
		}
	}
	catch (std::exception& e)
	{
		TRACE(_T("[예외] %hs\n"), e.what());
	}

	// ──────────────────────────────────────────────────────────────────
	// [5] MakeSelectStmt / MakeSelectAfterStmt (UPDATE)
	// ──────────────────────────────────────────────────────────────────
	try
	{
		TRACE(_T("\n===== [5] MakeSelectStmt / MakeSelectAfterStmt (UPDATE) =====\n"));
		initParser(DB_TYPE::tstORACLE);

		sql = _T(
			"UPDATE scott.emp\n"
			"SET comm = CASE WHEN sal > 3000 THEN sal * 0.1 ELSE 500 END\n"
			"WHERE deptno = 10 AND ename IS NOT NULL"
		);
		Parse(sql);

		ret = MakeSelectStmt(sql, strSelect);
		TRACE(_T("[MakeSelectStmt] ret=%d\n%s\n"), (int)ret, strSelect);

		ret = MakeSelectAfterStmt(sql, strSelect);
		TRACE(_T("[MakeSelectAfterStmt] ret=%d\n%s\n"), (int)ret, strSelect);

		// INSERT INTO … SELECT
		sql = _T(
			"INSERT INTO dbo.EmployeeSales"
			" SELECT sp.BusinessEntityID, c.LastName, sp.SalesYTD"
			" FROM Sales.SalesPerson AS sp"
			" INNER JOIN Person.Person AS c ON sp.BusinessEntityID = c.BusinessEntityID"
			" WHERE sp.BusinessEntityID LIKE '2%'"
		);
		ret = MakeSelectAfterStmt(sql, strSelect);
		TRACE(_T("[MakeSelectAfterStmt - INSERT..SELECT] ret=%d\n%s\n"), (int)ret, strSelect);
	}
	catch (std::exception& e)
	{
		TRACE(_T("[예외] %hs\n"), e.what());
	}

	// ──────────────────────────────────────────────────────────────────
	// [6] MakeAfterSelect4Merge / MERGE 문 MakeSelectStmt
	// 3개 문장의 리턴값이 전부 동일한 상태
	// ──────────────────────────────────────────────────────────────────
	try
	{
		TRACE(_T("\n===== [6] MakeAfterSelect4Merge / MERGE =====\n"));
		initParser(DB_TYPE::tstORACLE);

		sql = _T(
			"MERGE INTO pm_user2 T "
			"USING emp S "
			"ON (T.USER_ID = TO_CHAR(S.EMPNO)) "
			"WHEN MATCHED THEN "
			"  UPDATE SET T.USER_NAME = S.ENAME "
			"WHEN NOT MATCHED THEN "
			"  INSERT (T.USER_ID, T.USER_NAME) VALUES (TO_CHAR(S.EMPNO), S.ENAME)"
		);
		Parse(sql);

		ret = MakeSelectStmt(sql, strSelect);
		TRACE(_T("[MakeSelectStmt-MERGE] ret=%d\n%s\n"), (int)ret, strSelect);
		
		ret = MakeAfterSelect4Merge(sql, strSelect);
		TRACE(_T("[MakeAfterSelect4Merge] ret=%d\n%s\n"), (int)ret, strSelect);

		ret = MakeSelectAfterStmt(sql, strSelect);
		TRACE(_T("[MakeSelectAfterStmt-MERGE] ret=%d\n%s\n"), (int)ret, strSelect);
	}
	catch (std::exception& e)
	{
		TRACE(_T("[예외] %hs\n"), e.what());
	}

	// ──────────────────────────────────────────────────────────────────
	// [7] MakeBeforeData / MakeAfterData
	// ──────────────────────────────────────────────────────────────────
	try
	{
		TRACE(_T("\n===== [7] MakeBeforeData / MakeAfterData =====\n"));
		initParser(DB_TYPE::tstORACLE);

		sql = _T("UPDATE scott.emp SET sal = sal * 1.1, comm = 500 WHERE deptno = 20");

		std::vector<std::vector<TOString>> data;
		bool bOk = MakeBeforeData(sql, data);
		DevPrint2D(data, bOk ? _T("MakeBeforeData 성공") : _T("MakeBeforeData 실패"));

		data.clear();
		bOk = MakeAfterData(sql, data);
		DevPrint2D(data, bOk ? _T("MakeAfterData 성공") : _T("MakeAfterData 실패"));
	}
	catch (std::exception& e)
	{
		TRACE(_T("[예외] %hs\n"), e.what());
	}

	// ──────────────────────────────────────────────────────────────────
	// [8] MakeInsertAfterData / MakeDeleteBeforeData
	//     MakeUpdateAfterData / MakeUpdateBeforeData
	// ──────────────────────────────────────────────────────────────────
	try
	{
		TRACE(_T("\n===== [8] Make*Data 계열 =====\n"));
		initParser(DB_TYPE::tstORACLE);

		std::vector<std::vector<TOString>> data;

		// INSERT After
		sql = _T("INSERT INTO scott.emp (empno, ename, sal, deptno) VALUES (9999, 'TESTUSER', 2500, 30)");
		Parse(sql);
		data.clear();
		MakeInsertAfterData(data);
		DevPrint2D(data, _T("MakeInsertAfterData"));

		// DELETE Before
		sql = _T("DELETE FROM scott.emp WHERE deptno = 30 AND sal < 1000");
		Parse(sql);
		data.clear();
		MakeDeleteBeforeData(data);
		DevPrint2D(data, _T("MakeDeleteBeforeData"));

		// UPDATE After / Before
		sql = _T("UPDATE scott.emp SET sal = 3500, comm = 100 WHERE empno = 7839");
		Parse(sql);

		data.clear();
		MakeUpdateAfterData(data);
		DevPrint2D(data, _T("MakeUpdateAfterData"));

		data.clear();
		MakeUpdateBeforeData(data);
		DevPrint2D(data, _T("MakeUpdateBeforeData"));
	}
	catch (std::exception& e)
	{
		TRACE(_T("[예외] %hs\n"), e.what());
	}

	// ──────────────────────────────────────────────────────────────────
	// [9] IsIncludeWhereInSet (CString 버전 / UINT 버전)
	// ──────────────────────────────────────────────────────────────────
	try
	{
		TRACE(_T("\n===== [9] IsIncludeWhereInSet =====\n"));
		initParser(DB_TYPE::tstORACLE);

		// CString 버전 - WHERE 있음
		sql = _T(
			"UPDATE scott.emp\n"
			"SET comm = CASE WHEN sal > 3000 THEN sal * 0.1 ELSE 500 END\n"
			"WHERE deptno = 10\n"
		);
		TRACE(_T("[IsIncludeWhereInSet(CString) - WHERE있음] %s\n"),
			IsIncludeWhereInSet(sql) ? _T("true") : _T("false"));

		// CString 버전 - WHERE 없음
		sql = _T("UPDATE scott.emp SET comm = 0");
		TRACE(_T("[IsIncludeWhereInSet(CString) - WHERE없음] %s\n"),
			IsIncludeWhereInSet(sql) ? _T("true") : _T("false"));

		// UINT 버전
		sql = _T("UPDATE scott.emp SET comm = 100 WHERE sal > 2000");
		Parse(sql);
		TRACE(_T("[IsIncludeWhereInSet(UINT=0)] %s\n"),
			IsIncludeWhereInSet(0U) ? _T("true") : _T("false"));
	}
	catch (std::exception& e)
	{
		TRACE(_T("[예외] %hs\n"), e.what());
	}

	// ──────────────────────────────────────────────────────────────────
	// [10] SeparateSQL
	// ──────────────────────────────────────────────────────────────────
	try
	{
		TRACE(_T("\n===== [10] SeparateSQL =====\n"));

		sql = _T(
			"SELECT * FROM emp WHERE deptno = 10;\n"
			"UPDATE emp SET sal = 3000 WHERE empno = 7839;\n"
			"DELETE FROM emp WHERE sal < 1000;"
		);
		std::vector<CString> vecSqls = SeparateSQL(DB_TYPE::tstORACLE, sql);
		TRACE(_T("[SeparateSQL] %d개 분리\n"), (int)vecSqls.size());
		for (size_t i = 0; i < vecSqls.size(); i++)
			TRACE(_T("  [%d] %s\n"), (int)i, vecSqls[i]);
	}
	catch (std::exception& e)
	{
		TRACE(_T("[예외] %hs\n"), e.what());
	}

	// ──────────────────────────────────────────────────────────────────
	// [11] CheckSyntax / GetErrMessage
	// ──────────────────────────────────────────────────────────────────
	try
	{
		TRACE(_T("\n===== [11] CheckSyntax / GetErrMessage =====\n"));

		// 정상 문장
		sql = _T("SELECT * FROM scott.emp WHERE empno = 7839");
		TRACE(_T("[CheckSyntax] 정상SQL=%s  msg='%s'\n"),
			CheckSyntax(DB_TYPE::tstORACLE, sql) ? _T("오류없음") : _T("오류있음"),
			GetErrMessage());

		// 오류 문장
		sql = _T("sel1ect * from scott.emp");
		TRACE(_T("[CheckSyntax] 오류SQL=%s\n  msg='%s'\n"),
			CheckSyntax(DB_TYPE::tstORACLE, sql) ? _T("오류없음") : _T("오류있음"),
			GetErrMessage());
	}
	catch (std::exception& e)
	{
		TRACE(_T("[예외] %hs\n"), e.what());
	}

	// ──────────────────────────────────────────────────────────────────
	// [12] MakeHash1 / MakeHash2
	// ──────────────────────────────────────────────────────────────────
	try
	{
		TRACE(_T("\n===== [12] MakeHash1 / MakeHash2 =====\n"));

		// 기준값 검증
		ASSERT(MakeHash1(_T("update scott.emp set empno = 1111 where empno = 1112"))
			.Compare(_T("220D08037355EB61DE6990AEF5BF007F7D47F5F3347FB5E483CAE7EFAC9F51F6")) == 0);
		// 공백/세미콜론 달라도 동일 해시
		ASSERT(MakeHash1(_T("update scott.emp set empno = 1111    \n\n\n\n\n\n where empno = 1112;"))
			.Compare(_T("220D08037355EB61DE6990AEF5BF007F7D47F5F3347FB5E483CAE7EFAC9F51F6")) == 0);
		TRACE(_T("[MakeHash1] 기준값 검증 OK\n"));

		// 주석 달라도 동일 해시
		CString sH1 = MakeHash1(_T("/*주석A*/ select * from emp where ename = 'job'"));
		CString sH2 = MakeHash1(_T("/* 주석B */ select   *\n from emp where ename = 'job';"));
		TRACE(_T("[MakeHash1] 주석무관 동일여부: %s\n"), sH1 == sH2 ? _T("동일 (정상)") : _T("다름"));

		// MakeHash2 (DB 타입 명시 버전)
		sql = _T("SELECT * FROM scott.emp WHERE deptno = 10");
		CString sHash1 = MakeHash1(sql);
		CString sHash2 = MakeHash2(DB_TYPE::tstORACLE, sql);
		TRACE(_T("[MakeHash1] %s\n"), sHash1);
		TRACE(_T("[MakeHash2] %s\n"), sHash2);
	}
	catch (std::exception& e)
	{
		TRACE(_T("[예외] %hs\n"), e.what());
	}

	// ──────────────────────────────────────────────────────────────────
	// [13] RemoveComment1 / RemoveComment2
	// ──────────────────────────────────────────────────────────────────
	try
	{
		TRACE(_T("\n===== [13] RemoveComment1 / RemoveComment2 =====\n"));

		sql = _T(
			"/*블록주석*/\n"
			"select * -- 라인주석\n"
			"from emp /* 인라인주석 */ where ename = 'job';"
		);
		TRACE(_T("[원본]          %s\n"), sql);
		TRACE(_T("[RemoveComment1] %s\n"), RemoveComment1(sql));
		TRACE(_T("[RemoveComment2] %s\n"), RemoveComment2(DB_TYPE::tstORACLE, sql));
	}
	catch (std::exception& e)
	{
		TRACE(_T("[예외] %hs\n"), e.what());
	}

	// ──────────────────────────────────────────────────────────────────
	// [14] Formatter
	// ──────────────────────────────────────────────────────────────────
	try
	{
		TRACE(_T("\n===== [14] Formatter =====\n"));
		initParser(DB_TYPE::tstORACLE);

		sql = _T(
			"select e.empno,e.ename,d.dname from scott.emp e"
			" inner join scott.dept d on e.deptno=d.deptno where e.sal>2000"
		);
		Parse(sql);
		CString sFormatted = Formatter2();
		TRACE(_T("[Formatter] '%s'\n"),
			sFormatted.IsEmpty() ? _T("(미지원/빈값)") : sFormatted);
	}
	catch (std::exception& e)
	{
		TRACE(_T("[예외] %hs\n"), e.what());
	}

	// ──────────────────────────────────────────────────────────────────
	// [15] MySQL REPLACE 구문
	// ──────────────────────────────────────────────────────────────────
	try
	{
		TRACE(_T("\n===== [15] MySQL REPLACE =====\n"));
		initParser(DB_TYPE::tstMySQL);

		sql = _T(
			"REPLACE INTO cities\n"
			"SET id = 4,\n"
			"name = 'Phoenix',\n"
			"population = 1768980;\n"
		);
		Parse(sql);

		ret = MakeSelectStmt(sql, strSelect);
		TRACE(_T("[MakeSelectStmt-REPLACE] ret=%d\n%s\n"), (int)ret, strSelect);

		ret = MakeSelectAfterStmt(sql, strSelect);
		TRACE(_T("[MakeSelectAfterStmt-REPLACE] ret=%d\n%s\n"), (int)ret, strSelect);
	}
	catch (std::exception& e)
	{
		TRACE(_T("[예외] %hs\n"), e.what());
	}

	TRACE(_T("\n ========= CWVSqlParser::dev() END ========= \n"));
}

// 개발/테스트용 내부 함수: GetOriginColumnsOfAlias를 다양한 SQL 패턴으로 검증
// ──────────────────────────────────────────────────────────────────────────────
// dev2() : GetOriginColumnsOfAlias 전용 테스트
//   반환 구조: multimap<alias, Object>
//     Object[0] = alias (대문자)
//     Object[1] = expression (대문자)
//     Object[2] = prefixTable (대문자)
// ──────────────────────────────────────────────────────────────────────────────
void CWVSqlParser::dev2()
{
	TRACE(_T("\n ========= CWVSqlParser::dev2() START ========= \n"));

	CStringW sql;
	std::multimap<TOString, Object> map;

	// 공통 출력 람다 대신 매크로 스타일 헬퍼
	auto PrintAlias = [&](LPCTSTR szLabel)
	{
		TRACE(_T("\n----- %s  (결과 %d개) -----\n"), szLabel, (int)map.size());
		for (auto& kv : map)
		{
			const Object& o = kv.second;
			TRACE(_T("  alias=%-20s  expr=%-30s  table=%s\n"),
				(o.size() > 0 ? (LPCTSTR)o[0] : _T("")),
				(o.size() > 1 ? (LPCTSTR)o[1] : _T("")),
				(o.size() > 2 ? (LPCTSTR)o[2] : _T("")));
		}
	};

	// ──────────────────────────────────────────────────────────────────
	// TC-01 : 단순 컬럼 별칭 (테이블 접두사 포함)
	// ──────────────────────────────────────────────────────────────────
	try
	{
		initParser(DB_TYPE::tstORACLE);
		sql = _T("SELECT e.empno AS eno, e.ename AS nm, e.sal AS salary FROM scott.emp e");
		Parse(sql);
		map.clear();
		GetOriginColumnsOfAlias(map);
		PrintAlias(_T("TC-01 단순 컬럼 별칭 (테이블 접두사 포함)"));
		// 기대: eno→e.empno/EMP, nm→e.ename/EMP, salary→e.sal/EMP
	}
	catch (std::exception& e) { TRACE(_T("[TC-01 예외] %hs\n"), e.what()); }

	// ──────────────────────────────────────────────────────────────────
	// TC-02 : 함수 표현식 별칭
	// ──────────────────────────────────────────────────────────────────
	try
	{
		initParser(DB_TYPE::tstORACLE);
		sql = _T("SELECT SUBSTR(ename, 1, 3) AS short_name, UPPER(job) AS job_upper, NVL(comm, 0) AS comm_val FROM scott.emp");
		Parse(sql);
		map.clear();
		GetOriginColumnsOfAlias(map);
		PrintAlias(_T("TC-02 함수 표현식 별칭"));
		// 기대: short_name→SUBSTR(ename,1,3), job_upper→UPPER(job), comm_val→NVL(comm,0)
	}
	catch (std::exception& e) { TRACE(_T("[TC-02 예외] %hs\n"), e.what()); }

	// ──────────────────────────────────────────────────────────────────
	// TC-03 : 별칭 없는 컬럼만 있는 경우 → 결과 0개
	// ──────────────────────────────────────────────────────────────────
	try
	{
		initParser(DB_TYPE::tstORACLE);
		sql = _T("SELECT empno, ename, sal FROM scott.emp WHERE deptno = 10");
		Parse(sql);
		map.clear();
		GetOriginColumnsOfAlias(map);
		PrintAlias(_T("TC-03 별칭 없음 (0개 기대)"));
		ASSERT(map.size() == 0);
	}
	catch (std::exception& e) { TRACE(_T("[TC-03 예외] %hs\n"), e.what()); }

	// ──────────────────────────────────────────────────────────────────
	// TC-04 : 별칭 혼합 (일부 컬럼은 별칭 없음)
	// ──────────────────────────────────────────────────────────────────
	try
	{
		initParser(DB_TYPE::tstORACLE);
		sql = _T("SELECT e.empno, e.ename AS nm, e.sal AS salary, e.deptno FROM scott.emp e");
		Parse(sql);
		map.clear();
		GetOriginColumnsOfAlias(map);
		PrintAlias(_T("TC-04 별칭 혼합 (nm, salary 2개 기대)"));
		ASSERT(map.size() == 2);
	}
	catch (std::exception& e) { TRACE(_T("[TC-04 예외] %hs\n"), e.what()); }

	// ──────────────────────────────────────────────────────────────────
	// TC-05 : JOIN - 두 테이블 컬럼에 각각 별칭
	// ──────────────────────────────────────────────────────────────────
	try
	{
		initParser(DB_TYPE::tstORACLE);
		sql = _T(
			"SELECT e.empno AS emp_id, e.ename AS emp_name, d.dname AS dept_name "
			"FROM scott.emp e "
			"INNER JOIN scott.dept d ON e.deptno = d.deptno"
		);
		Parse(sql);
		map.clear();
		GetOriginColumnsOfAlias(map);
		PrintAlias(_T("TC-05 INNER JOIN 두 테이블 별칭"));
		// 기대: emp_id/emp_name → emp 테이블, dept_name → dept 테이블
	}
	catch (std::exception& e) { TRACE(_T("[TC-05 예외] %hs\n"), e.what()); }

	// ──────────────────────────────────────────────────────────────────
	// TC-06 : 산술 표현식 별칭
	// ──────────────────────────────────────────────────────────────────
	try
	{
		initParser(DB_TYPE::tstORACLE);
		sql = _T("SELECT sal * 12 AS annual_sal, sal + NVL(comm, 0) AS total_income FROM scott.emp");
		Parse(sql);
		map.clear();
		GetOriginColumnsOfAlias(map);
		PrintAlias(_T("TC-06 산술 표현식 별칭"));
	}
	catch (std::exception& e) { TRACE(_T("[TC-06 예외] %hs\n"), e.what()); }

	// ──────────────────────────────────────────────────────────────────
	// TC-07 : CASE 표현식 별칭
	// ──────────────────────────────────────────────────────────────────
	try
	{
		initParser(DB_TYPE::tstORACLE);
		sql = _T(
			"SELECT empno, "
			"CASE WHEN sal >= 3000 THEN 'HIGH' WHEN sal >= 1500 THEN 'MID' ELSE 'LOW' END AS grade "
			"FROM scott.emp"
		);
		Parse(sql);
		map.clear();
		GetOriginColumnsOfAlias(map);
		PrintAlias(_T("TC-07 CASE 표현식 별칭 (grade 1개 기대)"));
		ASSERT(map.size() == 1);
	}
	catch (std::exception& e) { TRACE(_T("[TC-07 예외] %hs\n"), e.what()); }

	// ──────────────────────────────────────────────────────────────────
	// TC-08 : 서브쿼리를 포함한 SELECT (외부 쿼리 별칭만 추출)
	// ──────────────────────────────────────────────────────────────────
	try
	{
		initParser(DB_TYPE::tstORACLE);
		sql = _T(
			"SELECT e.empno AS eid, e.ename AS ename, "
			"(SELECT d.dname FROM scott.dept d WHERE d.deptno = e.deptno) AS dept_nm "
			"FROM scott.emp e"
		);
		Parse(sql);
		map.clear();
		GetOriginColumnsOfAlias(map);
		PrintAlias(_T("TC-08 스칼라 서브쿼리 별칭"));
	}
	catch (std::exception& e) { TRACE(_T("[TC-08 예외] %hs\n"), e.what()); }

	// ──────────────────────────────────────────────────────────────────
	// TC-09 : AS 키워드 없이 별칭 지정 (공백 별칭)
	// ──────────────────────────────────────────────────────────────────
	try
	{
		initParser(DB_TYPE::tstORACLE);
		sql = _T("SELECT e.empno eid, e.ename nm, e.sal salary FROM scott.emp e");
		Parse(sql);
		map.clear();
		GetOriginColumnsOfAlias(map);
		PrintAlias(_T("TC-09 AS 없는 별칭 (공백 별칭)"));
	}
	catch (std::exception& e) { TRACE(_T("[TC-09 예외] %hs\n"), e.what()); }

	// ──────────────────────────────────────────────────────────────────
	// TC-10 : MySQL DB 타입 - 집계함수 별칭
	// ──────────────────────────────────────────────────────────────────
	try
	{
		initParser(DB_TYPE::tstMySQL);
		sql = _T(
			"SELECT deptno, COUNT(*) AS cnt, SUM(sal) AS total_sal, AVG(sal) AS avg_sal "
			"FROM emp GROUP BY deptno"
		);
		Parse(sql);
		map.clear();
		GetOriginColumnsOfAlias(map);
		PrintAlias(_T("TC-10 MySQL 집계함수 별칭"));
		// 기대: cnt, total_sal, avg_sal 3개
	}
	catch (std::exception& e) { TRACE(_T("[TC-10 예외] %hs\n"), e.what()); }

	// ──────────────────────────────────────────────────────────────────
	// TC-11 : MSSQL DB 타입
	// ──────────────────────────────────────────────────────────────────
	try
	{
		initParser(DB_TYPE::tstMSSQL);
		sql = _T(
			"SELECT TOP 10 e.EmployeeID AS emp_id, e.LastName AS last_nm, "
			"ISNULL(e.MiddleName, '') AS mid_nm "
			"FROM HumanResources.Employee e ORDER BY e.EmployeeID"
		);
		Parse(sql);
		map.clear();
		GetOriginColumnsOfAlias(map);
		PrintAlias(_T("TC-11 MSSQL TOP/ISNULL 별칭"));
	}
	catch (std::exception& e) { TRACE(_T("[TC-11 예외] %hs\n"), e.what()); }

	// ──────────────────────────────────────────────────────────────────
	// TC-12 : PostgreSQL DB 타입
	// ──────────────────────────────────────────────────────────────────
	try
	{
		initParser(DB_TYPE::tstPostgreSQL);
		sql = _T(
			"SELECT u.user_id AS uid, u.username AS uname, COALESCE(u.email, 'N/A') AS email_addr "
			"FROM public.users u WHERE u.is_active = true"
		);
		Parse(sql);
		map.clear();
		GetOriginColumnsOfAlias(map);
		PrintAlias(_T("TC-12 PostgreSQL COALESCE 별칭"));
	}
	catch (std::exception& e) { TRACE(_T("[TC-12 예외] %hs\n"), e.what()); }

	// ──────────────────────────────────────────────────────────────────
	// TC-13 : 인라인 뷰(FROM 서브쿼리) - 외부 쿼리 별칭 추출
	// ──────────────────────────────────────────────────────────────────
	try
	{
		initParser(DB_TYPE::tstORACLE);
		sql = _T(
			"SELECT v.eid AS emp_id, v.total AS total_sal "
			"FROM (SELECT empno AS eid, sal + NVL(comm, 0) AS total FROM scott.emp) v "
			"WHERE v.total > 2000"
		);
		Parse(sql);
		map.clear();
		GetOriginColumnsOfAlias(map);
		PrintAlias(_T("TC-13 인라인 뷰(FROM 서브쿼리) 외부 별칭"));
	}
	catch (std::exception& e) { TRACE(_T("[TC-13 예외] %hs\n"), e.what()); }

	// ──────────────────────────────────────────────────────────────────
	// TC-14 : SELECT * 인 경우 → 결과 0개
	// ──────────────────────────────────────────────────────────────────
	try
	{
		initParser(DB_TYPE::tstORACLE);
		sql = _T("SELECT * FROM scott.emp WHERE sal > 1000");
		Parse(sql);
		map.clear();
		GetOriginColumnsOfAlias(map);
		PrintAlias(_T("TC-14 SELECT * (0개 기대)"));
		ASSERT(map.size() == 0);
	}
	catch (std::exception& e) { TRACE(_T("[TC-14 예외] %hs\n"), e.what()); }

	// ──────────────────────────────────────────────────────────────────
	// TC-15 : SELECT 문이 아닌 경우(UPDATE) → 결과 0개
	// ──────────────────────────────────────────────────────────────────
	try
	{
		initParser(DB_TYPE::tstORACLE);
		sql = _T("UPDATE scott.emp SET sal = sal * 1.1 WHERE deptno = 10");
		Parse(sql);
		map.clear();
		GetOriginColumnsOfAlias(map);
		PrintAlias(_T("TC-15 UPDATE 문 (0개 기대)"));
		ASSERT(map.size() == 0);
	}
	catch (std::exception& e) { TRACE(_T("[TC-15 예외] %hs\n"), e.what()); }

	TRACE(_T("\n ========= CWVSqlParser::dev2() END ========= \n"));
}


// 기본 생성자: DB 타입 미설정, initParser 별도 호출 필요
CWVSqlParser::CWVSqlParser()
{
}

// DB 타입·대소문자 옵션으로 파서 초기화 (내부적으로 initParser 호출)
// 예) CWVSqlParser(tstORACLE, true) → Oracle 파서, 대문자 모드
CWVSqlParser::CWVSqlParser(int databaseType, bool bUppercase)
	: m_bUppercase(bUppercase)
{
	initParser(databaseType);
}

// 소멸자: destroyParser()를 호출하여 내부 상태 정리
CWVSqlParser::~CWVSqlParser()
{
	destroyParser();
}

// 내부 _error 스트림을 UTF-8 std::string으로 변환하여 반환
// 예) 파싱 실패 시 → "Exception: no viable alternative..."
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

// m_oSQLEngine.Clear()로 파싱 결과·상태를 초기화
void CWVSqlParser::destroyParser()
{
	TRACE(_T(" ========= CWVSqlParser::destroyParser()   ========= \n"));
	m_oSQLEngine.Clear();
}

// DB 타입을 설정하고 파서 내부 상태를 초기화
// 예) initParser(tstMSSQL) → SQL Server 파서로 전환, true 반환
bool CWVSqlParser::initParser(int databaseType)
{
	TRACE(_T(" ========= CWVSqlParser::initParser databaseType [%d]   ========= \n"), databaseType);
	destroyParser();
	m_dbType = databaseType;

	m_emAntlrDBType = ConvertAntlrDbType(m_dbType);

	return true;
}

// SQL 텍스트를 m_oSQLEngine에 파싱, 파싱 오류 시 m_sLastError에 저장
// 예) doParse("SELECT 1 FROM dual") → true (오류 없음)
bool CWVSqlParser::doParse(LPCTSTR sqlText)
{
	m_oSQLEngine.Clear();

	m_strsql = CT2A(sqlText, CP_UTF8);

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

// 세미콜론 기준으로 SQL 문장을 분리하여 CString 벡터 반환
// 예) "SELECT 1; SELECT 2;" → {"SELECT 1", "SELECT 2"}
std::vector<CString> CWVSqlParser::SeparateSQL(int databaseType, LPCTSTR sqlText)
{
	TRACE(_T(" ========= CWVSqlParser::SeparateSQL databaseType [%d] sqlText [%s]   ========= \n"), databaseType, sqlText);
	
	std::vector<CString> ret;

	initParser(databaseType);

	m_strsql = CT2A(sqlText, CP_UTF8);
	m_oSQLEngine.Parse(m_strsql, (int)m_emAntlrDBType);

	const std::vector<SqlStatementInfo>& vec = m_oSQLEngine.GetStatements();

	int nSQLCount = vec.size();
	for (int i = 0; i < nSQLCount; i++)
	{
		SqlStatementInfo stInfo = vec[i];
		ret.push_back(stInfo.sqlText.c_str());
	}

	return ret;
}

// SQL 문법 오류 여부 검사, 오류 시 m_sLastError에 메시지 저장
// 예) "SELECT * FRM emp" → false (오류), "SELECT 1" → true
bool CWVSqlParser::CheckSyntax(int databaseType, LPCTSTR sqlText)
{
	TRACE(_T(" ========= CWVSqlParser::CheckSyntax databaseType [%d] sqlText [%s]   ========= \n"), databaseType, sqlText);

	SQLEngine engine;
	std::string sql = CT2A(sqlText, CP_UTF8);
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
// 현재 DB 타입으로 SQL을 토큰화한 뒤 SHA-256 해시값(64자 hex) 반환
// 리터럴·식별자 대소문자 유지, 키워드는 대문자 정규화 후 해시
// 예) "SELECT * FROM emp" → "3F8A...BC12"
CString CWVSqlParser::MakeHash1(LPCTSTR sqlText)
{
	TRACE(_T(" ========= CWVSqlParser::MakeHash1 sqlText [%s]   ========= \n"), sqlText);
	CString hash;
	const char delim = ' ';

	try
	{
		if (m_oSQLEngine.GetStatementCount() == 0)
			initParser(m_dbType);

		m_strsql = CT2A(sqlText, CP_UTF8);

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
				//CString strTemp;
				//strTemp.Format(_T("CWVSqlParser::MakeHash - Too much token -[%d]"), nStrLen);				
				//WVTRACE(strTemp);
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

// DB 타입을 직접 지정하여 MakeHash1을 호출하는 래퍼
// 예) MakeHash2(tstMSSQL, "SELECT 1") → SHA-256 CString
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

// 현재 DB 타입으로 파싱하여 주석 토큰 제거 후 SQL 텍스트 반환
// 예) "SELECT 1 -- 주석" → "SELECT 1 "
CString CWVSqlParser::RemoveComment1(LPCTSTR sqlText)
{
	TRACE(_T(" ========= CWVSqlParser::RemoveComment1 sqlText [%s]   ========= \n"), sqlText);

	std::string result;

	try
	{
		SQLEngine engine;
		std::string sql = CT2A(sqlText, CP_UTF8);
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

// DB 타입을 직접 지정하여 RemoveComment1을 호출하는 래퍼 (단일 SQL 권장)
// 예) RemoveComment2(tstORACLE, "SELECT /*주석*/ 1") → "SELECT  1"
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

// doParse를 호출하는 public 래퍼: 성공 true, 실패 false
// 예) Parse("SELECT * FROM emp") → true
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
// 예) SELECT e.sal FROM emp e → {{"","EMP","",""}, {"SAL","EMP","",""}}
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

// 디버그용: Object 집합 내용을 TRACE로 출력 (column, table, schema, db)
// 예) {{"SAL","EMP","",""}} → TRACE "[0] [column:SAL] [table: EMP]..."
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
// 예) idx=0, "SELECT sal FROM emp" → m_objects[0]에 테이블·컬럼 채움
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

// Parse() 후 m_oSQLEngine에 저장된 SQL 문장 수 반환
// 예) "SELECT 1; SELECT 2" 파싱 후 → 2
UINT CWVSqlParser::GetStatementCount()
{
	UINT uCount = (UINT)m_oSQLEngine.GetStatementCount();
	// TRACE(_T(" ========= CWVSqlParser::GetStatementCount()  [%d] ========= \n"), uCount);
	return uCount;
}

// Parse() 호출 여부 반환 (destroyParser 이후에는 false)
// 예) Parse("SELECT 1") 후 → true, destroyParser() 후 → false
bool CWVSqlParser::IsParse()
{
	bool b = m_oSQLEngine.IsParse();
	TRACE(_T(" ========= CWVSqlParser::IsParse()  [%d] ========= \n"), b);
	return b;
}
// idx번째 SQL 문장의 원본 텍스트를 TOString으로 반환
// 예) "SELECT 1; UPDATE emp" 파싱 후 GetStatementText(1) → "UPDATE emp"
TOString CWVSqlParser::GetStatementText(UINT idx)
{
	TRACE(_T(" ========= CWVSqlParser::GetStatementText idx [%d]   ========= \n"), idx);

	if (idx >= GetStatementCount()) 
		return L"";
	return CA2W(m_oSQLEngine.GetStatements()[idx].sqlText.c_str(), CP_UTF8);
}

// [GSP→Antlr4] 첫 번째 의미 있는 토큰(길이 > 1) 반환
// 예) "UPDATE emp SET sal=1" → "UPDATE" 반환
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
// 예) SELECT→SqlTypeQuery, UPDATE/INSERT/DELETE/MERGE→SqlTypeDML
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

// idx번째 문장의 전체 테이블·컬럼 Object 집합 반환 (traverseSql 내부 호출)
// 예) "SELECT e.sal FROM emp e" → {{"","EMP","",""}, {"SAL","EMP","",""}}
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
// DML이면 첫 번째 테이블·관련 컬럼만, SELECT이면 traverseSql 결과 전체
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

// [GSP→Antlr4] DML SQL로부터 변경 대상 조회용 SELECT 문 생성
// 예) "UPDATE emp SET sal=5000 WHERE id=1" → strSelect="select sal from emp where id=1"
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

// [GSP→Antlr4] DML SQL로부터 변경 이후 조회용 SELECT 문 생성
// 예) "UPDATE emp SET sal=sal*1.1 WHERE id=1" → strSelect="select sal*1.1 as sal from emp where id=1"
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

// SQL 텍스트를 파싱한 뒤 IsIncludeWhereInSet(0) 호출하는 텍스트 오버로드
// 예) "UPDATE t SET id=1 WHERE id=1" → true (SET 컬럼이 WHERE에 존재)
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

// UPDATE idx번째 문장에서 SET 절 컬럼이 WHERE 절에도 등장하는지 확인
// 예) "UPDATE emp SET deptno=20 WHERE deptno=10" → true
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
// 예) "UPDATE emp e SET ..." → "emp e" (테이블명 + 별칭)
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
// 예) "DELETE FROM emp WHERE id=1" → "WHERE id=1"
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
// 예) "UPDATE emp SET sal=1, comm=2" → "sal, comm"
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
// 예) INSERT INTO emp VALUES(1,'John') → "select 1,'John' from dual"
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

// m_sLastError(마지막 파싱 오류 메시지)를 CString으로 반환
// 예) CheckSyntax 실패 후 → "no viable alternative at input 'FRM'"
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
	// 예) "SELECT sal AS s FROM emp" → mapOrgColumn["S"]={"S","SAL","EMP"}

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
// 예) "UPDATE emp SET sal=5000" → {{"sal","5000"}}
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
// 예) "UPDATE emp SET x=1 WHERE id=1" → {{"id",""}}
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

// idx번째 문장이 UPDATE 문인지 여부 반환
// 예) "UPDATE emp SET sal=5000" → true
bool CWVSqlParser::isUpdateStmt(UINT idx)
{
	TRACE(_T(" ========= CWVSqlParser::isUpdateStmt idx [%d]   ========= \n"), idx);
	if (idx >= GetStatementCount()) return false;
	return m_oSQLEngine.GetStatementTypeAt((int)idx) == SqlStatementType::UPDATE_STATEMENT;
}

// idx번째 문장이 INSERT 또는 REPLACE 문인지 여부 반환
// 예) "INSERT INTO emp VALUES(1)" → true
bool CWVSqlParser::isInsertStmt(UINT idx)
{
	TRACE(_T(" ========= CWVSqlParser::isInsertStmt idx [%d]   ========= \n"), idx);
	if (idx >= GetStatementCount()) return false;
	SqlStatementType t = m_oSQLEngine.GetStatementTypeAt((int)idx);
	return t == SqlStatementType::INSERT_STATEMENT || t == SqlStatementType::REPLACE_STATEMENT;
}

// idx번째 문장이 DELETE 문인지 여부 반환
// 예) "DELETE FROM emp WHERE id=1" → true
bool CWVSqlParser::isDeleteStmt(UINT idx)
{
	TRACE(_T(" ========= CWVSqlParser::isDeleteStmt idx [%d]   ========= \n"), idx);
	if (idx >= GetStatementCount()) return false;
	return m_oSQLEngine.GetStatementTypeAt((int)idx) == SqlStatementType::DELETE_STATEMENT;
}

// idx번째 문장이 MERGE 문인지 여부 반환
// 예) "MERGE INTO t USING s ON ..." → true
bool CWVSqlParser::isMergeStmt(UINT idx)
{
	TRACE(_T(" ========= CWVSqlParser::isMergeStmt idx [%d]   ========= \n"), idx);
	if (idx >= GetStatementCount()) return false;
	return m_oSQLEngine.GetStatementTypeAt((int)idx) == SqlStatementType::MERGE_STATEMENT;
}

// idx번째 문장이 SELECT 문인지 여부 반환
// 예) "SELECT * FROM emp" → true
bool CWVSqlParser::isSelectStmt(UINT idx)
{
	TRACE(_T(" ========= CWVSqlParser::isSelectStmt idx [%d]   ========= \n"), idx);
	if (idx >= GetStatementCount()) return false;
	return m_oSQLEngine.GetStatementTypeAt((int)idx) == SqlStatementType::SELECT_STATEMENT;
}

// [마이그레이션 스텁] SQL 포매터 - Antlr4 기반 파서 미지원
// 기본 Orange에 내장된 Formatter 기능 활용 

CString CWVSqlParser::Formatter2()
{
	TRACE(_T(" ========= CWVSqlParser::Formatter()   ========= \n"));

	if (0 >= GetStatementCount()) 
		return _T("");

	CString strSQL = m_oSQLEngine.GetStatements().at(0).sqlText.c_str();

	CSQLFormatter form;
	CString strForm;
	strForm = form.Format(
		strSQL,
		TRUE, /* m_optSQLFormatter.m_bKeywordRightAlign */
		FALSE, /* m_optSQLFormatter.m_bLeadingComma */
		FALSE, /* m_optSQLFormatter.m_nKeywordCase*/
		FALSE, /* m_optSQLFormatter.m_bMultiLine*/
		TRUE /* m_optSQLFormatter.m_bIndent != 0 */
	);
	return strForm;
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
		// MATCHED 절 있음 →
		// SELECT {targetAlias}.* FROM {targetTable} {targetAlias} JOIN {sourceTable} {sourceAlias} ON {condition}
		const auto& stmts = m_oSQLEngine.GetStatements();
		if (stmts.empty())
			return RT_EMPTY_TABLE_NAME;

		std::string szSql   = stmts[0].sqlText;
		std::string szUpper = szSql;
		std::transform(szUpper.begin(), szUpper.end(), szUpper.begin(), ::toupper);

		// 단어 경계 기준 문자 판별
		auto fnIsWC = [](unsigned char c) -> bool
		{
			return std::isalnum(c) || c == '_' || c == '$' || c == '#';
		};
		// 단어 경계 기준으로 키워드 위치 찾기
		auto fnFind = [&](const std::string& kw, size_t nPos) -> size_t
		{
			while ((nPos = szUpper.find(kw, nPos)) != std::string::npos)
			{
				bool bL = (nPos == 0 || !fnIsWC((unsigned char)szUpper[nPos - 1]));
				size_t nE = nPos + kw.size();
				bool bR = (nE >= szUpper.size() || !fnIsWC((unsigned char)szUpper[nE]));
				if (bL && bR) return nPos;
				++nPos;
			}
			return std::string::npos;
		};
		// 공백 건너뜀
		auto fnSkip = [&](size_t p) -> size_t
		{
			while (p < szSql.size() && std::isspace((unsigned char)szSql[p])) ++p;
			return p;
		};
		// 식별자 (스키마.테이블 포함) 읽기
		auto fnReadId = [&](size_t p) -> std::pair<std::string, size_t>
		{
			size_t nStart = p;
			while (p < szSql.size() && (fnIsWC((unsigned char)szSql[p]) || szSql[p] == '.'))
				++p;
			return std::make_pair(szSql.substr(nStart, p - nStart), p);
		};
		// AS 키워드 건너뜀 (있을 경우)
		auto fnSkipAS = [&](size_t p) -> size_t
		{
			if (p + 1 < szUpper.size()
				&& szUpper[p] == 'A' && szUpper[p + 1] == 'S'
				&& (p + 2 >= szUpper.size() || !fnIsWC((unsigned char)szUpper[p + 2])))
				return fnSkip(p + 2);
			return p;
		};

		std::string szTargetTable, szTargetAlias;
		std::string szSourceTable, szSourceAlias;
		std::string szOnCond;

		// INTO → 대상 테이블·별칭
		size_t posInto = fnFind("INTO", 0);
		if (posInto != std::string::npos)
		{
			size_t p = fnSkip(posInto + 4);
			std::pair<std::string, size_t> tp = fnReadId(p);
			szTargetTable = tp.first;
			p = fnSkipAS(fnSkip(tp.second));
			if (p < szSql.size() && fnIsWC((unsigned char)szSql[p]))
			{
				std::pair<std::string, size_t> ap = fnReadId(p);
				std::string szU = ap.first;
				std::transform(szU.begin(), szU.end(), szU.begin(), ::toupper);
				if (szU != "USING" && szU != "ON" && szU != "WHEN")
					szTargetAlias = ap.first;
			}
		}

		if (szTargetTable.empty())
			return RT_EMPTY_TABLE_NAME;

		// USING → 소스 테이블·별칭 (서브쿼리 형태 제외)
		size_t posUsing = fnFind("USING", 0);
		if (posUsing != std::string::npos)
		{
			size_t p = fnSkip(posUsing + 5);
			if (p < szSql.size() && szSql[p] != '(')
			{
				std::pair<std::string, size_t> tp = fnReadId(p);
				szSourceTable = tp.first;
				p = fnSkipAS(fnSkip(tp.second));
				if (p < szSql.size() && fnIsWC((unsigned char)szSql[p]))
				{
					std::pair<std::string, size_t> ap = fnReadId(p);
					std::string szU = ap.first;
					std::transform(szU.begin(), szU.end(), szU.begin(), ::toupper);
					if (szU != "ON" && szU != "WHEN")
						szSourceAlias = ap.first;
				}
			}
		}

		// ON → 조건 추출 (외곽 괄호 제거)
		size_t posOn = fnFind("ON", 0);
		if (posOn != std::string::npos)
		{
			size_t p = fnSkip(posOn + 2);
			if (p < szSql.size() && szSql[p] == '(')
			{
				int nDepth = 1;
				++p;
				size_t nCondStart = p;
				while (p < szSql.size() && nDepth > 0)
				{
					if      (szSql[p] == '(') ++nDepth;
					else if (szSql[p] == ')') --nDepth;
					if (nDepth > 0) ++p;
				}
				szOnCond = szSql.substr(nCondStart, p - nCondStart);
			}
			else
			{
				size_t posWhen = fnFind("WHEN", p);
				size_t nCondEnd = (posWhen != std::string::npos) ? posWhen : szSql.size();
				szOnCond = szSql.substr(p, nCondEnd - p);
			}
			// 앞뒤 공백 제거
			while (!szOnCond.empty() && std::isspace((unsigned char)szOnCond.front()))
				szOnCond.erase(szOnCond.begin());
			while (!szOnCond.empty() && std::isspace((unsigned char)szOnCond.back()))
				szOnCond.pop_back();
		}

		// SELECT 구문 조립
		strSelect = L"SELECT ";
		if (szTargetAlias.empty())
		{
			strSelect.Append(L"*");
		}
		else
		{
			strSelect.Append(CA2W(szTargetAlias.c_str(), CP_UTF8));
			strSelect.Append(L".*");
		}
		strSelect.Append(L" FROM ");
		strSelect.Append(CA2W(szTargetTable.c_str(), CP_UTF8));
		if (!szTargetAlias.empty())
		{
			strSelect.Append(L" ");
			strSelect.Append(CA2W(szTargetAlias.c_str(), CP_UTF8));
		}
		if (!szSourceTable.empty())
		{
			strSelect.Append(L" JOIN ");
			strSelect.Append(CA2W(szSourceTable.c_str(), CP_UTF8));
			if (!szSourceAlias.empty())
			{
				strSelect.Append(L" ");
				strSelect.Append(CA2W(szSourceAlias.c_str(), CP_UTF8));
			}
			if (!szOnCond.empty())
			{
				strSelect.Append(L" ON ");
				strSelect.Append(CA2W(szOnCond.c_str(), CP_UTF8));
			}
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
// 예) "INSERT INTO emp(id,name) VALUES(1,'John')" → afterData=[["id","name"],["1","'John'"]]
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
// 예) "DELETE FROM emp WHERE id=1" → attachmentData=[["condition"],["WHERE id=1"]]
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
// 예) "UPDATE emp SET sal=1 WHERE id=1" → attachmentData=[["condition"],["WHERE id=1"]]
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
// 예) "UPDATE emp SET sal=5000, comm=100" → afterData=[["sal","comm"],["5000","100"]]
bool CWVSqlParser::MakeUpdateAfterData(std::vector<std::vector<TOString>>& afterData)
{
	TRACE(_T(" ========= CWVSqlParser::MakeUpdateAfterData()   ========= \n"));

	auto pairs = m_oSQLEngine.GetSetPairs(0);

	std::vector<TOString> columns, values;
	for (const auto& p : pairs)
	{
		columns.push_back(p.first.c_str());
		values.push_back(p.second.c_str());
	}

	if (!columns.empty())
		afterData.push_back(columns);
	if (!values.empty())
		afterData.push_back(values);

	return true;
}

// SQL 파싱 후 DELETE→MakeDeleteBeforeData, UPDATE→MakeUpdateBeforeData 위임
// 예) "DELETE FROM emp WHERE id=1" → data=[["condition"],["WHERE id=1"]]
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

// SQL 파싱 후 INSERT→MakeInsertAfterData, UPDATE→MakeUpdateAfterData 위임
// 예) "INSERT INTO emp VALUES(1,'John')" → data=[[""],["1","'John'"]]
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