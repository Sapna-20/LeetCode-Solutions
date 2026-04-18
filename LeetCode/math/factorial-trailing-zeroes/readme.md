# LeetCode 172 – Factorial Trailing Zeroes

## Problem in Simple Words

A number `n` is given.

You have to imagine calculating:

`n! = n × (n-1) × (n-2) × ... × 1`

The result becomes a very large number.

The task is:

* Find how many zeros are present at the **end of the number**
* Do not actually calculate the factorial
* Only count trailing zeros

---

Example:

n = 5

5! = 120

Trailing zeros = 1

---

## How to Think About This Problem

At first, it looks like we need to compute factorial.

But that is not practical because factorial grows extremely fast.

So instead of computing the number, we try to understand:

👉 **Why do trailing zeros appear?**

A trailing zero is formed when the number contains:

`10 = 2 × 5`

So each pair of (2, 5) gives one zero.

Important idea:

* There are plenty of 2s in factorial
* 5s are limited

So the real task becomes:

👉 Count how many **5s** are present

---

## Simple Thinking Process

### Step 1: Understand

* We are not forming the factorial
* We only care about trailing zeros
* Trailing zeros come from (2 × 5)

---

### Step 2: Focus on 5

Since 2s are always enough,

Only count how many times **5 appears**

---

### Step 3: Count Contributions

Move from 1 to n conceptually

* Multiples of 5 → give one 5
* Multiples of 25 → give extra 5
* Multiples of 125 → give more

So we count:

n/5 + n/25 + n/125 + ...

---

### Step 4: Continue

Keep dividing by 5 until value becomes 0

All contributions together give total number of zeros

---

## Real-Life Tech Examples

### 1. Large Number Computation Systems

In systems dealing with very large numbers:

Storing full values is expensive or impossible.

Instead of computing the full number,

systems extract only required properties (like trailing zeros).

This problem follows the same idea.

---

### 2. Compiler Optimizations

Compilers avoid unnecessary heavy calculations.

If only a property of a result is needed,

they simplify the computation mathematically.

Here also, factorial is skipped, and only factor counting is done.

---

### 3. Cryptography and Number Theory Systems

In cryptography:

Working with actual huge numbers is inefficient.

So algorithms focus on:

* factors
* modular properties
* patterns

This problem uses similar thinking by focusing on factor 5 instead of full value.

---
