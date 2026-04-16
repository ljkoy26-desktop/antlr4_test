#include "StdAfx.h"
#include "WVSqlJavaParser.h"
#include "outil/UtilFunc.h"
#include <codecvt>


#include "WVSqlParser-SqlTypeSet.h"
#include "WVSqlParser-TokenType.h"
#include "OUtil/WVUtilTrace.h"
#include "outil/WVString.h"
#include "resource.h"
#include "OrangeMsg.h"

//#define JS2TT(XX) XX##.toString(FL_).wstr().c_str()
//#define JS2A(XX) XX##.toString(FL_).str().c_str()
//#define JS2W(XX) XX##.toString(FL_).wstr().c_str()
//#define JS2T(XX) (LPCTSTR)CW2T(XX##.toString(FL_).wstr().c_str())

// using namespace std;
// using namespace gudusoft::gsqlparser;

// Orange DB Type -> GSP DB Type
// (GSP �ļ� ���� �Լ� ) 
//static EDbVendor ConvertDbType(int dbType)
//{
//	switch (dbType)
//	{
//	case DB_TYPE::tstORACLE:
//	case DB_TYPE::tstAltibase:
//	case DB_TYPE::tstTibero:
//		return EDbVendor::get_dbvoracle();
//	case DB_TYPE::tstMSSQL:
//		return EDbVendor::get_dbvmssql();
//	case DB_TYPE::tstSybaseASE:
//	case DB_TYPE::tstSybaseIQ:
//		return EDbVendor::get_dbvsybase();
//	case DB_TYPE::tstMariaDB:
//	case DB_TYPE::tstMySQL:
//	case DB_TYPE::tstSunDB:
//	case DB_TYPE::tstGoldilocksDB:
//	case DB_TYPE::tstTDV:
//		return EDbVendor::get_dbvmysql();
//	case DB_TYPE::tstInformix:
//		return EDbVendor::get_dbvinformix();
//	case DB_TYPE::tstPostgreSQL:
//	case DB_TYPE::tstGreenplum:
//		return EDbVendor::get_dbvpostgresql();
//	case DB_TYPE::tstVertica:
//		return EDbVendor::get_dbvvertica();
//	case DB_TYPE::tstTeraData:
//		return EDbVendor::get_dbvteradata();
//	case DB_TYPE::tstNetezza:
//		return EDbVendor::get_dbvnetezza();
//	case DB_TYPE::tstDB2:
//	case DB_TYPE::tstDB2forZOS:
//	case DB_TYPE::tstDB2foriSeries:
//		return EDbVendor::get_dbvdb2();
//	case DB_TYPE::tstSapHana:
//		return EDbVendor::get_dbvhana();
//	case DB_TYPE::tstSymforware:
//	case DB_TYPE::tstCubrid:
//	default:
//		return EDbVendor::get_dbvgeneric();
//	}
//}

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
	/*
		�����丵 ��� �Լ�

		wstring ���� �����ִ� �Լ��ε� string ���� �������� Ȯ�� �ʿ� 

	*/

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

	return true;
}

bool CWVSqlParser::doParse(LPCTSTR sqlText)
{
	TRACE(_T(" ========= CWVSqlParser::doParse sqlText [%s]   ========= \n"), sqlText);
	m_oSQLEngine.Clear();

	m_strsql = CT2A(sqlText);

	if (!m_oSQLEngine.Parse(m_strsql, m_dbType))
	{
		// ������ ��� 
	}

	return true;
}

std::vector<CString> CWVSqlParser::SeparateSQL(int databaseType, LPCTSTR sqlText)
{
	TRACE(_T(" ========= CWVSqlParser::SeparateSQL databaseType [%d] sqlText [%s]   ========= \n"), databaseType, sqlText);
	/*
		�����丵 ��� �Լ� 

		const std::vector<SqlStatementInfo>&  ���� �ٷ� ����Ҽ� �ִ��� ���� �ʿ� 	
	
	*/

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
	/*
		�����丵 ��� �Լ�
		sqlengine ��ü ������ ���� �ٸ���. �̷��� ��ȯ �ؼ� ����ص� ������ ������??
		( ��������� ��ü - �������� ��ü ���ε��� �Ѱǵ� ������������? )
	*/

	SQLEngine engine;
	std::string sql = CT2A(sqlText);
	return engine.Parse(sql, databaseType);
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
		m_oSQLEngine.Parse(m_strsql, m_dbType);

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
	/*
		�����丵 ��� �Լ�
		sqlengine ��ü ������ ���� �ٸ���. �̷��� ��ȯ �ؼ� ����ص� ������ ������??
		( ��������� ��ü - �������� ��ü ���ε��� �Ѱǵ� ������������? )
	*/

	std::string result;

	try
	{
		SQLEngine engine;
		std::string sql = CT2A(sqlText);
		if (!engine.Parse(sql, m_dbType))
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

		TRACE(_T("[ERROR] %s\n"), (LPCTSTR)CA2T(getError().c_str()));
	}
	catch (exception e)
	{
		TRACE(_T("An exception occurred: %s"), static_cast<LPCTSTR>(CA2T(e.what(), CP_UTF8)));
	}

	return false;
}

