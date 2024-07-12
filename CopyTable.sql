CREATE TABLE practical1.copytable
AS SELECT Stdname,sub1
FROM studentmarks
WHERE sub1<=92;