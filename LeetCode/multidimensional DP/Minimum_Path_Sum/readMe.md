Minimum Path Sum (LeetCode 64)

## Problem Statement

So the problem gives you a grid like this:

```
[
 [1,3,1],
 [1,5,1],
 [4,2,1]
]
```

We start from the top left cell.

At every step, we can only move in two directions:

right
down

So from any cell, you only have these two options.

As you move, you keep adding the values of the cells you pass through.

The task is to go from the top left to the bottom right such that the total sum is minimum.

---

## Approaches

### 1. Brute Force

The first natural thought is to try all possible paths.

From each cell, you try going right and down and explore all combinations until you reach the end.

Then you compare all the path sums and return the minimum one.

The problem with this approach is that the number of paths grows very fast as the grid size increases.

So this approach is not efficient.

---

### 2. Dynamic Programming

Instead of thinking about all paths, we solve it step by step.

For any cell, ask a simple question:

what is the minimum cost required to reach this cell?

To reach any cell, there are only two possible ways:

from the top
from the left

So we take the minimum of those two and add the current cell value.

Start with the first cell.

For the first row, you can only come from the left, so keep adding values from left to right.

For the first column, you can only come from the top, so keep adding values from top to bottom.

After that, for every other cell, compare top and left, take the smaller one, and add the current value.

By the time you reach the last cell, it will store the minimum path sum.

---

## Real Engineering Problems

### 1. Route planning

This is similar to choosing a path in a city where each road has a cost like time or fuel.

At every point, you decide whether going straight or turning gives a cheaper overall path.

Instead of checking all possible routes, systems build the best cost step by step.

---

### 2. Warehouse robots

In automated warehouses, robots move on a grid to pick and place items.

Each movement has some cost like time or energy.

The robot needs to reach a destination using the least cost path.

This same step by step minimum decision idea is used there.

---