// std::set<CWVSqlParser::Object> CWVSqlParser::setObject(nodes::TTable table)
std::set<std::vector<TOString>> CWVSqlParser::setObject(SqlStatementInfo stmtInfo)
{
	TRACE(_T(" ========= CWVSqlParser::setObject()   ========= \n"));
	/*
	* 
	*/


	std::set<std::vector<TOString>> objs;


	stmtInfo.GetTableNames();

	m_oSQLEngine.GetTableNames()
	std::vector<TOString> object = { L"
		
		"
		, JS2TT(table.getTableName(FL_).getObjectString(FL_))
		, JS2TT(table.getTableName(FL_).getSchemaString(FL_))
		, JS2TT(table.getTableName(FL_).getDatabaseString(FL_))
	};
	object[1].Trim(L"\"");
	object[2].Trim(L"\"");
	object[3].Trim(L"\"");
	if (m_bUppercase) {
		object[1].MakeUpper();
		object[2].MakeUpper();
		object[3].MakeUpper();
	}

	objs.insert(object);

	for (int j = 0; j < table.getLinkedColumns(FL_).size(FL_); j++)
	{
		nodes::TObjectName objectname = table.getLinkedColumns(FL_).getObjectName(j, FL_);

		if (objectname.isTableDetermined(FL_) == 1)
		{
			object[0] = JS2TT(objectname.getPartToken(FL_));
			if (m_bUppercase) object[0].MakeUpper();
			objs.insert(object);
		}
		else
		{
			TRACE(_T("isTableDetermined FALSE %s %s\n"), (LPCTSTR)JS2T(objectname), (LPCTSTR)JS2T(table));
			Object object = { JS2TT(objectname.getPartToken(FL_))
				, L""
				, L""
				, JS2TT(table.getTableName(FL_).getDatabaseString(FL_))
			};
			object[0].Trim(L"\"");
			object[1].Trim(L"\"");
			object[2].Trim(L"\"");
			object[3].Trim(L"\"");
			if (m_bUppercase) {
				object[0].MakeUpper();
				object[1].MakeUpper();
				object[2].MakeUpper();
				object[3].MakeUpper();
			}

			objs.insert(object);
		}
	}

	return objs;
}

void CWVSqlParser::traverseSql(UINT idx, gudusoft::gsqlparser::TCustomSqlStatement stmt)
{
	TRACE(_T(" ========= CWVSqlParser::traverseSql idx [%d]   ========= \n"), idx);



	jvm::local_frame lf;
	nodes::TTableList tables;
	tables = stmt.getTables(FL_);
	
	TRACE(_T("%s\n"), (LPCTSTR)JS2T(stmt));

	for (int i = 0; i<tables.size(FL_); i++)
	{
		nodes::TTable table;
		table = tables.getTable(i, FL_);

		TRACE(_T("%s\n"), (LPCTSTR)JS2T(table));

		if (table.getTableType(FL_).equals(ETableSource::get_subquery(), FL_))
		{
			traverseSql(idx, table.getSubquery(FL_));
		}
		else
		{
			std::set<CWVSqlParser::Object> objs = setObject(table);
			if (idx < m_objects.size())
				m_objects[idx].insert(objs.begin(), objs.end());
		}
	}

	for (int i=0; i<stmt.getStatements(FL_).size(FL_); i++)
	{
		traverseSql(idx, stmt.getStatements(FL_).get(i, FL_));
	}	
}

void CWVSqlParser::debugObjects(std::set<Object> objects)
{
	TRACE(_T(" ========= CWVSqlParser::debugObjects()   ========= \n"));
	int ii = 0;
	TRACE(_T("objects size = %d\n"), objects.size());
	for (auto obj : objects)
	{
		TRACE(_T("[%d] [column:%s] [table: %s] [schema: %s] [db: %s] \n"), ii, (LPCTSTR)CW2T(obj[0]), (LPCTSTR)CW2T(obj[1]), (LPCTSTR)CW2T(obj[2]), (LPCTSTR)CW2T(obj[3]));
		ii++;
	}
}

bool CWVSqlParser::traverseSql(UINT idx)
{
	TRACE(_T(" ========= CWVSqlParser::traverseSql idx [%d]   ========= \n"), idx);
	jvm::local_frame lf;
	if (idx >= GetStatementCount()) return false;

	traverseSql(idx, m_parser.get_sqlstatements().get(idx, FL_));

#ifdef DEBUG
	//debugObjects(m_objects[idx]);
#endif // DEBUG

	return true;
}

UINT CWVSqlParser::GetStatementCount()
{
	TRACE(_T(" ========= CWVSqlParser::GetStatementCount()   ========= \n"));
	try
	{
		jvm::local_frame lf;
		if (m_parser.is_null())
			return 0;
		return (UINT) m_parser.get_sqlstatements().size(FL_);
	}
	catch (exception & e)
	{
		_error << L"Exception: " << CA2W(e.what(), CP_UTF8);
	}

	return 0;
}

TOString CWVSqlParser::GetStatementText(UINT idx)
{
	TRACE(_T(" ========= CWVSqlParser::GetStatementText idx [%d]   ========= \n"), idx);
	try
	{
		jvm::local_frame lf;
		if (idx >= (UINT)m_parser.get_sqlstatements().size(FL_)) return L"";
		TOString statement = JS2TT(m_parser.get_sqlstatements().get(idx, FL_));

		return statement;
	}
	catch (exception & e)
	{
		_error << L"Exception: " << CA2W(e.what(), CP_UTF8);
	}

	return L"";
}

TOString CWVSqlParser::GetSqlCommand(UINT idx)
{
	TRACE(_T(" ========= CWVSqlParser::GetSqlCommand idx [%d]   ========= \n"), idx);
	try
	{
		jvm::local_frame lf;
		if (idx >= GetStatementCount()) return L"";

		TOString sqlcommand = L"";
		TSourceTokenList stl = m_parser.getSqlstatements(FL_).get(idx, FL_).get_sourcetokenlist();

		//sqlcommand = JS2TT(m_parser.getSqlstatements(FL_).get(idx, FL_).getStartToken(FL_));
		for (int i = 0; i < stl.size(FL_); i++)
		{
			TSourceToken tok = stl.get(i, FL_);
			sqlcommand = JS2TT(tok.get_astext());
			if (sqlcommand.GetLength() > 1)
				break;
		}

		return sqlcommand;
	}
	catch (exception & e)
	{
		_error << L"Exception: " << CA2W(e.what(), CP_UTF8);
	}

	return L"";
}

