-- https://www.simplilearn.com/tutorials/sql-tutorial/coalesce-in-sql

-- Return the first NON-NULL value
SELECT COALESCE(NULL, 5, 2, 'Muhib');  -- Output: 5


-- from leetcode problem
# Write your MySQL query statement below
SELECT name FROM Customer WHERE COALESCE(referee_id, 0) != 2;

