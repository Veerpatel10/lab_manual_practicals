-- SELECT * FROM practical1 . studentmarks1
-- WHERE Stdname = 'veer' OR Stdname = 'govind';

-- SELECT Stdname,sum(sub1)'total_marks1',sum(sub2)'total_marks2',sum(sub3)'total_marks3' FROM practical1 . studentmarks1
-- GROUP BY Stdname;
-- 

SELECT Stdname,sum(sub1)'total_marks1',sum(sub2)'total_marks2',sum(sub3)'total_marks3' FROM practical1 . studentmarks1
GROUP BY Stdname
HAVING Stdname = 'VEER';