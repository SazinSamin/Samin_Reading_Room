-- visit for know more about constraints -> https://www.w3schools.com/sql/sql_constraints.asp

-- constraints are
/*
Not null, 
unique, 
primary key, 
foreign key, 
check, 
default, 
index
*/
-- NOT NULL + UNIQUE = PRIMARY KEY

-- Define a table by setting constraints.
CREATE TABLE Customers (
    ID int NOT NULL AUTO_INCREMENT,
    Name varchar(20) NOT NULL,
    Prize double(5,2),
    -- set a primary key
    PRIMARY KEY (ID)
);

-- drop a primary key
ALTER TABLE NSU DROP PRIMARY KEY;

-- Make a unique constraint combining two columns.
CREATE TABLE NSU (
    ID int (5) NOT NULL,
    Name varchar(20),
    CGPA float(3, 2),
    UNIQUE(Name, CGPA)
    );
    
-- or by alteration.
ALTER TABLE UIU ADD CONSTRAINT namecgpa UNIQUE(Name, CGPA);


INSERT INTO Grades VALUES
(1, 100, 3.24);



-- set(check) constraints
CREATE TABLE Grades(
    ID int(5),
    grade_id int(5),
    CGPA float(3, 2),
    PRIMARY KEY (grade_id),
    -- here we set a constraint that the cgpa should not exceeded 4.00
	CHECK (CGPA <= 4.00)
);


-- drop constraints;
ALTER TABLE Grades DROP INDEX CGPA; -- can't able to run this code

