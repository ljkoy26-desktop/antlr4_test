-- ============================================================
-- antlr4_TestCase.sql
-- GetOriginColumnsOfAlias 테스트 케이스 모음
-- 반환구조: alias(대문자), expression(대문자), prefixTable(대문자)
-- ============================================================


-- ──────────────────────────────────────────────────────────────
-- TC-01 : 단순 컬럼 별칭 (테이블 접두사 포함)
-- 기대 결과 : ENO / E.EMPNO / EMP
--             NM  / E.ENAME / EMP
--             SALARY / E.SAL / EMP
-- ──────────────────────────────────────────────────────────────
SELECT e.empno AS eno,
       e.ename AS nm,
       e.sal   AS salary
FROM scott.emp e;


-- ──────────────────────────────────────────────────────────────
-- TC-02 : 함수 표현식 별칭
-- 기대 결과 : SHORT_NAME / SUBSTR(ENAME,1,3) / -
--             JOB_UPPER  / UPPER(JOB)        / -
--             COMM_VAL   / NVL(COMM,0)       / -
-- ──────────────────────────────────────────────────────────────
SELECT SUBSTR(ename, 1, 3)  AS short_name,
       UPPER(job)            AS job_upper,
       NVL(comm, 0)          AS comm_val
FROM scott.emp;


-- ──────────────────────────────────────────────────────────────
-- TC-03 : 별칭 없는 컬럼만 있는 경우 → 결과 0개
-- ──────────────────────────────────────────────────────────────
SELECT empno, ename, sal
FROM scott.emp
WHERE deptno = 10;


-- ──────────────────────────────────────────────────────────────
-- TC-04 : 별칭 혼합 (일부 컬럼은 별칭 없음)
-- 기대 결과 : NM / E.ENAME / EMP
--             SALARY / E.SAL / EMP   (2개)
-- ──────────────────────────────────────────────────────────────
SELECT e.empno,
       e.ename  AS nm,
       e.sal    AS salary,
       e.deptno
FROM scott.emp e;


-- ──────────────────────────────────────────────────────────────
-- TC-05 : INNER JOIN - 두 테이블 컬럼에 각각 별칭
-- 기대 결과 : EMP_ID    / E.EMPNO / EMP
--             EMP_NAME  / E.ENAME / EMP
--             DEPT_NAME / D.DNAME / DEPT
-- ──────────────────────────────────────────────────────────────
SELECT e.empno  AS emp_id,
       e.ename  AS emp_name,
       d.dname  AS dept_name
FROM scott.emp e
INNER JOIN scott.dept d ON e.deptno = d.deptno;


-- ──────────────────────────────────────────────────────────────
-- TC-06 : 산술 표현식 별칭
-- 기대 결과 : ANNUAL_SAL    / SAL*12           / -
--             TOTAL_INCOME  / SAL+NVL(COMM,0)  / -
-- ──────────────────────────────────────────────────────────────
SELECT sal * 12              AS annual_sal,
       sal + NVL(comm, 0)   AS total_income
FROM scott.emp;


-- ──────────────────────────────────────────────────────────────
-- TC-07 : CASE 표현식 별칭
-- 기대 결과 : GRADE / CASE WHEN ... END / -  (1개)
-- ──────────────────────────────────────────────────────────────
SELECT empno,
       CASE
           WHEN sal >= 3000 THEN 'HIGH'
           WHEN sal >= 1500 THEN 'MID'
           ELSE 'LOW'
       END AS grade
FROM scott.emp;


-- ──────────────────────────────────────────────────────────────
-- TC-08 : 스칼라 서브쿼리 별칭
-- 기대 결과 : EID     / E.EMPNO  / EMP
--             ENAME   / E.ENAME  / EMP
--             DEPT_NM / (SELECT ...) / -
-- ──────────────────────────────────────────────────────────────
SELECT e.empno AS eid,
       e.ename AS ename,
       (SELECT d.dname FROM scott.dept d WHERE d.deptno = e.deptno) AS dept_nm
FROM scott.emp e;


-- ──────────────────────────────────────────────────────────────
-- TC-09 : AS 키워드 없이 별칭 지정 (공백 별칭)
-- 기대 결과 : EID    / E.EMPNO / EMP
--             NM     / E.ENAME / EMP
--             SALARY / E.SAL   / EMP
-- ──────────────────────────────────────────────────────────────
SELECT e.empno eid,
       e.ename nm,
       e.sal   salary
FROM scott.emp e;


-- ──────────────────────────────────────────────────────────────
-- TC-10 : MySQL - 집계함수 별칭
-- 기대 결과 : CNT       / COUNT(*)  / -
--             TOTAL_SAL / SUM(SAL)  / -
--             AVG_SAL   / AVG(SAL)  / -
-- ──────────────────────────────────────────────────────────────
SELECT deptno,
       COUNT(*)   AS cnt,
       SUM(sal)   AS total_sal,
       AVG(sal)   AS avg_sal
FROM emp
GROUP BY deptno;


-- ──────────────────────────────────────────────────────────────
-- TC-11 : MSSQL - TOP / ISNULL 별칭
-- 기대 결과 : EMP_ID  / E.EMPLOYEEID      / EMPLOYEE
--             LAST_NM / E.LASTNAME        / EMPLOYEE
--             MID_NM  / ISNULL(E.MIDDLENAME,'') / -
-- ──────────────────────────────────────────────────────────────
SELECT TOP 10
       e.EmployeeID  AS emp_id,
       e.LastName    AS last_nm,
       ISNULL(e.MiddleName, '') AS mid_nm
FROM HumanResources.Employee e
ORDER BY e.EmployeeID;


-- ──────────────────────────────────────────────────────────────
-- TC-12 : PostgreSQL - COALESCE 별칭
-- 기대 결과 : UID        / U.USER_ID          / USERS
--             UNAME      / U.USERNAME         / USERS
--             EMAIL_ADDR / COALESCE(U.EMAIL,'N/A') / -
-- ──────────────────────────────────────────────────────────────
SELECT u.user_id                      AS uid,
       u.username                     AS uname,
       COALESCE(u.email, 'N/A')       AS email_addr
FROM public.users u
WHERE u.is_active = true;


-- ──────────────────────────────────────────────────────────────
-- TC-13 : 인라인 뷰(FROM 서브쿼리) - 외부 쿼리 별칭 추출
-- 기대 결과 : EMP_ID    / V.EID   / V(인라인뷰)
--             TOTAL_SAL / V.TOTAL / V(인라인뷰)
-- ──────────────────────────────────────────────────────────────
SELECT v.eid   AS emp_id,
       v.total AS total_sal
FROM (
    SELECT empno                AS eid,
           sal + NVL(comm, 0)  AS total
    FROM scott.emp
) v
WHERE v.total > 2000;


-- ──────────────────────────────────────────────────────────────
-- TC-14 : SELECT * → 결과 0개
-- ──────────────────────────────────────────────────────────────
SELECT *
FROM scott.emp
WHERE sal > 1000;


-- ──────────────────────────────────────────────────────────────
-- TC-15 : UPDATE 문 (SELECT 아님) → 결과 0개
-- ──────────────────────────────────────────────────────────────
UPDATE scott.emp
SET sal = sal * 1.1
WHERE deptno = 10;
