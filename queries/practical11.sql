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


-- select ano , balance , bname from practical2.account acc 
-- where balance IN(
-- 					select max(balance) from practical2.account
--                     where bname = acc.bname
-- 				);
