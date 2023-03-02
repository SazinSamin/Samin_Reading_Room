-- https://www.w3schools.com/sql/func_mysql_if.asp

-- return value according to the condition
SELECT name, IF(area > 150000, 'Large', 'Small') AS Area FROM countries; 
