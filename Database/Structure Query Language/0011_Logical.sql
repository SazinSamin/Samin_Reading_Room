SELECT * FROM country_stats WHERE population > 1000000 AND gdp < 100000000;

SELECT * FROM country_stats WHERE population > 1000000 OR gdp < 100000000;

-- nested logical operation
SELECT * FROM country_stats WHERE year > 2000 AND (gdp < 100000000 OR population > 1000000000);


SELECT * FROM countries WHERE name='Bangladesh' OR name='China' OR name='Uzbekistan';
-- Instead of giving too many (or) we can match using (IN)
SELECT * FROM countries WHERE name IN('Bangladesh', 'China', 'Uzbekistan');
-- NOT IN (Exact opposite of IN)
SELECT * FROM countries WHERE name NOT IN('Bangladesh', 'China', 'Uzbekistan');


-- LIKE operator used to match with any column value
-- B% means first character should be 'B' then zero or many any characters
SELECT * FROM countries WHERE name LIKE 'B%';
-- %h means first zero or more any characters but 'h' have to be last character
SELECT * FROM countries WHERE name LIKE '%h';
-- %a% means any character then 'a' then again any character
SELECT * FROM countries WHERE name LIKE '%a%';
-- _(underscore) means any single character( here then 'a', then any zero or more any characters)
SELECT * FROM countries WHERE name LIKE '_a%';
-- 2 any characters then 'a' then zero or more any characters.
SELECT * FROM countries WHERE name LIKE '__a%';
