LeetCode 135 – Candy
Problem Statement (In Simple Words)

An array ratings is given.

Each index represents a child.  

The value at that index represents the rating of that child.

All children are standing in a straight line.

Candies must be distributed following two rules:

Every child must receive at least 1 candy.

If a child has a higher rating than their immediate neighbor (left or right), then that child must receive more candies than that neighbor.

The task is to return the minimum total number of candies required to satisfy both rules.

Only the total count is required, not the actual distribution.

Thinking Process
Step 1: Base Initialization

Since every child must receive at least one candy,
initialize a candies array with value 1 for all children.

Step 2: Left to Right Pass

If ratings are increasing from left to right,
candies must also increase.

If

ratings[i] > ratings[i - 1]

Then

candies[i] = candies[i - 1] + 1

This ensures the left neighbor condition is satisfied.

Step 3: Right to Left Pass

Now the right neighbor condition must be handled.

If

ratings[i] > ratings[i + 1]

Then

candies[i] = max(candies[i], candies[i + 1] + 1)

The max() is used so that the value assigned in the first pass is not broken.

Step 4: Final Calculation

Sum all values in the candies array and return the result.

Time Complexity: O(n)
Space Complexity: O(n)

Where This Type of Logic Appears in Tech

This exact problem may not directly appear in production systems,
but the underlying pattern is common.

1. Rank-Based Increment Systems

In some internal company tools, employees are ranked after performance evaluations.

Constraints can be:

Everyone receives a base increment.

A higher-ranked employee must not receive less increment than a lower-ranked adjacent rank.

The total increment budget must be controlled.

This creates a minimum allocation problem with relative ordering constraints.

2. Priority-Based Resource Allocation

In backend systems, tasks or services are assigned priority scores.

Each task must receive at least a minimum resource allocation.

Higher-priority tasks must receive more resources than lower-priority neighboring tasks.

Total resource allocation must be optimized.

The core idea is the same: satisfy local constraints while minimizing total allocation.
