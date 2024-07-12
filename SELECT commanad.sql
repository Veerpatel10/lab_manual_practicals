-- SELECT * FROM studentmarks; 
-- SELECT  Stdname,Sub1 FROM studentmarks;


-- SELECT * FROM studentmarks
-- WHERE Stdname = 'veer';


-- SELECT Stdname FROM studentmarks
-- WHERE (Sub1>=95)&&(Sub2>90)&&(Sub3>80);


-- SELECT DISTINCT Sub1 FROM studentmarks;


-- SELECT * FROM studentmarks
-- ORDER BY Stdname;


-- SELECT Stdname,sum(Sub1)'total_Sub1',sum(Sub2)'total_Sub2',sum(Sub3)'total_Sum3' FROM studentmarks
-- GROUP BY Stdname;


-- SELECT Stdname,sum(Sub1)'total_Sub1',sum(Sub2)'total_Sub2',sum(Sub3)'total_Sum3' FROM studentmarks
-- GROUP BY Stdname
-- HAVING Stdname = 'maanan'; 


-- SELECT Stdname,sum(Sub1)'total_Sub1',sum(Sub2)'total_Sub2',sum(Sub3)'total_Sum3' FROM studentmarks
-- GROUP BY Stdname
-- HAVING sum(Sub1)>170; 