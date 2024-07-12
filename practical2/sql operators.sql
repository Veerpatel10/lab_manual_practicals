-- Arithmeitc operators
-- SELECT eid , ename , salary "current salary",(salary + (salary*0.1))"new salary" FROM  practical2.employee;

-- Relational opertors
-- SELECT * FROM practical2.employee
-- WHERE salary >19000;

-- Logical opreators
-- SELECT * FROM practical2.employee
-- WHERE salary >19000 AND eid = 'E03';
 
-- SELECT * FROM practical2.employee
-- WHERE salary >19000 OR eid = 'E01';

-- SELECT * FROM practical2.employee
-- WHERE NOT eid = 'E03';

-- Range searching operators
-- SELECT * FROM practical2.employee
-- WHERE salary BETWEEN 12000 AND 18000;


-- SELECT * FROM practical2.employee
-- WHERE salary  NOT BETWEEN 12000 AND 18000;

-- Set searching operators

-- SELECT * FROM practical2.employee
-- WHERE city IN ('vadodara','ahmedabad','surat');

-- SELECT * FROM practical2.employee
-- WHERE city  NOT IN ('vadodara','ahmedabad','surat');

-- Character oprators

-- LIKE Oprator
-- SELECT * FROM practical2.employee
-- WHERE city LIKE 'A%';

-- SELECT * FROM practical2.employee
-- WHERE ename LIKE '_A%';

-- SELECT * FROM practical2.employee
-- WHERE city LIKE '_____';

-- || Operator
-- SELECT ename||', '||city "name,city" FROM practical2.employee;