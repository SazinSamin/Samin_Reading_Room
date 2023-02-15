-- see the amount of countries in the regions using group by
SELECT region_id, COUNT(region_id) FROM countries GROUP BY region_id;
