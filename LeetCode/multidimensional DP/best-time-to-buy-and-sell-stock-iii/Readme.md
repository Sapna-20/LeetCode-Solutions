## LeetCode 123 – Best Time to Buy and Sell Stock III

## Problem in Simple Words

A list of numbers is given.

Each number represents the stock price on a particular day.

The order of the list represents time.

The task is:

Buy and sell the stock at most 2 times
Find the maximum total profit
Buying must happen before selling
Only one stock can be held at a time

This means:

After completing one transaction (buy → sell),
you can start the second one.

But total transactions cannot exceed 2.

Example:

Prices: 3, 3, 5, 0, 0, 3, 1, 4

Possible transactions:

Buy at 3 → Sell at 5 → Profit = 2
Buy at 0 → Sell at 4 → Profit = 4

Total Profit = 2 + 4 = 6

## How to Think About This Problem


Only 2 transactions are allowed
You must choose them carefully

You cannot take every small profit.

You have to pick best two non-overlapping deals.

# Simple Thinking Process

Step 1: Understand

Prices are given in time order
Only 2 transactions allowed
Cannot hold more than one stock at a time

Step 2: Think in Two Parts

Instead of handling 2 transactions together:

Think like this:

“I will do first transaction in the first part,
and second transaction in the later part”

Step 3: Try Every Split

For every position in the array:

Left side → best profit using 1 transaction
Right side → best profit using 1 transaction
Step 4: Combine

For each position:

Total Profit = Left Profit + Right Profit

Take the maximum of all

Step 5: Continue

Check all possible split points.

The best combination of two transactions will come out.

## Real-Life Tech Examples


1. CPU Scheduling with Limited Switches

In operating systems:

CPU can switch heavy tasks limited times
Each execution window gives different output

Goal:

Choose 2 best execution windows
Maximize total work done
2. Network Bandwidth Boost Allocation

In networking:

High-speed mode can be enabled limited times
Traffic changes over time

System decides:

When to enable first boost
When to enable second boost

To maximize total data transfer