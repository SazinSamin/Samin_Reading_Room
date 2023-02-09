-- Create a table
CREATE TABLE student 
(
  Roll int,
  Name varchar(20),
  Gender varchar(6),
  Age int(2),
  GPA float(3,2),
  PRIMARY KEY (Roll)
);

-- if error comes like [Error: near "Roll": syntax error] then check the selected primary key name are inside
-- parenthesis () or not.



-- Rename a table(Won't work)
RENAME TABLE Student TO Students;


-- Drop a table
DROP TABLE Student;
