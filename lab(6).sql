USE JEET

SELECT * FROM DEPOSIT
SELECT * FROM BRANCH
SELECT * FROM BORROW
SELECT * FROM CUSTOMERS

--1. Delete records of Customer table that belongs to BOMBAY City. 
DELETE FROM BRANCH
WHERE CITY='BOMBAY'
--2. Delete all account numbers whose amount less than equals to 1000. 
DELETE FROM DEPOSIT
WHERE AMOUNT<=1000
--3. Delete borrowers whose branch name is ‘AJNI’.
DELETE FROM BORROW
WHERE BNAME='AJNI'
--4. Delete all the borrowers whose loan number between 201 to 210. 
DELETE FROM BORROW
WHERE LOANNO BETWEEN 201 AND 210
--5. Delete customers who opened account after date '01-DEC-96'. (Use DEPOSIT table)
DELETE FROM DEPOSIT
WHERE ADATE>1996-12-01
--6. Delete all the records of Customers table. (Use TRUNCATE) 
TRUNCATE TABLE CUSTOMERS
--7. Remove all customers whose name is ANIL & Account Number is 101. 
DELETE FROM DEPOSIT
WHERE CNAME='ANIL' AND ACTNO=101
--8. Delete all the depositors who do not belongs to ‘ANDHERI’ branch. 
DELETE FROM BRANCH
WHERE BNAME!='andheri'
--9. Delete loan details of customers whose amount is less than 3000. 
DELETE FROM 
--10. Delete customers who opened account before date '01-JAN-96'. (Use DEPOSIT table) 