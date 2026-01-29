-- ============================================================
-- ANTLR4 MySQL Parser Test Cases
-- 각 SQL 유형별 테스트 문장 모음
-- ============================================================

-- ============================================================
-- 1. DML (Data Manipulation Language)
-- ============================================================

-- 1.1 SELECT 문
SELECT * FROM emp;
SELECT id, name, salary FROM employees WHERE dept_id = 10;
SELECT e.name, d.dept_name FROM employees e JOIN departments d ON e.dept_id = d.id;
SELECT COUNT(*), AVG(salary) FROM employees GROUP BY dept_id HAVING COUNT(*) > 5;
SELECT * FROM orders ORDER BY order_date DESC LIMIT 10;
SELECT DISTINCT category FROM products;
SELECT * FROM employees WHERE name LIKE '%John%';
SELECT * FROM employees WHERE salary BETWEEN 3000 AND 5000;
SELECT * FROM employees WHERE dept_id IN (10, 20, 30);
SELECT (SELECT MAX(salary) FROM employees) AS max_sal;
SELECT * FROM employees e WHERE EXISTS (SELECT 1 FROM departments d WHERE d.id = e.dept_id);
SELECT id, name, (SELECT dept_name FROM departments WHERE id = e.dept_id) AS dept FROM employees e;

-- 1.2 INSERT 문
INSERT INTO emp VALUES (1, 'John', 5000);
INSERT INTO employees (id, name, salary) VALUES (1, 'John Doe', 50000);
INSERT INTO employees (id, name, salary) VALUES (1, 'John', 5000), (2, 'Jane', 6000), (3, 'Bob', 4500);
INSERT INTO employees_backup SELECT * FROM employees WHERE dept_id = 10;
INSERT INTO logs (message, created_at) VALUES ('User logged in', NOW());
INSERT IGNORE INTO employees (id, name) VALUES (1, 'John');
INSERT INTO employees (id, name) VALUES (1, 'John') ON DUPLICATE KEY UPDATE name = 'John Updated';

-- 1.3 UPDATE 문
UPDATE emp SET salary = 6000 WHERE id = 1;
UPDATE employees SET salary = salary * 1.1 WHERE dept_id = 10;
UPDATE employees e JOIN departments d ON e.dept_id = d.id SET e.salary = e.salary * 1.1 WHERE d.dept_name = 'Sales';
UPDATE employees SET name = 'Jane', salary = 7000 WHERE id = 2;
UPDATE employees SET status = 'inactive' WHERE last_login < DATE_SUB(NOW(), INTERVAL 1 YEAR);
UPDATE LOW_PRIORITY employees SET salary = 5000 WHERE id = 1;

-- 1.4 DELETE 문
DELETE FROM emp WHERE id = 1;
DELETE FROM employees WHERE dept_id = 10;
DELETE FROM employees WHERE id IN (SELECT id FROM temp_delete_list);
DELETE e FROM employees e JOIN departments d ON e.dept_id = d.id WHERE d.dept_name = 'Closed';
DELETE FROM logs WHERE created_at < DATE_SUB(NOW(), INTERVAL 30 DAY);
DELETE LOW_PRIORITY FROM employees WHERE status = 'inactive';

-- 1.5 REPLACE 문
REPLACE INTO employees (id, name, salary) VALUES (1, 'John', 5500);
REPLACE INTO config (key_name, value) VALUES ('max_connections', '100');


-- ============================================================
-- 2. DDL (Data Definition Language)
-- ============================================================

-- 2.1 CREATE TABLE 문
CREATE TABLE test_table (id INT PRIMARY KEY, name VARCHAR(100));
CREATE TABLE employees (
    id INT AUTO_INCREMENT PRIMARY KEY,
    name VARCHAR(100) NOT NULL,
    email VARCHAR(255) UNIQUE,
    salary DECIMAL(10, 2) DEFAULT 0.00,
    dept_id INT,
    hire_date DATE,
    created_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP,
    FOREIGN KEY (dept_id) REFERENCES departments(id)
);
CREATE TABLE IF NOT EXISTS logs (
    id BIGINT AUTO_INCREMENT PRIMARY KEY,
    message TEXT,
    level ENUM('DEBUG', 'INFO', 'WARN', 'ERROR') DEFAULT 'INFO',
    created_at DATETIME DEFAULT CURRENT_TIMESTAMP
);
CREATE TABLE employees_backup AS SELECT * FROM employees;
CREATE TEMPORARY TABLE temp_results (id INT, value VARCHAR(255));

