-- NOT NULL + UNIQUE = PRIMARY KEY
CREATE TABLE Student (
    ID int(5) AUTO_INCREMENT,
    Name VARCHAR(20),
    -- set a primary key
    PRIMARY KEY(ID)
);
    
    
-- drop a primary key
ALTER TABLE NSU DROP PRIMARY KEY;


CREATE TABLE Grades(
    ID int(5),
    grade_id int(5),
    CGPA float(3, 2),
    PRIMARY KEY (grade_id),
    -- set foreign key using reference to the primary key of of the referred table.
    FOREIGN KEY (ID) REFERENCES Student(ID)
);
