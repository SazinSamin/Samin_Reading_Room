-- count all rows (Count consider both duplicate and null)
SELECT COUNT(*) FROM countries;

SELECT MAX(area), MIN(area), SUM(area), AVG(area) FROM countries;

-- Find min age with min age's corresponding column -> https://stackoverflow.com/a/40794224
SELECT * FROM Student WHERE Age = (SELECT MIN(Age) FROM Student);
