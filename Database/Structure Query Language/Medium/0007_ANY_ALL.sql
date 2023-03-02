SELECT name FROM countries WHERE region_id = ANY(SELECT region_id FROM regions WHERE regions.region_id = 2);