-- 2.2 CREATE DATABASE 문
CREATE DATABASE testdb;
CREATE DATABASE IF NOT EXISTS myapp CHARACTER SET utf8mb4 COLLATE utf8mb4_unicode_ci;
CREATE SCHEMA new_schema;

-- 2.3 CREATE INDEX 문
CREATE INDEX idx_emp_name ON employees(name);
CREATE UNIQUE INDEX idx_emp_email ON employees(email);
CREATE INDEX idx_emp_composite ON employees(dept_id, hire_date);
CREATE FULLTEXT INDEX idx_content ON articles(title, content);

-- 2.4 CREATE VIEW 문
CREATE VIEW v_active_employees AS SELECT * FROM employees WHERE status = 'active';
CREATE OR REPLACE VIEW v_dept_summary AS SELECT dept_id, COUNT(*) as cnt, AVG(salary) as avg_sal FROM employees GROUP BY dept_id;
CREATE VIEW v_emp_dept AS SELECT e.*, d.dept_name FROM employees e JOIN departments d ON e.dept_id = d.id;

-- 2.5 ALTER TABLE 문
ALTER TABLE employees ADD COLUMN phone VARCHAR(20);
ALTER TABLE employees ADD COLUMN address VARCHAR(255) AFTER email;
ALTER TABLE employees DROP COLUMN phone;
ALTER TABLE employees MODIFY COLUMN name VARCHAR(200) NOT NULL;
ALTER TABLE employees CHANGE COLUMN name full_name VARCHAR(200);
ALTER TABLE employees ADD INDEX idx_salary (salary);
ALTER TABLE employees DROP INDEX idx_salary;
ALTER TABLE employees ADD CONSTRAINT fk_dept FOREIGN KEY (dept_id) REFERENCES departments(id);
ALTER TABLE employees DROP FOREIGN KEY fk_dept;
ALTER TABLE employees RENAME TO staff;
ALTER TABLE employees ENGINE = InnoDB;
ALTER TABLE employees AUTO_INCREMENT = 1000;
ALTER TABLE employees ADD PRIMARY KEY (id);

-- 2.6 ALTER DATABASE 문
ALTER DATABASE testdb CHARACTER SET utf8mb4;
ALTER DATABASE testdb COLLATE utf8mb4_unicode_ci;

-- 2.7 DROP 문
DROP TABLE test_table;
DROP TABLE IF EXISTS temp_table;
DROP TABLE employees, departments, orders;
DROP DATABASE testdb;
DROP DATABASE IF EXISTS old_database;
DROP INDEX idx_emp_name ON employees;
DROP VIEW v_active_employees;
DROP VIEW IF EXISTS v_old_view;

-- 2.8 TRUNCATE 문
TRUNCATE TABLE logs;
TRUNCATE TABLE employees;

-- 2.9 RENAME 문
RENAME TABLE old_table TO new_table;
RENAME TABLE employees TO staff, departments TO divisions;


-- ============================================================
-- 3. DCL (Data Control Language)
-- ============================================================

-- 3.1 GRANT 문
GRANT SELECT ON db.* TO 'user'@'localhost';
GRANT ALL PRIVILEGES ON *.* TO 'admin'@'%';
GRANT SELECT, INSERT, UPDATE ON mydb.employees TO 'app_user'@'localhost';
GRANT SELECT ON mydb.* TO 'readonly'@'%' WITH GRANT OPTION;
GRANT EXECUTE ON PROCEDURE mydb.sp_get_employee TO 'app_user'@'localhost';
GRANT CREATE, DROP ON mydb.* TO 'developer'@'localhost';
GRANT SELECT (id, name, email) ON mydb.employees TO 'limited_user'@'localhost';

-- 3.2 REVOKE 문
REVOKE ALL ON db.* FROM 'user'@'localhost';
REVOKE SELECT, INSERT ON mydb.employees FROM 'app_user'@'localhost';
REVOKE ALL PRIVILEGES, GRANT OPTION FROM 'old_user'@'localhost';
REVOKE EXECUTE ON PROCEDURE mydb.sp_get_employee FROM 'app_user'@'localhost';


