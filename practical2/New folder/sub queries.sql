-- create table practical2.account_holder
-- (
-- 	   cid		varchar(3),
--     ano		varchar(3)
-- );

-- insert into practical2.account_holder
-- values('C01','A01');
-- 
-- insert into practical2.account_holder
-- values('C02','A02');
-- 
-- insert into practical2.account_holder
-- values('C03','A03');
-- 
-- insert into practical2.account_holder
-- values('C04','A04');
-- 
-- insert into practical2.account_holder
-- values('C05','A05');
-- 
-- insert into practical2.account_holder
-- values('C02','A04');


-- create table practical2.account
-- (
-- 	   ano		varchar(3),
--        balance	int(10),
--        bname	char(10)
-- );


-- insert into practical2.account
-- values('A01','5000','vvn');
-- 
-- insert into practical2.account
-- values('A02','6000','ksad');
-- 
-- insert into practical2.account
-- values('A03','7000','anand');
-- 
-- insert into practical2.account
-- values('A04','8000','ksad');
-- 
-- insert into practical2.account
-- values('A05','6000','vvn');


-- select balance from practical2.account
-- where ano IN ( 
-- 					select ano from account_holder
--                     where cid = 'C01'
-- 			  );



-- select balance from practical2.account
-- where ano IN (
-- 				select ano from practical2.account_holder
--                 where cid IN (
-- 								select cid from practical2.customer
--                                 where name = 'jiya'
-- 							 )
-- 			 );





-- correlated sub-queries







-- 
-- select ano , balance , banme from practical2.account  
-- where balance IN(
-- 					select max(balance) from practical2.account
--                     where bname = bname
-- 				);
-- 
-- 
-- cross join
-- select * from practical2.customer,practical2.account;
