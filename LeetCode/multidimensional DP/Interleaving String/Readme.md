# LeetCode 97 – Interleaving String

## Problem in Simple Words

Three strings are given:

* `s1`
* `s2`
* `s3`

The task is:

* Use characters from `s1` and `s2`
* Combine them to form `s3`
* You can pick from either string at any step
* But the order inside each string must remain the same

Return true if it is possible, otherwise return false.

Example:

s1 = "ab"
s2 = "cd"
s3 = "acbd"

Valid:

Pick 'a' from s1
Pick 'c' from s2
Pick 'b' from s1
Pick 'd' from s2

So result = true

---

## How to Think About This Problem

This problem is about checking whether a sequence can be formed by merging two sequences without breaking their internal order.

One important rule is:

Order of characters in each string must be preserved.

While forming `s3` from left to right:

* At each step, check where the current character can come from
* It can come from `s1`, `s2`, or both

If both are possible, then multiple paths exist.

---

## Simple Thinking Process

### Step 1: Understand

* You are merging two strings
* Order inside each string cannot change
* You must use all characters

### Step 2: Move Step by Step

Start from the beginning of `s3`

At each position:

* Check if the character matches the current character of `s1`
* Check if it matches the current character of `s2`

### Step 3: Handle Choices

If both match:

* You have two possible ways
* Both need to be explored

This creates multiple possibilities.

---

## Why Not Brute Force?

Brute force tries all possible ways of picking from `s1` and `s2`.

Problem:

* At many steps, there are two choices
* This creates a large decision tree
* Same situations repeat again and again

This leads to:

* Very high time complexity
* Unnecessary repeated work

---

## Why Use Dynamic Programming

Dynamic Programming avoids recomputing the same situation.

Idea:

* Track states using two indices `(i, j)`
* `i` = how many characters taken from `s1`
* `j` = how many characters taken from `s2`

Each state represents:

Can we form part of `s3` using these many characters?

Instead of solving it again, we store the result.

Benefits:

* Each state is solved only once
* Time complexity becomes efficient
* Works well for large inputs

---

## Real-Life Tech Examples

### 1. Log Merging in Concurrent Systems

Different threads generate logs independently.

When logs are combined:

* Order within each thread must stay correct
* Combined log must be valid

This problem models that validation.

---

### 2. Network Data Streams

Data comes from multiple sources.

When merged:

* Packet order from each source must be preserved

Used in validating stream correctness.

---