CWVSqlParser::SqlType CWVSqlParser::GetSqlType(UINT idx)
{
	TRACE(_T(" ========= CWVSqlParser::GetSqlType idx [%d]   ========= \n"), idx);
	try
	{
		jvm::local_frame lf;
		if (idx >= GetStatementCount()) return SqlTypeUnknown;

#define CheckAndReturn(Type) for (auto f : SqlTypeSet##Type) if (m_parser.getSqlstatements(FL_).get(idx, FL_).get_sqlstatementtype().equals(f(), FL_)) return SqlType##Type;
		CheckAndReturn(Query);
		CheckAndReturn(DML);
		CheckAndReturn(DDL);
		CheckAndReturn(DCL);
		CheckAndReturn(PLSQL);
#undef CheckAndReturn
	}
	catch (exception & e)
	{
		_error << L"Exception: " << CA2W(e.what(), CP_UTF8);
	}

	return SqlTypeETC;
}

std::set<CWVSqlParser::Object>& CWVSqlParser::GetAllObjects(UINT idx)
{
	TRACE(_T(" ========= CWVSqlParser::GetAllObjects idx [%d]   ========= \n"), idx);
	jvm::local_frame lf;
	static std::set<Object> dummy;
	if (m_objects.size() <= idx) return dummy; // XXX: Error

	if (m_objects[idx].empty()) {
		traverseSql(idx);
	}
	return m_objects[idx];
}

std::set<CWVSqlParser::Object> CWVSqlParser::GetAllTargetObjects(UINT idx)
{
	TRACE(_T(" ========= CWVSqlParser::GetAllTargetObjects idx [%d]   ========= \n"), idx);
	std::set<Object> objects;
	try
	{
		jvm::local_frame lf;
		if (idx >= GetStatementCount()) return objects;
		if (idx >= m_objects.size()) return objects;

		TOString sqlcommand = L"";
		if (GetSqlType(idx) == SqlTypeDML)
		{
			TCustomSqlStatement stmt = m_parser.get_sqlstatements().get(idx, FL_);
			nodes::TTable table;

			table = stmt.getTargetTable(FL_);
			if (table.getTableType(FL_).equals(ETableSource::get_subquery(), FL_))
			{
				traverseSql(idx, table.getSubquery(FL_));
				objects = m_objects[idx];
			}
			else
			{
				objects = setObject(table);
			}
		}
		else
		{
			traverseSql(idx);
			objects = m_objects[idx];
		}

#ifdef DEBUG
		//debugObjects(objects);
#endif // DEBUG
		return objects;
	}
	catch (exception & e)
	{
		_error << L"Exception: " << CA2W(e.what(), CP_UTF8);
	}

	return objects;
}

