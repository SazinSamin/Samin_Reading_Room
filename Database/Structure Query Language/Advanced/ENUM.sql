CREATE TABLE EnumTest(
    ID int(5) PRIMARY KEY AUTO_INCREMENT,
    CGPA float(3, 2),
    Grades ENUM('Low', 'Medium', 'High')
 );

INSERT INTO EnumTest
VALUES(1, 2.58, 'Medium');
