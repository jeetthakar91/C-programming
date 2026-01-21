SELECT * FROM  DEPOSIT
SELECT* FROM BORROW
SELECT * FROM BRANCH
SELECT * FROM CUSTOMERS

--1. Update deposit amount of all customers from 3000 to 5000. 
UPDATE DEPOSIT
SET AMOUNT=5000
--2. Change branch name of ANIL from VRCE to C.G. ROAD. (Use Borrow Table)  
UPDATE BORROW
SET BNAME='C.G.ROAD'
WHERE BNAME='VRCE'
--3. Update Account No of SANDIP to 111 & Amount to 5000. 
UPDATE DEPOSIT
SET ACTNO=111
WHERE ACTNO='106'
--4. Give 10% Increment in Loan Amount. 
UPDATE DEPOSIT
SET AMOUNT=AMOUNT*0.10
--5. Update deposit amount of all depositors to 5000 whose account no between 103 & 107. 
UPDATE DEPOSIT
SET AMOUNT=5000
WHERE ACTNO BETWEEN 103 AND 107
--6. Update amount of loan no 321 to NULL. 
UPDATE  BORROW
SET LOANNO=NULL
WHERE LOANNO=321
--7. Change Loan number from 201 to 401 & also change branch name from VRCE to AJNI
UPDATE BORROW
SET LOANNO=401
WHERE LOANNO=201

UPDATE BORROW
SET BNAME='AJNI'
WHERE BNAME='VRCE'

--8. Modify customer name ANIL to ANIL JAIN. 

UPDATE CUSTOMERS
SET CNAME='ANIL JAIN'
WHERE CNAME='ANIL'

--9. Give an increment of ₹1000 in the Loan Amount. 

UPDATE BORROW
SET AMOUNT=1000

--10. Update the customer’s name from MINU to SINU and change the amount to ₹10,000. 

UPDATE DEPOSIT
SET CNAME='SINU'
WHERE CNAME='MINU'

UPDATE DEPOSIT
SET AMOUNT='10000'
WHERE CNAME='SINU'

--11. Change Name to Ramesh, Branch Name to VRCE & Amount to 5500, Whose Account Number is 102. 

UPDATE DEPOSIT
SET CNAME='RAMESH'
WHERE ACTNO='102'

UPDATE DEPOSIT
SET BNAME='VRCE'
WHERE ACTNO='102'

UPDATE DEPOSIT
SET AMOUNT='5500'
WHERE ACTNO='102'

--12. Make Branch Name & Amount NULL, Whose Loan Number is 481 & Name is KRANTI. 

UPDATE BORROW
SET BNAME=NULL
WHERE LOANNO=481

UPDATE BORROW
SET AMOUNT=NULL
WHERE LOANNO=481

--13. Give 5% Increment in Loan Amount whose loan no less then 321.

UPDATE BORROW
SET AMOUNT=AMOUNT*0.5
WHERE LOANNO<321

--14. Update the customer city from BOMBAY to MUMBAI. 

UPDATE CUSTOMERS
SET CITY='MUMBAI'
WHERE CITY='BOMBAY'

--15. Update the branch name to VRCE where the Loan number is 375. 

UPDATE BORROW
SET BNAME='VRCE'
WHERE LOANNO = 375

SELECT * FROM DEPOSIT

 