EM_MAKESELECT_RESULT CWVSqlParser::MakeSelectStmt(LPCTSTR sqlText, TOString& strSelect)
{
	TRACE(_T(" ========= CWVSqlParser::MakeSelectStmt sqlText [%s]   ========= \n"), sqlText);
	try
	{
		jvm::local_frame lf;
		UINT idx = 0;

		if (doParse(sqlText) == false)
			return RT_PARSE_FAIL;

		if (isInsertStmt(0))
		{
			return getSelectStmtForInsert(strSelect);
		}
		else if (isMergeStmt(0))
		{
			stmt::TMergeSqlStatement stmt = (stmt::TMergeSqlStatement&)m_parser.get_sqlstatements().get(idx, FL_);
			nodes::TTable tableTarget, tableSource;
			nodes::TAliasClause aliasTarget, aliasSource;
			nodes::TMergeWhenClause node;

			bool bMatched = false, bNotMatched = false;
			bMatched = hasMatchedClasuse(true, node);
			bNotMatched = hasMatchedClasuse(false, node);

			tableTarget = stmt.getTargetTable(FL_);
			aliasTarget = tableTarget.getAliasClause(FL_);
			tableSource = stmt.getUsingTable(FL_);
			aliasSource = tableSource.getAliasClause(FL_);

			strSelect.Format(L"SELECT %s.* FROM %s %s JOIN %s %s ON %s "
				, aliasTarget.is_null()? JS2TT(tableTarget) :JS2TT(aliasTarget)
				, JS2TT(tableTarget), aliasTarget.is_null() ? L"" : JS2TT(aliasTarget)
				, JS2TT(tableSource), aliasSource.is_null() ? L"" : JS2TT(aliasSource)
				, stmt.getCondition(FL_).is_null() ? L"": JS2TT(stmt.getCondition(FL_))
			);

			if (!bMatched && bNotMatched)
			{
				strSelect.Format(L"SELECT * FROM %s WHERE 1=2", JS2TT(tableTarget));
			}
		}
		else
		{ 
			TOString sTable, sWhere, sColumns;
			sTable = getTable(idx);
			sWhere = getWhere(idx);

			if (sTable.IsEmpty())
				return RT_EMPTY_TABLE_NAME;

			strSelect = L"select ";
			if (isUpdateStmt(0))
			{
				strSelect.Append(getSelectColumnsForUpdate(idx));
			}				
			else
				strSelect.AppendChar(L'*');

			strSelect.Append(L" from ");
			strSelect.Append(sTable);
			strSelect.Append(L" ");
			strSelect.Append(sWhere);
		}
	}
	catch (exception & e)
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
		jvm::local_frame lf;
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

			// Alias Check And Remove
			if (vSetCols.size() > 0) for (int i = 0; i < vSetCols.size(); i++) {
				int t = 0;
				for (CString token; L"" != (token = vSetCols.at(i).first.Tokenize(_T("."), pos));) {
					if (t == 1)
						vSetCols.at(i).first = token;
					t++;
				}
				pos = 0;
			}

			strSelect = L"select ";
			if (isUpdateStmt(idx)) {
				TOString t;
				for (std::vector<std::pair<CString, CString>>::iterator iter = vSetCols.begin(); iter != vSetCols.end(); ++iter) {
					t.Append((TOString)iter->second + L" as ");
					t.Append((TOString)iter->first);
					t.Append(L", ");
				}
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
	catch (exception & e)
	{
		_error << L"Exception: " << CA2W(e.what(), CP_UTF8);
	}

	return RT_SUCCESS;
}

// �������� Set, Where ���� �÷��� �������� üũ
bool CWVSqlParser::IsIncludeWhereInSet(CString sqlText)
{
	TRACE(_T(" ========= CWVSqlParser::IsIncludeWhereInSet sqlText [%s]   ========= \n"), sqlText);
	try
	{
		jvm::local_frame lf;
		std::vector<std::pair<CString, CString>> vWhereCols;
		TOString sColumns, sWhere;
		bool isFind = false;

		if (!Parse(sqlText))
			return false;

		return IsIncludeWhereInSet(0);

	}
	catch (exception & e)
	{
		_error << L"Exception: " << CA2W(e.what(), CP_UTF8);
	}
	return false;
}

bool CWVSqlParser::IsIncludeWhereInSet(UINT idx)
{
	TRACE(_T(" ========= CWVSqlParser::IsIncludeWhereInSet idx [%d]   ========= \n"), idx);
	jvm::local_frame lf;
	if (idx >= GetStatementCount()) return false;

	std::vector<std::pair<CString, CString>> vWhereCols;
	TOString sColumns, sWhere;
	bool isFind = false;

	if (isMergeStmt(idx))
	{
		stmt::TMergeSqlStatement stmt = (stmt::TMergeSqlStatement&)m_parser.get_sqlstatements().get(idx, FL_);
		bool bMatched = false, bNotMatched = false;

		for (int i = 0; i < stmt.getWhenClauses(FL_).size(FL_); i++)
		{
			int type = ((nodes::TMergeWhenClause&) stmt.getWhenClauses(FL_).elementAt(i, FL_)).getType(FL_);
			if (type == nodes::TMergeWhenClause::get_matched())
				bMatched = true;

			if (type == nodes::TMergeWhenClause::get_not_matched())
				bNotMatched = true;
		}

		return (!bMatched && bNotMatched);
	}

	if (!isUpdateStmt(idx)) {
		return false;
	}

	sColumns = getSelectColumnsForUpdate(idx);
	sColumns.Replace(L" ", L"");						// Remove Blank
	sWhere = getWhere(idx);
	vWhereCols = getWhereInColumn(idx);

	std::set<TOString> colSet;
	int pos = 0;
	for (TOString token; L"" != (token = sColumns.Tokenize(L",", pos));) {
		colSet.insert(token);
	}

	for (std::vector<std::pair<CString, CString>>::iterator iter = vWhereCols.begin(); iter != vWhereCols.end(); ++iter) {
		for (CString col : colSet) {
			int res = iter->first.CompareNoCase(col);
			if (iter->first.CompareNoCase(col) == 0) {
				isFind = true;
				break;
			}
		}
		if (isFind)
			break;
	}

	return isFind;
}

TOString CWVSqlParser::getTable(UINT idx)
{
	TRACE(_T(" ========= CWVSqlParser::getTable idx [%d]   ========= \n"), idx);
	TOString sTable;
	try
	{
		jvm::local_frame lf;
		if (idx >= GetStatementCount()) return L"";

		TCustomSqlStatement stmt = m_parser.get_sqlstatements().get(idx, FL_);
		nodes::TTable table;
		nodes::TAliasClause alias;

		if (GetSqlType(idx) == SqlTypeDML)
		{
			table = stmt.getTargetTable(FL_);
			alias = table.getAliasClause(FL_);

			sTable = JS2TT(table);

			if (!alias.is_null()){
				sTable += L" ";
				sTable += JS2TT(alias);
			}
		}
	}
	catch (exception & e)
	{
		_error << L"Exception: " << CA2W(e.what(), CP_UTF8);
	}

	return sTable;
}

TOString CWVSqlParser::getWhere(UINT idx)
{
	TRACE(_T(" ========= CWVSqlParser::getWhere idx [%d]   ========= \n"), idx);
	TOString sWhere;
	try
	{
		jvm::local_frame lf;
		if (idx >= GetStatementCount()) return L"";

		TCustomSqlStatement stmt = m_parser.get_sqlstatements().get(idx, FL_);

		if (isUpdateStmt(idx) || isDeleteStmt(idx))
		{
			sWhere = JS2TT(stmt.getWhereClause(FL_));
		}
	}
	catch (exception & e)
	{
		_error << L"Exception: " << CA2W(e.what(), CP_UTF8);
	}
	return sWhere;
}

TOString CWVSqlParser::getSelectColumnsForUpdate(UINT idx)
{
	TRACE(_T(" ========= CWVSqlParser::getSelectColumnsForUpdate idx [%d]   ========= \n"), idx);
	TOString sColumns, sColumn;
	try
	{
		jvm::local_frame lf;
		if (idx >= GetStatementCount()) return L"";

		stmt::TUpdateSqlStatement stmt = (stmt::TUpdateSqlStatement&)m_parser.getSqlstatements(FL_).get(idx, FL_);
		nodes::TResultColumnList columnList = stmt.getResultColumnList(FL_);

		for (int i = 0; i < columnList.size(FL_); i++)
		{
			columnList.getResultColumn(i, FL_);

			if (sColumns.IsEmpty() == false)
				sColumns += L", ";
			nodes::TExpressionList l = columnList.getResultColumn(i, FL_).getExpr(FL_).getLeftOperand(FL_).getExprList(FL_);
			if (l.is_null() == false)
				sColumns += JS2TT(l);
			else
				sColumns += JS2TT(columnList.getResultColumn(i, FL_).getExpr(FL_).getLeftOperand(FL_));
		}

	}
	catch (exception & e)
	{
		_error << L"Exception: " << CA2W(e.what(), CP_UTF8);
	}

	return sColumns;
}

EM_MAKESELECT_RESULT CWVSqlParser::getSelectStmtForInsert(TOString& sSelect)
{
	TRACE(_T(" ========= CWVSqlParser::getSelectStmtForInsert()   ========= \n"));
	TOString sColumnValues;
	try
	{
		jvm::local_frame lf;
		if (isInsertStmt(0))
		{
			stmt::TInsertSqlStatement insertStmt = (stmt::TInsertSqlStatement&)m_parser.get_sqlstatements().get(0, FL_);
			if (insertStmt.getInsertConditions(FL_).is_null() == false)
			{
				return RT_NOT_SUPPORT_INSERT_TYPE;
				// not support 
				// ex)
				// insert 
				// where exits(select 1 from emp where name = 'JOE')
				//	then
				//	into bar(name, age)
				//	select 'JOE', 40 from dual;
			}

			stmt::TSelectSqlStatement selectStmt = insertStmt.getSubQuery(FL_);
			if (selectStmt.is_null() == false)
			{
				sSelect = JS2TT(selectStmt);
				return RT_INSERT_SHOW_AFTERDATA;
			}

			nodes::TObjectNameList columns = insertStmt.getColumnList(FL_);
			nodes::TMultiTargetList values = insertStmt.getValues(FL_);
			for (int i = 0; i < values.size(FL_) ; i++)
			{
				nodes::TMultiTarget targetValue = values.getMultiTarget(i, FL_);
				nodes::TResultColumnList columnList = targetValue.getColumnList(FL_);
				for (int j = 0; j < columnList.size(FL_) ; j++)
				{
					TOString sColumn;
					sColumn = JS2TT(columnList.getResultColumn(j, FL_));
					if (!sColumnValues.IsEmpty())
						sColumnValues.Append(L", ");
					sColumnValues.Append(sColumn);
				}
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
		else 
			return RT_NOT_SUPPORT_INSERT_TYPE;
	}
	catch (exception & e)
	{
		_error << L"Exception: " << CA2W(e.what(), CP_UTF8);
	}
	return RT_PARSE_FAIL;
}

CString CWVSqlParser::GetErrMessage()
{
	TRACE(_T(" ========= CWVSqlParser::GetErrMessage()   ========= \n"));
	// TRACE(_T("[ERROR] %s\n"), (LPCTSTR)CA2T(getError().c_str()));
	return (LPCSTR)getError().c_str();
}

void CWVSqlParser::GetOriginColumnsOfAlias(std::multimap<TOString, Object>& mapOrgColumn)
{
	TRACE(_T(" ========= CWVSqlParser::GetOriginColumnsOfAlias()   ========= \n"));
	int nColIdx = 0;
	try
	{
		jvm::local_frame lf;
		if (GetStatementCount() < 0) return;

		if (GetSqlType(0) == SqlTypeQuery)
		{
			stmt::TSelectSqlStatement stmt = (stmt::TSelectSqlStatement&)m_parser.getSqlstatements(FL_).get(0, FL_);
			nodes::TResultColumnList columnList = stmt.getResultColumnList(FL_);

			for (int i = 0; i < columnList.size(FL_); i++)
			{
				nodes::TResultColumn cell = columnList.getResultColumn(i, FL_);
				nodes::TAliasClause alias = cell.getAliasClause(FL_);
				//bool isFunctionCall = false;

				//TRACE(_T("%s\n"), (LPCTSTR)JS2T(cell));
				//TRACE(_T("%s\n"), (LPCTSTR)JS2T(cell.getExpr(FL_)));
				//TRACE(_T("%s\n"), (LPCTSTR)JS2T(cell.getColumnNameOnly(FL_)));
				////TRACE(_T("%s\n"), (LPCTSTR)JS2T(cell.getExpr(FL_).getTypeName(FL_)));

				//if (cell.getExpr(FL_).getExpressionType(FL_).equals(EExpressionType::get_function_t(), FL_) == true)
				//{
				//	isFunctionCall = true;
				//	nodes::TFunctionCall fc = cell.getExpr(FL_).getFunctionCall(FL_);

				//	TRACE(_T("Function call\n"));
				//	TRACE(_T("%s\n"), (LPCTSTR)JS2T(fc.getFunctionName(FL_)));

				//	for (auto f : s_apszUnmaskingFunctionList)
				//	{
				//		CString userFunct;
				//		userFunct = JS2TT(fc.getFunctionName(FL_));

				//		if (userFunct.CompareNoCase(f) == 0)
				//		{
				//			isFunctionCall = false;
				//			break;
				//		}
				//	}

				//	if (isFunctionCall == true)
				//	{
				//		nodes::TObjectNameList objList = fc.getMatchColumns(FL_);
				//		for (int o = 0; o < objList.size(FL_); o++)
				//		{
				//			TOString sColumn = JS2TT(objList.getObjectName(o, FL_));
				//			// TOString sAlias = JS2TT(alias);
				//			mapOrgColumn[nColIdx] = sColumn;
				//		}
				//	}

				//}
				//else
				{ 
					if (alias.is_null() == false)
					{
						Object object = {  // 0:alias, 1:column, 2:table
						JS2TT(alias)
							, JS2TT(cell.getExpr(FL_))
							, JS2TT(cell.getPrefixTable(FL_))
						};

						object[0].MakeUpper();
						object[1].MakeUpper();
						object[2].MakeUpper();

						mapOrgColumn.insert( std::make_pair(object[0], object) );
					}
				}
			}

		}

	}
	catch (exception & e)
	{
		_error << L"Exception: " << CA2W(e.what(), CP_UTF8);
	}
}

std::vector<std::pair<CString, CString>> CWVSqlParser::getSetInColumn(UINT idx)
{
	TRACE(_T(" ========= CWVSqlParser::getSetInColumn idx [%d]   ========= \n"), idx);
	std::vector<std::pair<CString, CString>> columList;
	try
	{
		jvm::local_frame lf;

		if (idx >= GetStatementCount()) return columList;
		stmt::TUpdateSqlStatement stmt = (stmt::TUpdateSqlStatement&)m_parser.getSqlstatements(FL_).get(idx, FL_);
		nodes::TResultColumnList columnList = stmt.getResultColumnList(FL_);

		for (int i = 0; i < columnList.size(FL_); i++)
		{
			TOString cols, vals;
			nodes::TResultColumn cell = columnList.getResultColumn(i, FL_);
			if (cell.getExpr(FL_).is_null() == false
				&& cell.getExpr(FL_).getLeftOperand(FL_).is_null() == false
				&& cell.getExpr(FL_).getRightOperand(FL_).is_null() == false)
			{
				cols = JS2TT(cell.getExpr(FL_).getLeftOperand(FL_));
				vals = JS2TT(cell.getExpr(FL_).getRightOperand(FL_));
				std::pair<CString, CString> c;
				c.first = cols;
				c.second = vals;
				columList.push_back(c);
			}
		}

	}
	catch (exception & e)
	{
		_error << L"Exception: " << CA2W(e.what(), CP_UTF8);
	}

	return columList;
}

std::vector<std::pair<CString, CString>> CWVSqlParser::getWhereInColumn(UINT idx)
{
	TRACE(_T(" ========= CWVSqlParser::getWhereInColumn idx [%d]   ========= \n"), idx);
	std::vector<std::pair<CString, CString>> columList;
	try
	{
		jvm::local_frame lf;

		if (idx >= GetStatementCount()) return columList;

		stmt::TUpdateSqlStatement stmt = (stmt::TUpdateSqlStatement&)m_parser.getSqlstatements(FL_).get(idx, FL_);
		
		nodes::TTable tt = stmt.getTargetTable(FL_);
		if (!tt.is_null())
		{
			map<wstring, int> mapWhereColumns;
			for (int i = 0; i<tt.getLinkedColumns(FL_).size(FL_); i++)
			{
				nodes::TObjectName o = tt.getLinkedColumns(FL_).getObjectName(i, FL_);
				if (o.getLocation(FL_).equals(ESqlClause::get_where(), FL_))
				{
					std::pair<CString, CString> t;
					t.first = o.getColumnNameOnly(FL_).wstr().c_str();
					t.second = L"";
					columList.push_back(t);
					TRACE(_T("%s %s\n"), t.first, t.second);

				}
			}

		}
	}
	catch (exception & e)
	{
		_error << L"Exception: " << CA2W(e.what(), CP_UTF8);
	}

	return columList;
}

bool CWVSqlParser::isUpdateStmt(UINT idx)
{
	TRACE(_T(" ========= CWVSqlParser::isUpdateStmt idx [%d]   ========= \n"), idx);
	try
	{
		jvm::local_frame lf;
		if (idx >= GetStatementCount()) return false;

		TCustomSqlStatement stmt = m_parser.getSqlstatements(FL_).get(idx, FL_);
		ESqlStatementType type = stmt.get_sqlstatementtype();
		if (type.equals(ESqlStatementType::get_sstupdate(), FL_))
			return true;
	}
	catch (exception & e)
	{
		_error << L"Exception: " << CA2W(e.what(), CP_UTF8);
	}

	return false;
}

bool CWVSqlParser::isInsertStmt(UINT idx)
{
	TRACE(_T(" ========= CWVSqlParser::isInsertStmt idx [%d]   ========= \n"), idx);
	try
	{
		jvm::local_frame lf;
		if (idx >= GetStatementCount()) return false;

		TCustomSqlStatement stmt = m_parser.getSqlstatements(FL_).get(idx, FL_);
		ESqlStatementType type = stmt.get_sqlstatementtype();
		if (type.equals(ESqlStatementType::get_sstinsert(), FL_)
			//|| type.equals(ESqlStatementType::get_sstmysqlreplace(), FL_)
			)
			return true;
	}
	catch (exception & e)
	{
		_error << L"Exception: " << CA2W(e.what(), CP_UTF8);
	}

	return false;
}

bool CWVSqlParser::isDeleteStmt(UINT idx)
{
	TRACE(_T(" ========= CWVSqlParser::isDeleteStmt idx [%d]   ========= \n"), idx);
	try
	{
		jvm::local_frame lf;
		if (idx >= GetStatementCount()) return false;

		TCustomSqlStatement stmt = m_parser.getSqlstatements(FL_).get(idx, FL_);
		ESqlStatementType type = stmt.get_sqlstatementtype();
		if (type.equals(ESqlStatementType::get_sstdelete(), FL_))
			return true;
	}
	catch (exception & e)
	{
		_error << L"Exception: " << CA2W(e.what(), CP_UTF8);
	}

	return false;
}

bool CWVSqlParser::isMergeStmt(UINT idx)
{
	TRACE(_T(" ========= CWVSqlParser::isMergeStmt idx [%d]   ========= \n"), idx);
	try
	{
		jvm::local_frame lf;
		if (idx >= GetStatementCount()) return false;

		TCustomSqlStatement stmt = m_parser.getSqlstatements(FL_).get(idx, FL_);
		ESqlStatementType type = stmt.get_sqlstatementtype();
		if (type.equals(ESqlStatementType::get_sstmerge(), FL_))
			return true;
	}
	catch (exception & e)
	{
		_error << L"Exception: " << CA2W(e.what(), CP_UTF8);
	}

	return false;
}

bool CWVSqlParser::isSelectStmt(UINT idx)
{
	TRACE(_T(" ========= CWVSqlParser::isSelectStmt idx [%d]   ========= \n"), idx);
	try
	{
		jvm::local_frame lf;
		if (idx >= GetStatementCount()) return false;

		TCustomSqlStatement stmt = m_parser.getSqlstatements(FL_).get(idx, FL_);
		ESqlStatementType type = stmt.get_sqlstatementtype();
		if (type.equals(ESqlStatementType::get_sstselect(), FL_))
			return true;
	}
	catch (exception & e)
	{
		_error << L"Exception: " << CA2W(e.what(), CP_UTF8);
	}

	return false;
}

CString CWVSqlParser::Formatter()
{
	TRACE(_T(" ========= CWVSqlParser::Formatter()   ========= \n"));
	CString result;
	try
	{
		jvm::local_frame lf;

		pp::stmtformatter::FormatterFactory ff;
		pp::para::GFmtOpt option = pp::para::GFmtOptFactory::newInstance(FL_);
		option.set_wsPaddingParenthesesInExpression(java::lang::Boolean::get_FALSE(), FL_);

		result = CW2T(ff.pp(m_parser, option, FL_).wstr().c_str());
	}
	catch (exception & e)
	{
		_error << L"Exception: " << CA2W(e.what(), CP_UTF8);
	}
	return result;

}

bool CWVSqlParser::GetInsertValues(TOString sqlInsert, std::vector<TOString>& colReturn, std::vector<TOString>& valReturn)
{
	TRACE(_T(" ========= CWVSqlParser::GetInsertValues sqlInsert [%s]   ========= \n"), (LPCTSTR)sqlInsert);
	try
	{
		jvm::local_frame lf;

		if (!Parse(CW2T(sqlInsert)))
			return false;

		if (isInsertStmt(0))
		{
			stmt::TInsertSqlStatement insertStmt = (stmt::TInsertSqlStatement&)m_parser.get_sqlstatements().get(0, FL_);
			if (insertStmt.getInsertConditions(FL_).is_null() == false)
				return false;

			stmt::TSelectSqlStatement selectStmt = insertStmt.getSubQuery(FL_);
			if (selectStmt.is_null() == false)
				return false;

			nodes::TObjectNameList columns = insertStmt.getColumnList(FL_);
			for (int i = 0; i < columns.size(FL_); i++)
			{
				colReturn.push_back(JS2TT(columns.getObjectName(i, FL_)));
			}

			nodes::TMultiTargetList values = insertStmt.getValues(FL_);
			for (int i = 0; i < values.size(FL_); i++)
			{
				nodes::TMultiTarget targetValue = values.getMultiTarget(i, FL_);
				nodes::TResultColumnList columnList = targetValue.getColumnList(FL_);
				for (int j = 0; j < columnList.size(FL_); j++)
				{
					TOString sColumn;
					sColumn = JS2TT(columnList.getResultColumn(j, FL_));

					valReturn.push_back(sColumn);
				}
			}

			return true;
		}

	}
	catch (exception & e)
	{
		_error << L"Exception: " << CA2W(e.what(), CP_UTF8);
	}

	return false;
}

EM_MAKESELECT_RESULT CWVSqlParser::MakeAfterSelect4Merge(LPCTSTR sqlText, TOString& strSelect)
{
	TRACE(_T(" ========= CWVSqlParser::MakeAfterSelect4Merge sqlText [%s]   ========= \n"), sqlText);
	try
	{
		jvm::local_frame lf;

		stmt::TMergeSqlStatement stmt = (stmt::TMergeSqlStatement&)m_parser.get_sqlstatements().get(0, FL_);
		nodes::TMergeWhenClause nodeNotMatch;
		bool bMatched = false, bNotMatched = false;

		bMatched = hasMatchedClasuse(true, nodeNotMatch);
		bNotMatched = hasMatchedClasuse(false, nodeNotMatch);

		if (bMatched || !bNotMatched)
			return MakeSelectStmt(sqlText, strSelect);

		TOString sColumnValues;
		nodes::TMergeInsertClause stmtInsert = nodeNotMatch.getInsertClause(FL_);
		nodes::TResultColumnList columnList = stmtInsert.getValuelist(FL_);
		for (int j = 0; j < columnList.size(FL_); j++)
		{
			TOString sColumn;
			sColumn = JS2TT(columnList.getResultColumn(j, FL_));
			if (!sColumnValues.IsEmpty())
				sColumnValues.Append(L", ");
			sColumnValues.Append(sColumn);
		}

		nodes::TTable tableTarget, tableSource;
		nodes::TAliasClause aliasTarget, aliasSource;

		tableTarget = stmt.getTargetTable(FL_);
		aliasTarget = tableTarget.getAliasClause(FL_);

		tableSource = stmt.getUsingTable(FL_);
		aliasSource = tableSource.getAliasClause(FL_);

		strSelect.Format(L"SELECT %s FROM %s %s WHERE NOT EXISTS ( SELECT 1 FROM %s %s WHERE %s )"
			, sColumnValues
			, JS2TT(tableSource), aliasSource.is_null() ? L"" : JS2TT(aliasSource)
			, JS2TT(tableTarget), aliasTarget.is_null() ? L"" : JS2TT(aliasTarget)
			, stmt.getCondition(FL_).is_null()? L"":JS2TT(stmt.getCondition(FL_)));

	}
	catch (exception & e)
	{
		_error << L"Exception: " << CA2W(e.what(), CP_UTF8);
	}

	return RT_SUCCESS;
}

bool CWVSqlParser::hasMatchedClasuse(bool bMatched, nodes::TMergeWhenClause & node)
{
	TRACE(_T(" ========= CWVSqlParser::hasMatchedClasuse bMatched [%d]   ========= \n"), bMatched);
	stmt::TMergeSqlStatement stmt = (stmt::TMergeSqlStatement&)m_parser.get_sqlstatements().get(0, FL_);

	for (int i = 0; i < stmt.getWhenClauses(FL_).size(FL_); i++)
	{
		int type = ((nodes::TMergeWhenClause&) stmt.getWhenClauses(FL_).elementAt(i, FL_)).getType(FL_);
		if (bMatched && type == nodes::TMergeWhenClause::get_matched())
		{
			node = (nodes::TMergeWhenClause&) stmt.getWhenClauses(FL_).elementAt(i, FL_);
			return true;
		}

		if (!bMatched && type == nodes::TMergeWhenClause::get_not_matched())
		{
			node = (nodes::TMergeWhenClause&) stmt.getWhenClauses(FL_).elementAt(i, FL_);
			return true;
		}
	}
	return false;
}

bool CWVSqlParser::MakeInsertAfterData(std::vector< std::vector<TOString> >& afterData)
{
	TRACE(_T(" ========= CWVSqlParser::MakeInsertAfterData()   ========= \n"));
	std::vector<TOString> ret;
	stmt::TInsertSqlStatement insertStmt = (stmt::TInsertSqlStatement&)m_parser.get_sqlstatements().get(0, FL_);

	nodes::TObjectNameList columns = insertStmt.getColumnList(FL_);
	for (int i = 0; i < columns.size(FL_); i++)
	{
		ret.push_back(JS2TT(columns.getObjectName(i, FL_)));
	}

	if (ret.size() > 0)
		afterData.push_back(ret);
	ret.clear();


	nodes::TMultiTargetList values = insertStmt.getValues(FL_);
	for (int i = 0; i < values.size(FL_); i++)
	{
		nodes::TMultiTarget targetValue = values.getMultiTarget(i, FL_);
		nodes::TResultColumnList columnList = targetValue.getColumnList(FL_);
		for (int j = 0; j < columnList.size(FL_); j++)
		{
			TOString sColumn;
			sColumn = JS2TT(columnList.getResultColumn(j, FL_));

			ret.push_back(sColumn);
		}
	}

	if (ret.size() > 0)
		afterData.push_back(ret);
	ret.clear();

	return true;
}


void _traverser(nodes::TExpression exp, std::vector<TOString> &columns, std::vector<TOString> &values)
{
	TRACE(_T(" ========= _traverser()   ========= \n"));
	auto _isLeaf = [&](EExpressionType ep) {
		if (ep.equals(EExpressionType::get_simple_comparison_t(), FL_))
			return true;
		if (ep.equals(EExpressionType::get_function_t(), FL_))
			return true;
		if (ep.equals(EExpressionType::get_subquery_t(), FL_))
			return true;

		return false;
	};

	EExpressionType exptype = exp.getExpressionType(FL_);
	TRACE(L"%s\n", JS2TT(exptype));
	nodes::TExpression lo = exp.getLeftOperand(FL_);
	TRACE(L"%s\n", JS2TT(lo));
	nodes::TExpression ro = exp.getRightOperand(FL_);
	TRACE(L"%s\n", JS2TT(ro));

	if (_isLeaf(exptype) == true)
	{
		columns.push_back(JS2TT(lo));
		values.push_back(JS2TT(ro));
	}
	else {
		_traverser(lo, columns, values);
		_traverser(ro, columns, values);
	}
}

bool CWVSqlParser::MakeDeleteBeforeData(std::vector< std::vector<TOString> >& attachmentData)
{
	TRACE(_T(" ========= CWVSqlParser::MakeDeleteBeforeData()   ========= \n"));
	bool ret = true;

	std::vector<TOString> columns, values;
	TOString sColumn, sValue;

	stmt::TDeleteSqlStatement deleteStmt = (stmt::TDeleteSqlStatement&)m_parser.get_sqlstatements().get(0, FL_);
	nodes::TWhereClause whereClause = deleteStmt.getWhereClause(FL_);
	nodes::TExpression cond = whereClause.getCondition(FL_);

	TRACE(L"%s\n", JS2TT(whereClause));
	TRACE(L"%s\n", JS2TT(cond));

	_traverser(cond, columns, values);

	if (columns.size() == 0)
	{
		columns.push_back(L"condition");
		values.push_back(JS2TT(cond));
	}

	attachmentData.push_back(columns);
	attachmentData.push_back(values);

	return true;
}

bool CWVSqlParser::MakeUpdateBeforeData(std::vector< std::vector<TOString> >& attachmentData)
{
	TRACE(_T(" ========= CWVSqlParser::MakeUpdateBeforeData()   ========= \n"));
	bool ret = true;

	std::vector<TOString> columns, values;
	TOString sColumn, sValue;

	stmt::TUpdateSqlStatement sqlStmt = (stmt::TUpdateSqlStatement&)m_parser.get_sqlstatements().get(0, FL_);
	nodes::TWhereClause whereClause = sqlStmt.getWhereClause(FL_);
	nodes::TExpression cond = whereClause.getCondition(FL_);

	TRACE(L"%s\n", JS2TT(whereClause));
	TRACE(L"%s\n", JS2TT(cond));

	_traverser(cond, columns, values);

	if (columns.size() == 0)
	{
		columns.push_back(L"condition");
		values.push_back(JS2TT(cond));
	}

	attachmentData.push_back(columns);
	attachmentData.push_back(values);

	return true;
}

bool CWVSqlParser::MakeUpdateAfterData(std::vector< std::vector<TOString> >& afterData)
{
	TRACE(_T(" ========= CWVSqlParser::MakeUpdateAfterData()   ========= \n"));
	bool ret = true;

	std::vector<TOString> columns, values;
	TOString sColumn, sValue;

	stmt::TUpdateSqlStatement sqlStmt = (stmt::TUpdateSqlStatement&)m_parser.get_sqlstatements().get(0, FL_);

	nodes::TResultColumnList columnList = sqlStmt.getResultColumnList(FL_);
	for (int i = 0; i < columnList.size(FL_); i++)
	{
		columnList.getResultColumn(i, FL_);

		nodes::TExpressionList l = columnList.getResultColumn(i, FL_).getExpr(FL_).getLeftOperand(FL_).getExprList(FL_);
		if (l.is_null() == false)
			sColumn = JS2TT(l);
		else
			sColumn = JS2TT(columnList.getResultColumn(i, FL_).getExpr(FL_).getLeftOperand(FL_));

		nodes::TExpressionList r = columnList.getResultColumn(i, FL_).getExpr(FL_).getRightOperand(FL_).getExprList(FL_);
		if (r.is_null() == false)
			sValue = JS2TT(r);
		else
			sValue = JS2TT(columnList.getResultColumn(i, FL_).getExpr(FL_).getRightOperand(FL_));

		values.push_back(sValue);
	}

	if (columns.empty() == false)
		afterData.push_back(columns);

	if (values.empty() == false)
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