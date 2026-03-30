# Triangle Minimum Path Sum (LeetCode 120)

## Problem Statement

So the problem gives a triangle like this:

```
[
 [2],
 [3,4],
 [6,5,7],
 [4,1,8,3]
]
```

We start from the top element.

At every step, we can only go to the next row and choose either:

* same index
* or next index

So basically, from one number you have two options below it.

The task is to go from top to bottom and find a path whose sum is minimum.

---

## Approaches

### 1. Brute Force

First thought is simple.

From every element, try both paths and keep going till the bottom.

Then compare all the path sums and pick the minimum.

Problem is, number of paths becomes very large.

So this approach is not practical.

---



### 2. Dynamic Programming

Then the better way is to think from bottom.

Instead of asking "where should I go next", we ask
"what is the best path from below".

Start from the second last row.

For each element, check the two values below it and take the minimum of them.

Add that to the current value.

In this way, every element starts storing the best possible sum from that point to the bottom.

At the end, the top element will have the final answer.

---

## Real Engineering Problems

### 1. Route selection

This is similar to choosing a path while travelling.

At every step you have multiple options, but the best decision depends on what comes ahead, not just the current road.

---

### 2. Investment decisions

If you invest step by step, each decision affects the future.

You can’t just pick what looks better now, you need to consider long term outcome.

---