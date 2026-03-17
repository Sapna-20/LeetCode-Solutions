# LeetCode 15 — 3Sum

## 1. Problem Statement

We are given an integer array `nums`.

We need to find **all unique triplets** such that:

nums[i] + nums[j] + nums[k] = 0

Conditions:

* All three indices must be different.
* The result should not contain duplicate triplets.

Example

Input
[-1, 0, 1, 2, -1, -4]

Output

[-1, -1, 2]
[-1, 0, 1]

Both triplets give sum = 0.

---

# 2. Thinking Approach

The first idea that comes to mind is to pick **three numbers and check their sum**.

But checking every combination of three numbers is very slow when the array size becomes large.

A better way to think is:

First **sort the array**.

Then pick one number and try to find two other numbers that make the total sum equal to zero.

Since the array is sorted, we can move through the remaining numbers from both ends and adjust depending on whether the sum is too small or too large.

This avoids checking unnecessary combinations and also makes it easier to skip duplicate values.

---

# 3. Where This Idea Appears in Real Systems

The main idea here is **finding combinations of values that satisfy a condition** efficiently.

Some real examples where similar ideas appear:

Financial systems
Transaction logs are analyzed to detect suspicious combinations of transactions that match fraud patterns.

Log analysis
Engineers often search large log files for combinations of events that together indicate a failure or anomaly.

Data analytics
Large datasets sometimes need to be scanned for groups of values that satisfy certain constraints.

Recommendation systems
Shopping platforms analyze combinations of items purchased together to improve product recommendations.
