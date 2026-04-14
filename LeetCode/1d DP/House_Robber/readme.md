## LeetCode 198 – House Robber

# Problem in Simple Words

A list of numbers is given.

Each number represents the money inside a house.

The houses are arranged in a straight line.

# The task is:

You can rob houses to collect money
You cannot rob two adjacent houses
Find the maximum money you can collect

This means:
If you rob one house, you must skip the next one.

Example

Houses: 2, 7, 9, 3, 1

Possible choices:

2 + 9 + 1 = 12
7 + 3 = 10
7 + 1 = 8

Maximum money = 12

How to Think About This Problem

At first, it may feel like:

Take even index houses
Or take odd index houses

But this approach is wrong.

Because:

Money is not evenly distributed.
Some houses have more money, some less.

So fixed patterns (even/odd) will fail.

## Simple Thinking Process

Step 1: Understand
Houses are in order
Cannot pick adjacent houses
Need maximum total money
Step 2: At Every House, Two Choices

For each house, think:

Option 1: Take this house
Add its money
Skip next house
Option 2: Skip this house
Move to next house
Step 3: Compare

At every step, compare:

Take → current house + future profit
Skip → future profit

Whichever is greater, choose that.

Step 4: Important Idea

You are NOT comparing:

current house vs next house

You are comparing:

total money if you take this house
vs
total money if you skip this house
Example Breakdown

Houses: 2, 1, 1, 2

If you follow pattern:

Even index → 2 + 1 = 3
Odd index → 1 + 2 = 3

But actual best:

2 + 2 = 4

So pattern fails.

# Core Intuition

At every house:

Choose
take it + skip next
OR
skip it

whichever gives more total money.

## Real-Life Tech Examples
1. Resource Allocation in Systems

In systems where tasks conflict with each other:

Some tasks cannot run together
You must choose non-conflicting tasks

Goal is to maximize total output.

Same idea as skipping adjacent houses.

2. CPU Scheduling

In CPU scheduling:

Some processes cannot run back-to-back due to constraints
System selects best combination to maximize efficiency

Instead of picking sequentially, it picks optimal combination.

3. Investment Planning

In some investments:

Choosing one option blocks another nearby option
You must choose investments that don’t conflict

Goal is to maximize total return.