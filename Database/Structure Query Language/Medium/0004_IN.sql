-- specify multiple value in WHERE, replecement of multiple "or".
SELECT * FROM countries WHERE name IN ('Bangladesh', 'India', 'Pakistan');


SELECT * FROM countries WHERE name NOT IN ('Bangladesh', 'India', 'Pakistan');
