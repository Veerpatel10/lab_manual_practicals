-- SELECT * FROM labmanual.stdinfo; 
-- SELECT  name , semester FROM  labmanual.stdinfo;


-- SELECT * FROM  labmanual.stdinfo
-- WHERE name = 'veer';


-- SELECT Stdname FROM  labmanual.stdinfo
-- WHERE (Sub1>=95)&&(Sub2>90)&&(Sub3>80);


-- SELECT DISTINCT semester FROM  labmanual.stdinfo;


-- SELECT * FROM  labmanual.stdinfo
-- ORDER BY enroll_no;


-- SELECT Stdname,sum(Sub1)'total_Sub1',sum(Sub2)'total_Sub2',sum(Sub3)'total_Sum3' FROM  labmanual.stdinfo
-- GROUP BY Stdname;


-- SELECT Stdname,sum(Sub1)'total_Sub1',sum(Sub2)'total_Sub2',sum(Sub3)'total_Sum3' FROM  labmanual.stdinfo
-- GROUP BY Stdname
-- HAVING Stdname = 'maanan'; 


-- SELECT Stdname,sum(Sub1)'total_Sub1',sum(Sub2)'total_Sub2',sum(Sub3)'total_Sum3' FROM  labmanual.stdinfo
-- GROUP BY Stdname
-- HAVING sum(Sub1)>170; 