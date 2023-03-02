-- add a new column
ALTER TABLE Student ADD GPA float(3, 2);

-- change column name (change column only for changing the name of column)
ALTER TABLE Student CHANGE GPA CGPA float(5, 4);

-- modify for increase or decrease the column size, change constraints etc
ALTER TABLE UIU MODIFY Name varchar(25);

-- change vs modify -> https://stackoverflow.com/a/14767467

-- delete a column
ALTER TABLE Student DROP COLUMN CGPA;
