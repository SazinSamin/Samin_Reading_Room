--https://www.w3schools.com/sql/sql_exists.asp
--https://www.youtube.com/watch?v=HM6Jc5YGubQ


SELECT name as Customers FROM Customers WHERE NOT EXISTS (SELECT * FROM Orders WHERE Orders.customerId = Customers.id);
