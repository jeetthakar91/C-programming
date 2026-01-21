USE JEET

CREATE TABLE BRANCH(
BNAME VARCHAR(100),
CITY VARCHAR(100)
);

INSERT INTO BRANCH
VALUES('CNAME','CITY'),
('VRCE','NAGPUR'),
('AJNI','NAGPUR'),
('KAROLNAGH','DELHI'),
('CHANDI','DELHI'),
('DHARMPETH','NAGPUR'),
('M.G.ROAD','BANGLORE'),
('ANDHERI','BOMBAY'),
('VIRAR','BOMBAY'),
('NEHRU PLACE','DELHI'),
('POWAI','BOMBAY')

SELECT * FROM BRANCH

CREATE TABLE CUSTOMERS(
CNAME VARCHAR(100),
CITY VARCHAR(100)
);

INSERT INTO CUSTOMERS
VALUES('CNAME','CITY'),
('ANIL','KOKATA'),
('SUNIL','DELHI'),
('MEHUL','BARODA'),
('MANDAR','PATNA'),
('MADHURI','NAGPUR'),
('PRMOD','NAGPUR'),
('SANDIP','SURAT'),
('SHIVANI','BOMBAY'),
('KRANTI','BOMBAY'),
('NAREN','BOMBAY')


--3. Retrieve all data from table CUSTOMERS.  
SELECT * FROM CUSTOMERS
 -- 1. Retrieve all data from table DEPOSIT. 
SELECT * FROM DEPOSIT
--2. Retrieve all data from table BORROW.  
SELECT * FROM BORROW
--4. Display Account No, Customer Name & Amount from DEPOSIT table
SELECT ACTNO,CNAME,AMOUNT FROM DEPOSIT
--5. Display Loan No, Amount from BORROW table. 
SELECT  LOANNO,AMOUNT FROM BORROW
--6. Display loan details of all customers who belongs to ‘ANDHERI’ branch.
SELECT * FROM BORROW
WHERE BNAME='ANDHERI'
--7. Give account no and amount of depositor, whose account no is equals to 106.  
SELECT ACTNO,AMOUNT FROM DEPOSIT
WHERE  ACTNO=106
--8. Give name of borrowers having amount greater than 5000.  
SELECT CNAME FROM BORROW
WHERE AMOUNT>5000
--9. Give name of customers who opened account after date '01-DEC-96'.  
SELECT CNAME FROM DEPOSIT
WHERE ADATE = 

--10. Display name of customers whose account no is less than 105. 
SELECT CNAME,ACTNO FROM DEPOSIT
WHERE ACTNO<105
--11. Display name of customer who belongs to either ‘NAGPUR’ Or ‘DELHI
SELECT CNAME FROM CUSTOMERS
WHERE CITY='NAGPUR' OR CITY = 'DELHI';
--12. Display name of customers with branch whose amount is greater than 4000 and account no is less than 
SELECT CNAME,BNAME FROM DEPOSIT
WHERE AMOUNT>400 AND ACTNO<105
--13. Find all borrowers whose amount is greater than equals to 3000 & less than equals to 8000. 
 SELECT CNAME,AMOUNT FROM BORROW
 WHERE AMOUNT>=3000 AND AMOUNT<=8000;
 --14. Find all depositors who do not belongs to ‘ANDHERI’ branch.
 SELECT CNAME FROM BORROW
 WHERE CNAME!='ANDHERI'
 --15. Display the name of borrowers whose amount is NULL. 
 SELECT CNAME FROM BORROW
 WHERE AMOUNT=0
-- 16. Display Account No, Customer Name & Amount of such customers who belongs to ‘AJNI’, ‘KAROLBAGH’  
SELECT ACTNO,CNAME,AMOUNT FROM DEPOSIT
WHERE BNAME IN ('AJNI','KAROLBAGH','M.G.ROAD') AND ACTNO<104
--17. Display all the details of first five customers. 
SELECT TOP 5 * FROM CUSTOMERS
--18. Display all the details of first three depositors whose amount is greater than 1000. 
SELECT TOP 3 * FROM DEPOSIT
WHERE AMOUNT>1000
--19. Display Loan No, Customer Name of first five borrowers whose branch name does not belongs to 
SELECT TOP 5 * FROM DEPOSIT
WHERE BNAME!='ANDHERI'
--20. Retrieve all unique cities using DISTINCT. (Use Customers Table) 
SELECT DISTINCT CITY FROM CUSTOMERS
--22. Retrieve all the records of customer table as per their city name in ascending order. 
SELECT * FROM CUSTOMERS
 ORDER BY CITY ASC
 --23. Retrieve all the records of deposit table as per their amount column in descending order.
  SELECT * FROM DEPOSIT
  ORDER BY AMOUNT DESC
--24. Retrieve all the details of customers in descending order of their city name. 
SELECT * FROM DEPOSIT
ORDER BY BNAME DESC;
