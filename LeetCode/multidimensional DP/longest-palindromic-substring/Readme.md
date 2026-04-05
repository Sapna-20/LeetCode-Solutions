# LeetCode 5 - Longest Palindromic Substring

## Problem Statement

You are given a string.

Your task is to find the longest substring which is a palindrome.

A substring is a continuous part of the string.

A palindrome is a string that reads the same forward and backward.

Return the longest such substring. If multiple answers exist, returning any one is acceptable.

---

## Thinking Process

### Brute Force Approach

A straightforward way to think is:

* Generate all possible substrings
* Check each substring whether it is a palindrome
* Keep track of the longest one

Problem with this approach:

* Total substrings are very large
* For each substring, checking palindrome takes time
* This leads to a very high time complexity

---

### Optimized Thinking (Center Expansion)

Instead of checking all substrings, observe the structure of a palindrome.

Every palindrome is symmetric around its center.

So instead of generating substrings, we try to expand around a center.

For every position in the string:

* Treat it as the center of a palindrome
* Expand towards left and right while characters match

There are two cases:

* Odd length palindrome (single center character)
* Even length palindrome (center between two characters)

At each step, we expand and keep track of the longest palindrome found.

This avoids unnecessary checks and directly builds valid palindromes.

---

## Real Engineering Problem

This pattern appears in systems where symmetry and structured patterns are important.

Examples include:

* DNA sequence analysis, where palindromic regions play a role in biological processes
* Text processing systems, where repeated or symmetric patterns are analyzed
* Cybersecurity systems, where pattern recognition is used to detect known structures in data
* Data compression, where identifying structured repetition helps reduce redundancy
* Signal processing, where symmetric patterns can represent meaningful signals

---
