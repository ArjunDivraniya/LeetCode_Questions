# Write your MySQL query statement below
SELECT 
    COALESCE(u.unique_id, NULL) AS unique_id,  -- ensures NULL is explicit
    e.name
FROM Employees AS e
LEFT JOIN EmployeeUNI AS u
    ON e.id = u.id;