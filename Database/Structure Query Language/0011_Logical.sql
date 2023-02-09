SELECT * FROM country_stats WHERE population > 1000000 AND gdp < 100000000;

SELECT * FROM country_stats WHERE population > 1000000 OR gdp < 100000000;

-- nested logical operation
SELECT * FROM country_stats WHERE year > 2000 AND (gdp < 100000000 OR population > 1000000000);



SELECT * FROM countries WHERE name='Bangladesh' OR name='China' OR name='Uzbekistan';
SELECT * FROM countries WHERE name IN('Bangladesh', 'China', 'Uzbekistan');
