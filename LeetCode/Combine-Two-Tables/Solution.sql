1SELECT 
2    p.FirstName,
3    p.LastName,
4    a.City,
5    a.State
6FROM Person AS p
7LEFT JOIN Address AS a
8    ON p.PersonId = a.PersonId;
9