-- ============================================================
-- 4. TCL (Transaction Control Language)
-- ============================================================

-- 4.1 트랜잭션 제어
START TRANSACTION;
BEGIN;
BEGIN WORK;
COMMIT;
COMMIT WORK;
ROLLBACK;
ROLLBACK WORK;

-- 4.2 SAVEPOINT
SAVEPOINT sp1;
ROLLBACK TO sp1;
ROLLBACK TO SAVEPOINT sp1;
RELEASE SAVEPOINT sp1;

-- 4.3 트랜잭션 설정
SET TRANSACTION ISOLATION LEVEL READ COMMITTED;
SET TRANSACTION ISOLATION LEVEL REPEATABLE READ;
SET TRANSACTION ISOLATION LEVEL SERIALIZABLE;
SET TRANSACTION READ ONLY;
SET TRANSACTION READ WRITE;

-- 4.4 LOCK 문
LOCK TABLES employees WRITE;
LOCK TABLES employees READ, departments WRITE;
UNLOCK TABLES;


-- ============================================================
-- 5. PL/SQL / Procedural (Stored Routines)
-- ============================================================

-- 5.1 CREATE PROCEDURE
CREATE PROCEDURE sp_test() BEGIN SELECT 1; END;

CREATE PROCEDURE sp_get_employee(IN emp_id INT)
BEGIN
    SELECT * FROM employees WHERE id = emp_id;
END;

CREATE PROCEDURE sp_update_salary(IN emp_id INT, IN new_salary DECIMAL(10,2), OUT result INT)
BEGIN
    UPDATE employees SET salary = new_salary WHERE id = emp_id;
    SET result = ROW_COUNT();
END;

CREATE PROCEDURE sp_complex()
BEGIN
    DECLARE v_count INT DEFAULT 0;
    DECLARE v_done INT DEFAULT FALSE;
    DECLARE cur CURSOR FOR SELECT id FROM employees;
    DECLARE CONTINUE HANDLER FOR NOT FOUND SET v_done = TRUE;

    OPEN cur;
    read_loop: LOOP
        FETCH cur INTO v_count;
        IF v_done THEN
            LEAVE read_loop;
        END IF;
    END LOOP;
    CLOSE cur;
END;

-- 5.2 CREATE FUNCTION
CREATE FUNCTION fn_test() RETURNS INT BEGIN RETURN 1; END;

CREATE FUNCTION fn_get_full_name(first_name VARCHAR(50), last_name VARCHAR(50))
RETURNS VARCHAR(101)
DETERMINISTIC
BEGIN
    RETURN CONCAT(first_name, ' ', last_name);
END;

CREATE FUNCTION fn_calculate_bonus(salary DECIMAL(10,2), performance_rating INT)
RETURNS DECIMAL(10,2)
DETERMINISTIC
BEGIN
    DECLARE bonus DECIMAL(10,2);
    IF performance_rating >= 5 THEN
        SET bonus = salary * 0.20;
    ELSEIF performance_rating >= 3 THEN
        SET bonus = salary * 0.10;
    ELSE
        SET bonus = salary * 0.05;
    END IF;
    RETURN bonus;
END;

-- 5.3 CREATE TRIGGER
CREATE TRIGGER trg_before_insert BEFORE INSERT ON employees FOR EACH ROW SET NEW.created_at = NOW();

CREATE TRIGGER trg_after_update
AFTER UPDATE ON employees
FOR EACH ROW
BEGIN
    INSERT INTO audit_log (table_name, action, old_value, new_value, changed_at)
    VALUES ('employees', 'UPDATE', OLD.salary, NEW.salary, NOW());
END;

CREATE TRIGGER trg_before_delete
BEFORE DELETE ON employees
FOR EACH ROW
BEGIN
    INSERT INTO deleted_employees SELECT * FROM employees WHERE id = OLD.id;
END;

-- 5.4 CREATE EVENT
CREATE EVENT evt_daily_cleanup
ON SCHEDULE EVERY 1 DAY
STARTS '2024-01-01 00:00:00'
DO DELETE FROM logs WHERE created_at < DATE_SUB(NOW(), INTERVAL 30 DAY);

