-- select only distinct element
SELECT DISTINCT CITY FROM Student;

-- select only limited row
SELECT * FROM Student LIMIT 2;

-- select only limited row after number of row skipped. LIMIT<Number of row skipped, Number of row select>
SELECT * FROM Student LIMIT 2,2;
