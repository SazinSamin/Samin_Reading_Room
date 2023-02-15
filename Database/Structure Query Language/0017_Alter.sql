-- add a new column
ALTER TABLE Student ADD GPA float(3, 2);

-- change column name
ALTER TABLE Student CHANGE GPA CGPA float(5, 4);

-- delete a column
ALTER TABLE Student DROP COLUMN CGPA;
