-- https://www.w3schools.com/sql/sql_case.asp


SELECT name, 
CASE
	WHEN area >= 500000 THEN 'Large'
    WHEN area > 150000 AND area < 500000 THEN 'Medium'
    ELSE 'Small'
END
FROM countries LIMIT 200;
