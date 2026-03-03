LeetCode 135 – Candy
1. Problem Statement

An array ratings is given.

Each index represents a child.  

The value at that index represents the rating of that child.

All children are standing in a straight line.

Candies must be distributed according to the following rules:

Every child must receive at least 1 candy.

If a child has a higher rating than their immediate neighbor (left or right), then that child must receive more candies than that neighbor.

The objective is to return the minimum total number of candies required to satisfy both rules.

Only the total number is required, not the actual candy distribution.

2. Approach and Thinking Process
2.1 Base Initialization

Since every child must receive at least one candy,
initialize a candies array where every element is set to 1.

This guarantees the first rule is satisfied.

2.2 Left to Right Traversal

To satisfy the left neighbor condition:

If

ratings[i] > ratings[i - 1]

Then

candies[i] = candies[i - 1] + 1

This step ensures that whenever ratings increase from left to right,
the candy count also increases accordingly.

2.3 Right to Left Traversal

Now the right neighbor condition must be handled.

If

ratings[i] > ratings[i + 1]

Then

candies[i] = max(candies[i], candies[i + 1] + 1)

The max() function is used to prevent overwriting a valid value assigned during the first pass.

2.4 Final Calculation

After both passes are completed,
sum all values in the candies array and return the total.

3. Complexity Analysis

Time Complexity: O(n)

Space Complexity: O(n)

4. Practical Relevance in Tech Systems

Although this exact problem may not directly appear in production code,
the underlying pattern is used in systems involving constrained allocation.

4.1 Rank-Based Increment Systems

In internal HR or evaluation platforms:

Employees are ranked based on performance scores.

Everyone receives a base increment.

A higher-ranked employee must not receive less increment than a lower-ranked adjacent rank.

The total increment budget must be controlled.

This creates a minimum allocation problem with ordering constraints.

4.2 Priority-Based Resource Allocation

In backend services:

Tasks are assigned priority scores.

Each task must receive a minimum amount of resources.

Higher-priority tasks must receive more resources than lower-priority neighboring tasks.

Total resource allocation must be optimized.

<<<<<<< HEAD
The same principle applies:
minimum base allocation + relative ordering constraint + cost optimization.
=======
The core idea is the same: satisfy local constraints while minimizing total allocation.

>>>>>>> 17f8a60bc02ba7faf12daa9c251d81c6c6e527c6