CREATE EVENT evt_weekly_report
ON SCHEDULE EVERY 1 WEEK
STARTS '2024-01-07 08:00:00'
DO CALL sp_generate_weekly_report();

-- 5.5 CALL 문 (프로시저 호출)
CALL sp_test();
CALL sp_get_employee(1);
CALL sp_update_salary(1, 55000.00, @result);

-- 5.6 DROP Routines
DROP PROCEDURE IF EXISTS sp_test;
DROP FUNCTION IF EXISTS fn_test;
DROP TRIGGER IF EXISTS trg_before_insert;
DROP EVENT IF EXISTS evt_daily_cleanup;


-- ============================================================
-- 6. SET 문
-- ============================================================

SET @var = 1;
SET @name = 'John';
SET @total = (SELECT SUM(salary) FROM employees);
SET NAMES utf8mb4;
SET CHARACTER SET utf8mb4;
SET SESSION sql_mode = 'STRICT_TRANS_TABLES';
SET GLOBAL max_connections = 200;
SET @@session.sql_mode = 'STRICT_TRANS_TABLES';
SET autocommit = 0;
SET autocommit = 1;
SET FOREIGN_KEY_CHECKS = 0;
SET FOREIGN_KEY_CHECKS = 1;


-- ============================================================
-- 7. SHOW 문
-- ============================================================

SHOW DATABASES;
SHOW TABLES;
SHOW TABLES FROM mydb;
SHOW TABLES LIKE 'emp%';
SHOW COLUMNS FROM employees;
SHOW COLUMNS FROM employees LIKE 'name';
SHOW CREATE TABLE employees;
SHOW CREATE DATABASE mydb;
SHOW CREATE VIEW v_active_employees;
SHOW CREATE PROCEDURE sp_test;
SHOW CREATE FUNCTION fn_test;
SHOW INDEX FROM employees;
SHOW INDEXES FROM employees;
SHOW KEYS FROM employees;
SHOW STATUS;
SHOW STATUS LIKE 'Conn%';
SHOW VARIABLES;
SHOW VARIABLES LIKE 'max_connections';
SHOW GLOBAL VARIABLES;
SHOW SESSION VARIABLES;
SHOW PROCESSLIST;
SHOW FULL PROCESSLIST;
SHOW GRANTS;
SHOW GRANTS FOR 'user'@'localhost';
SHOW ENGINES;
SHOW WARNINGS;
SHOW ERRORS;
SHOW PRIVILEGES;
SHOW CHARACTER SET;
SHOW COLLATION;
SHOW TABLE STATUS;
SHOW TABLE STATUS FROM mydb;


-- ============================================================
-- 8. USE 문 (유틸리티)
-- ============================================================

USE mydb;
USE testdb;


-- ============================================================
-- 9. DESCRIBE / EXPLAIN 문
-- ============================================================

DESCRIBE employees;
DESC employees;
EXPLAIN SELECT * FROM employees WHERE dept_id = 10;
EXPLAIN FORMAT=JSON SELECT * FROM employees WHERE id = 1;


-- ============================================================
-- 10. 기타 유용한 문장
-- ============================================================

-- 10.1 PREPARE / EXECUTE (Prepared Statements)
PREPARE stmt FROM 'SELECT * FROM employees WHERE id = ?';
EXECUTE stmt USING @emp_id;
DEALLOCATE PREPARE stmt;

-- 10.2 LOAD DATA
LOAD DATA INFILE '/tmp/data.csv' INTO TABLE employees FIELDS TERMINATED BY ',' LINES TERMINATED BY '\n';

-- 10.3 HANDLER
HANDLER employees OPEN;
HANDLER employees READ FIRST;
HANDLER employees READ NEXT;
HANDLER employees CLOSE;

-- 10.4 DO 문
DO SLEEP(1);
DO RELEASE_LOCK('my_lock');

-- 10.5 FLUSH 문
FLUSH PRIVILEGES;
FLUSH TABLES;
FLUSH LOGS;

-- 10.6 KILL 문
KILL 12345;
KILL QUERY 12345;

-- 10.7 OPTIMIZE / ANALYZE / CHECK / REPAIR
OPTIMIZE TABLE employees;
ANALYZE TABLE employees;
CHECK TABLE employees;
REPAIR TABLE employees;


