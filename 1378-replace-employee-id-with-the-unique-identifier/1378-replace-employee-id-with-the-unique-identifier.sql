# Write your MySQL query statement below
SELECT u.unique_id ,s.name FROM Employees s LEFT JOIN EmployeeUNI u ON s.id=u.id;