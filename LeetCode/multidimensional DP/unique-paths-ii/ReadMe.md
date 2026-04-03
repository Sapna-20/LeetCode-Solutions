## Unique Paths II (LeetCode 63)

## Problem Statement

So the problem gives a grid like this:

[
 [0,0,0],
 [0,1,0],
 [0,0,0]
]

We start from the top-left corner.

We want to reach the bottom-right corner.

At every step, we can only move:

1. right
2. down

Some cells contain obstacles (marked as 1), and we cannot step on them.

So basically, from one cell you have at most two options, but some of them might be blocked.

The task is to find how many different paths exist from start to end without stepping on obstacles.

## Approaches
1. Brute Force

First thought is simple.

From every cell, try moving right and down recursively.

Keep exploring until you reach the destination.

Count all valid paths.

Problem is, the number of paths grows exponentially.

So this approach is not practical.

2. Dynamic Programming

Then the better way is to build the answer step by step.

Instead of asking
"which path should I take"

we ask
"how many ways can I reach here"

Start from the top-left.

For each cell:

If it is an obstacle → no path can go through it → value = 0
Otherwise → number of ways = ways from top + ways from left

So:

dp[i][j] = dp[i-1][j] + dp[i][j-1]

In this way, each cell stores the number of ways to reach it.

At the end, the bottom-right cell will contain the final answer.

Important Edge Case

If the starting cell itself is blocked:

grid[0][0] == 1 → answer = 0
Real Engineering Problems
1. Robot Navigation

This is similar to a robot moving inside a warehouse.

Grid = floor layout
Obstacles = shelves / boxes
Robot moves in limited directions

The system needs to calculate how many valid routes are possible.

2. Network Routing

In networks:

Nodes = grid cells
Failed nodes = obstacles

We may need to count how many ways data can reach the destination if some paths are blocked.

3. Game Development

In grid-based games:

Map = grid
Walls/enemies = obstacles

Game engines often check path possibilities or reachability.