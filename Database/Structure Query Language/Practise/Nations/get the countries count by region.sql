-- get the countries count by region
SELECT regions.name, COUNT(countries.region_id) 
FROM countries JOIN regions ON countries.region_id = regions.region_id 
GROUP BY countries.region_id; 
