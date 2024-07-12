-- Aggregate function

-- SELECT MAX(salary)"max salary" FROM practical2.employee;

-- SELECT MIN(salary)"MIN salary" FROM practical2.employee;

-- SELECT SUM(salary),SUM(distinct salary) FROM practical2.employee;

-- SELECT AVG(salary)"AVG salary" FROM practical2.employee;

-- SELECT COUNT(*) FROM practical2.employee;

-- SELECT COUNT(*)"C1" , COUNT(city)"C2" , COUNT(distinct city)"C3" FROM practical2.employee;




-- Numeric Functions

-- SELECT ABS(-25) FROM DUAL;

-- SELECT SQRT(25) FROM DUAL;

-- SELECT POWER(2,2) FROM DUAL;

-- SELECT MOD(5,3), MOD(2,4) FROM DUAL;

-- SELECT ceil(25.2),CEIL(25.7),CEIL(-25.2) FROM DUAL;

-- SELECT FLOOR(25.2),FLOOR(25.7),FLOOR(-25.2) FROM DUAL;

-- SELECT round(2134.567,2),round(1234.56789),round(12345.6789,-3),round(157.732,-2) FROM DUAL;

-- SELECT TRUNCATE(12345.6789,3),truncate(12345.6789,0),TRUNCATE(12345.6789,-2) FROM DUAL;

-- SELECT exp(2) FROM DUAL;

-- SELECT LN(1) FROM DUAL;

-- SELECT LOG(25,25) FROM DUAL;

-- SELECT SIN(90),COS(90),TAN(90) FROM DUAL;

-- SELECT COSH(90),SINH(90),TANH(90) FROM DUAL;

-- SELECT sign(-25),sign(0),sign(25) FROM DUAL;




-- Character functions

-- SELECT  ename , length(ename)'lenght of character',CITY , length(CITY)'lenght of character' FROM practical2.employee;

-- SELECT lower('HELLO hOw yOu dOiNg...?') FROM DUAL;

-- SELECT UPPER('HELLO hOw yOu dOiNg...?') FROM DUAL;

-- SELECT INITCAP('HELLO hOw yOu dOiNg...?') FROM DUAL;

-- SELECT substr('HELLO hOw yOu dOiNg...?',7,3) FROM DUAL;

-- SELECT lPAd('MAJAMA',10,'*') FROM DUAL;

-- SELECT rpad('MAJAMA',10,'****') FROM DUAL;

-- SELECT ltrim('Sumita','uSae') FROM DUAL;

-- SELECT Rtrim('Sumita','tab') FROM DUAL;

-- SELECT TRANSALTE('ABC12EFG3','1234','XYZW') FROM DUAL;

-- SELECT replace('MAJAMA_123456','123456','SHANTI') FROM DUAL;

-- SELECT ascii('A') FROM DUAL;




-- Conversion functions

-- SELECT To_number('12345.6789') FROM DUAL;

-- SELECT To_Char(12345.6789,'09,99,999') FROM DUAL;

-- SELECT To_Char(sysdate(),'dd month , yyyy') FROM DUAL;

-- SELECT To_DATE('31 december , 2012','DD Month , YYYY') FROM DUAL;




-- Date functions

-- SELECT sysdate()'present date' , adddate(sysdate(),3) FROM DUAL;

-- SELECT sysdate()'present date' , add_months(sysdate(),3) FROM DUAL;

-- SELECT Months_Between(sysdate(),'31-DEC-2023') FROM DUAL;

-- SELECT last_day(sysdate()) FROM DUAL;

-- SELECT Next_day(sysdate(),'sunday') FROM DUAL;

-- SELECT round(sysdate(),'DD-MON-YYYY HH:MI:SS PM') FROM DUAL;

-- SELECT truncate(sysdate(),'DD-MON-YYYY HH:MI:SS PM') FROM DUAL;

-- SELECT New_time(sysdate(),'DD-MON-YYYY HH:MI:SS PM','GMT','PST') FROM DUAL;




-- Miscellaneous Functions

-- SELECT UID() FROM DUAL;

-- SELECT USER() FROM DUAL;

-- SELECT greatest(1,2,3,4,5,6) FROM DUAL;

-- SELECT least(1,2,3,4,5,6) FROM DUAL;

-- SELECT decode('MAJAMA',2>1,'MAJAMA2') FROM DUAL;

-- SELECT NVI(5,10) FROM DUAL;

-- SELECT VSIZE(25) FROM DUAL;