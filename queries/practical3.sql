-- GRANT 	ALL
-- ON		veer
-- TO		'user1'@'localhost';

REVOKE 	ALL
ON		veer
FROM	'user1'@'localhost';

-- COMMIT;
-- SAVEPOINT majama;
-- ROLLBACK;
-- ROLLBACK TO SAVEPOINT majama;
-- flush privileges;