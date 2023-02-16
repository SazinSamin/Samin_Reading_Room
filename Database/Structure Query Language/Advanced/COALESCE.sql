-- https://www.simplilearn.com/tutorials/sql-tutorial/coalesce-in-sql

-- Return the first NON-NULL value
SELECT COALESCE(NULL, 5, 2, 'Muhib');  -- Output: 5

