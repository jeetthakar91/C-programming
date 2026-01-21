SELECT * FROM STUDENT
--1. Add two more columns City VARCHAR (20) NULL and Backlog INT NOT NULL.
ALTER TABLE STUDENT
ADD  CITY VARCHAR(50) NULL, BACKLOG INT NOT NULL;
--2. Change the size of NAME column of student from VARCHAR (25) to VARCHAR (35).
ALTER TABLE STUDENT
ALTER COLUMN NAME VARCHAR(35)
--3. Change the data type DECIMAL to INT in CPI Column.
ALTER TABLE STUDENT
ALTER COLUMN CPI INT
--4. Rename Column Enrollment No to ENO. 
EXEC SP_RENAME 'STUDENT.ENROLLMENT_NUMBER','ENO';
--5. Delete Column City from the STUDENT table. 
ALTER TABLE STUDENT
DROP COLUMN CITY 
--6. Change name of table STUDENT to STUDENT_MASTER.
 EXEC SP_RENAME 'STUDENT','STUDENT_MASTER'
-- 7. Remove Column Backlog from the table.
ALTER TABLE STUDENT_MASTER
DROP COLUMN BACKLOG
--8. Change Constraint of Name Column from NULL to NOT NULL. 
ALTER TABLE STUDENT_MASTER
ALTER COLUMN NAME VARCHAR(35) NOT NULL;
--9. Rename Column Birthdate to BDate. --
EXEC SP_RENAME 'STUDENT_MASTER.BIRTHDATE','BDATE';
--10. Change the datatype of ENO Column from VARCHAR (20) to VARCHAR (12)
ALTER TABLE STUDENT_MASTER
ALTER COLUMN ENO VARCHAR(12)


                                                    -- GITHUB---
                                                    
CREATE TABLE Employee (
    EmpId INT,
    EmpName VARCHAR(30),
    Salary DECIMAL(10,2),
    JoinDate DATETIME
);

SELECT * FROM Employee
-- Part A – ALTER TABLE (ADD Columns):

-- Add a column Department of type VARCHAR(20) to the Employee table.
ALTER TABLE EMPLOYEE
ADD DEPARTMENT VARCHAR(20);
-- Add a column Email of type VARCHAR(40).
ALTER TABLE EMPLOYEE
ADD E_MAIL VARCHAR(40);
-- Add two columns City VARCHAR(20) and State VARCHAR(20) in a single query.
ALTER TABLE EMPLOYEE
ADD CITY VARCHAR(20);

ALTER TABLE EMPLOYEE
ADD  STATE  VARCHAR(20);

-- Add a column Experience of type INT.
ALTER TABLE EMPLOYEE
ADD EXEPRIENCE INT;
-- Add a column Gender of type VARCHAR(10).
ALTER TABLE EMPLOYEE
ADD GENDER VARCHAR(10);

-- Part B – ALTER TABLE (MODIFY / CHANGE Data Type):

-- Change the datatype of EmpName from VARCHAR(30) to VARCHAR(50).
ALTER TABLE EMPLOYEE
ALTER COLUMN EMPNAME VARCHAR (50);
-- Change the datatype of Salary from DECIMAL(10,2) to DECIMAL(12,2).
ALTER TABLE EMPLOYEE
ALTER COLUMN SALARY DECIMAL (12,2);
-- Change the datatype of JoinDate from DATETIME to DATE.
ALTER TABLE EMPLOYEE
ALTER COLUMN JOINDATE DATE;
-- Change the datatype of Department from VARCHAR(20) to VARCHAR(30).
ALTER TABLE EMPLOYEE
ALTER COLUMN DEPARTMENT VARCHAR (30);
-- Change the datatype of Email from VARCHAR(40) to VARCHAR(60).
ALTER TABLE EMPLOYEE
ALTER COLUMN E_MAIL VARCHAR (60);


-- Part C – ALTER TABLE (RENAME Column):

-- Rename column EmpId to EmployeeId.
EXEC SP_RENAME 'EMPLOYEE.EMPID','EMPLOYEE_ID';
-- Rename column EmpName to EmployeeName.
EXEC SP_RENAME 'EMPLOYEE.EMPNAME','EMPLOYEE_NAME';
-- Rename column JoinDate to JoiningDate.
EXEC SP_RENAME 'EMPLOYEE.JOINDATE','JOINING_DATE';
-- Rename column Salary to MonthlySalary.
EXEC SP_RENAME 'EMPLOYEE.SALARY','MONTHLY_SALARY';
-- Rename column Experience to TotalExperience.
EXEC SP_RENAME 'EMPLOYEE.EXEPRIENCE','TOTAL_EXEPRIENCE';