-- this query give repeated result
SELECT DISTINCT name,  (gdp / population) AS GDP_per_Capita FROM country_stats
JOIN countries ON countries.country_id = country_stats.country_id ORDER BY GDP_per_Capita DESC
LIMIT 200;
