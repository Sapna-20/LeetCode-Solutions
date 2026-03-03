LeetCode 135 – Candy
Problem Statement

An array ratings is given.

Each index represents a child.

The value at that index represents the rating of that child.

All children are standing in a straight line.

Candies must be distributed according to the following rules:

Every child must receive at least 1 candy.

If a child has a higher rating than their immediate neighbor (left or right), then that child must receive more candies than that neighbor.

The goal is to return the minimum total number of candies required to satisfy both rules.

Only the total number is required, not the distribution itself.

Approach
Step 1: Initialize

Since every child must get at least one candy,
create a candies array and initialize all values to 1.

This ensures the first rule is satisfied.

Step 2: Left to Right Pass

Traverse from left to right.

If:

ratings[i] > ratings[i - 1]

Then:

candies[i] = candies[i - 1] + 1

This handles increasing sequences and satisfies the left neighbor condition.

Step 3: Right to Left Pass

Traverse from right to left.

If:

ratings[i] > ratings[i + 1]

Then:

candies[i] = max(candies[i], candies[i + 1] + 1)

The max() ensures that the previous valid assignment from the first pass is not overwritten incorrectly.

Step 4: Final Calculation

Sum all values in the candies array and return the result.

Complexity

Time Complexity: O(n)

Space Complexity: O(n)

Where This Logic Appears in Real Systems

This exact problem may not appear directly in production code,
but the pattern of minimum allocation with ordering constraints is common.

1. Rank-Based Increment Systems

In internal HR tools:

Employees are ranked based on performance.

Everyone receives a base increment.

A higher-ranked employee must not receive less increment than a lower-ranked adjacent rank.

The total increment budget must be controlled.

This creates a constrained allocation problem similar in structure.

2. Priority-Based Resource Allocation

In backend systems:

Tasks or services are sorted by priority.

Each task must receive at least a minimum resource allocation.

Higher-priority tasks must receive more resources than lower-priority neighboring tasks.

Total resource usage must be optimized.

The core idea remains the same:
minimum base allocation + relative ordering constraint + cost optimization.
