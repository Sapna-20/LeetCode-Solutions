1# Write your MySQL query statement below
2SELECT
3    score,
4    DENSE_RANK() OVER(Order by score DESC) as 'rank'
5    from Scores;
6