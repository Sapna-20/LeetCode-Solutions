# LeetCode 221 - Maximal Square

## Problem Statement

You are given a 2D matrix containing only '0' and '1'.

* '1' represents a valid cell
* '0' represents an invalid cell

The task is to find the largest possible square that contains only '1's.

Return the area of that square.

---

## Thinking Process

### Brute Force Approach

A straightforward way to think is:

* Go to every cell
* If the cell is '1', try to expand a square from that position
* Check for 2x2, then 3x3, and so on

Problem with this approach:

* Every time you expand, you recheck many cells
* This leads to repeated work
* Time complexity becomes very high for large inputs

---

### Optimized Thinking (Using DP)

Instead of checking again and again, we store information.

At every cell, we try to answer:

"What is the largest square that can end at this cell?"

To decide this, we look at three neighbours:

* Left
* Top
* Diagonal

If the current cell is '1', then:

* The square size depends on the smallest of these three
* Because a square can only grow if all three sides support it

So the idea is:

* Take the minimum of left, top, and diagonal
* Add 1 to it

This avoids recomputation and makes the solution efficient.

---

## Real Engineering Problem

This pattern appears in real systems where we deal with grids and constraints.

Examples include:

* Image processing, where we detect the largest uniform region in a binary image
* Chip design, where engineers find the largest available square space to place components
* Data center planning, where available grid space is analyzed for placing hardware
* Game development, where the system needs to detect the largest buildable square area
* Storage and land allocation, where continuous square regions are required

In all these cases, the core problem is the same: finding the largest usable square region in a constrained grid.

---
