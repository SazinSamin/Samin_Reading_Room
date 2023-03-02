-- https://www.w3schools.com/sql/sql_between.asp

-- select anything between any range
-- BETWEEN operator is inclusive means it will include the begin and end value also.
SELECT name FROM countries WHERE area BETWEEN 140000 AND 150000; 


SELECT name FROM countries WHERE area NOT BETWEEN 140000 AND 150000; 
