-- https://www.w3schools.com/sql/sql_having.asp
-- in case of aggregate function we can't use WHERE, we have to use HAVING.
SELECT region_id, COUNT(region_id) FROM countries GROUP BY region_id HAVING COUNT(region_id) > 5; 
