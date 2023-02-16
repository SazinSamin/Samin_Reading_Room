-- https://www.geeksforgeeks.org/sql-views/

-- VIEW used for creating a seperate table for hiding complexity and unnessary information
CREATE VIEW Country AS SELECT countries.name FROM countries;

CREATE VIEW Country_on_region AS SELECT countries.name, regions.name AS region FROM countries JOIN regions ON countries.region_id = regions.region_id
ORDER BY countries.name;
