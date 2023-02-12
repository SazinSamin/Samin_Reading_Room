-- visit for know more about constraints -> https://www.w3schools.com/sql/sql_constraints.asp

CREATE TABLE Customers (
    ID int NOT NULL AUTO_INCREMENT,
    Name varchar(20) NOT NULL,
    Prize double(5,2),
    PRIMARY KEY (ID)
);
