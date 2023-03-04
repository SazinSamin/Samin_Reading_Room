-- IFNULL function can give alternative value if any column value is null.
SELECT population / IFNULL(gdp, 0) FROM country_stats; 

-- COALESCE do the same
SELECT  population / COALESCE(gdp, 0) FROM country_stats;
