-- carefull VIEW change the original as data -> https://stackoverflow.com/a/2648600/10928027


-- create VIEW from single table.
CREATE VIEW Country AS SELECT countries.name FROM countries;
-- create view from multiple tables.
CREATE VIEW Country_on_region AS SELECT countries.name, regions.name AS region FROM countries JOIN regions ON countries.region_id = regions.region_id
ORDER BY countries.name;

-- update VIEW
UPDATE Student_name
SET Name='Adib'
WHERE Name='Abid';


-- I can't able to insert data in a VIEW, as there has some condition to meet before change or insertion in VIEW
-- https://www.geeksforgeeks.org/sql-views/

-- delete a VIEW
DROP VIEW Student_name;
