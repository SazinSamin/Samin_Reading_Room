-- join two database without duplicate result
SELECT * FROM UIU UNION ALL SELECT * FROM AIUB;

-- join two database with duplicate result
SELECT * FROM UIU UNION ALL SELECT * FROM AIUB;
