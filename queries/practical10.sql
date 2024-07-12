-- SELECT * FROM practical2.customer,practical2.employee1;

-- SELECT Emp.eid, Emp.name'EmpName', Mngr.name'MngrName' FROM practical2.employee2 Emp, practical2.employee2 Mngr
-- WHERE Emp.mngr_ig = Mngr.eid;

-- CREATE TABLE practical2.college
-- (
-- 	name 		char(10),
--     id 			varchar(5),
--     department	char(10)
-- );
-- 
-- 
-- CREATE TABLE practical2.Hostel
-- (
-- 	name 		char(10),
--     hostel_name varchar(5),
--     room_no		char(10)
-- );


-- insert into practical2.college
-- values('Manisha','S01','computer');
-- 
-- insert into practical2.college
-- values('Anisha','S02','computer');
-- 
-- insert into practical2.college
-- values('Nisha','S03','IT');
-- 
-- insert into practical2.Hostel
-- values('Anisha','Kaveri Hostel','K01');
-- 
-- insert into practical2.Hostel
-- values('Nisha','Godavari Hostel','G07');
-- 
-- insert into practical2.Hostel
-- values('Isha','Kaveri Hostel','K02');


-- SELECT id ,College.name 'NAME',department, hostel_name,room_no
-- FROM college,hostel
-- WHERE college.name = hostel.name;
-- 
-- alter table practical2.Hostel
-- modify hostel_name varchar(20);