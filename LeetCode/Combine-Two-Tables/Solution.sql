1# Write your MySQL query statement below
2SELECT 
3    p.FirstName,
4    p.LastName,
5    a.City,
6    a.State
7FROM Person p
8LEFT JOIN Address a
9ON p.PersonId = a.PersonId;
10