-- ============================================================
-- 11. 복합 쿼리 테스트 (Multi-Statement)
-- ============================================================

-- 아래 문장들을 함께 입력하여 복합 쿼리 파싱 테스트
SELECT * FROM employees;
INSERT INTO logs (message) VALUES ('Test');
UPDATE employees SET status = 'active';
DELETE FROM temp_data;
GRANT SELECT ON db.* TO 'user'@'localhost';
CALL sp_test();


-- ============================================================
-- 12. 복잡한 SELECT 문
-- ============================================================

-- WITH 절 (CTE)
WITH dept_stats AS (
    SELECT dept_id, COUNT(*) as emp_count, AVG(salary) as avg_salary
    FROM employees
    GROUP BY dept_id
)
SELECT d.dept_name, ds.emp_count, ds.avg_salary
FROM departments d
JOIN dept_stats ds ON d.id = ds.dept_id;

-- UNION
SELECT id, name FROM employees WHERE dept_id = 10
UNION
SELECT id, name FROM contractors WHERE dept_id = 10;

SELECT id, name FROM employees
UNION ALL
SELECT id, name FROM contractors;

-- 복잡한 JOIN
SELECT
    e.id,
    e.name,
    e.salary,
    d.dept_name,
    m.name AS manager_name
FROM employees e
LEFT JOIN departments d ON e.dept_id = d.id
LEFT JOIN employees m ON e.manager_id = m.id
WHERE e.salary > (SELECT AVG(salary) FROM employees)
ORDER BY e.salary DESC
LIMIT 10 OFFSET 0;

-- WINDOW 함수
SELECT
    id,
    name,
    salary,
    dept_id,
    ROW_NUMBER() OVER (PARTITION BY dept_id ORDER BY salary DESC) as rank_in_dept,
    SUM(salary) OVER (PARTITION BY dept_id) as dept_total,
    AVG(salary) OVER () as company_avg
FROM employees;

-- CASE 문
SELECT
    id,
    name,
    salary,
    CASE
        WHEN salary >= 100000 THEN 'Executive'
        WHEN salary >= 50000 THEN 'Senior'
        WHEN salary >= 30000 THEN 'Mid-Level'
        ELSE 'Junior'
    END AS salary_grade
FROM employees;


-- ============================================================
-- 13. User/Account 관리
-- ============================================================

-- CREATE USER
CREATE USER 'newuser'@'localhost' IDENTIFIED BY 'password123';
CREATE USER IF NOT EXISTS 'testuser'@'%' IDENTIFIED BY 'testpass';
CREATE USER 'admin'@'localhost' IDENTIFIED BY 'adminpass' WITH MAX_QUERIES_PER_HOUR 100;

-- ALTER USER
ALTER USER 'user'@'localhost' IDENTIFIED BY 'newpassword';
ALTER USER 'user'@'localhost' PASSWORD EXPIRE;
ALTER USER 'user'@'localhost' ACCOUNT LOCK;
ALTER USER 'user'@'localhost' ACCOUNT UNLOCK;

-- DROP USER
DROP USER 'olduser'@'localhost';
DROP USER IF EXISTS 'tempuser'@'%';

-- RENAME USER
RENAME USER 'old_name'@'localhost' TO 'new_name'@'localhost';

-- SET PASSWORD
SET PASSWORD FOR 'user'@'localhost' = 'newpassword';

-- SET ROLE
SET ROLE ALL;
SET ROLE NONE;
SET ROLE DEFAULT;
SET ROLE 'admin_role';


-- ============================================================
-- 14. XA 트랜잭션 (분산 트랜잭션)
-- ============================================================

XA START 'xid1';
XA END 'xid1';
XA PREPARE 'xid1';
XA COMMIT 'xid1';
XA ROLLBACK 'xid1';
XA RECOVER;


-- ============================================================
-- 15. SIGNAL / RESIGNAL (에러 처리)
-- ============================================================

SIGNAL SQLSTATE '45000' SET MESSAGE_TEXT = 'Custom error message';
RESIGNAL SET MESSAGE_TEXT = 'Modified error message';


-- ============================================================
-- 테스트 완료
-- ============================================================
