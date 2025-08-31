# Write your MySQL query statement below
SELECT E.name , B.bonus from Employee E left join Bonus B on E.empId=B.empId where B.bonus<1000 OR B.bonus is null;