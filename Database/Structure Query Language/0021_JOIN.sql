-- Join two table by condition
SELECT * FROM countries JOIN regions ON countries.region_id = regions.region_id;

-- inner join show only those records are matched in both right and left table
SELECT * FROM Student INNER JOIN result ON Student.Roll = result.Roll;

-- left join show all record from left table and only matched records from the right table. 
-- (0 records show from the right if there is no match)
SELECT * FROM Student LEFT JOIN result ON Student.Roll = result.Roll;

-- right join show all record from right table and only matched records from the left table.
-- (0 records show from the left if there is no match)
SELECT * FROM Student RIGHT JOIN result ON Student.Roll = result.Roll;
