LeetCode 76 – Minimum Window Substring
## Problem in My Words

We are given two strings.

One big string s

One small string t

The task is to find the smallest substring of s that contains all characters of t.

Important points:

Every character in t must appear in the substring.

Frequency also matters.

Order does not matter.

If no such substring exists, we return an empty string.

Example

String s:

ADOBECODEBANC

String t:

ABC

Possible substrings that contain A, B, C:

ADOBEC
DOBECODEBA
BANC

But the smallest one is:

BANC

So the answer is:

BANC

## What I Understood From This Problem

The main idea of the problem is:

We must find the minimum length substring that contains all required characters.

Checking every possible substring would be very slow.

So instead we use the sliding window technique.

This means we maintain a window inside the string and keep adjusting its size.

Two pointers are used:

left → start of the window
right → end of the window

We expand the window and shrink it whenever possible.

How I Think About Solving It
Step 1

First, I store the frequency of characters from string t.

Example:

If

t = "AABC"

Then required frequency becomes:

A → 2
B → 1
C → 1

This tells us how many times each character must appear.

Step 2

Now I move the right pointer across the string s.

As I include characters in the window, I decrease their required frequency.

When all required characters are included,
it means the window is valid.

Step 3

Now I try to shrink the window from the left side.

Because the goal is to find the minimum size window.

If removing a character breaks the requirement,
then I stop shrinking and move the right pointer again.

Step 4

Every time we get a valid window,
we compare its size with the previous minimum.

If it is smaller,
we update our answer.

What This Problem Is Actually Testing

This problem mainly tests:

Understanding of sliding window technique

Handling character frequency using array or hashmap

Knowing when to expand the window and when to shrink it

Optimizing brute force solutions.

If we check every substring,
the time complexity would be very large.

Sliding window helps reduce it to linear time.

## Real Life Understanding (Simple Version)

Imagine a log file like this:

A D O B E C O D E B A N C

And suppose we are monitoring events and we need to detect when these three events happened:

A
B
C

We want to find the smallest time window in which all three events occurred.

Instead of checking the whole log repeatedly,
we move a window through the log
and adjust its size.

That is exactly what this problem is doing.

What I Learned From This Problem

Sliding window is very useful for substring problems.

Always track character frequency when conditions depend on counts.

Two pointer technique can reduce time complexity a lot.

Minimum / maximum substring problems often use sliding window.

## Final Summary

We scan the big string using a window.

The window expands until all required characters appear.

Then we shrink it to make it as small as possible.

The smallest valid window found during this process is the answer.

Main idea:

Use sliding window + frequency counting to find the minimum valid substring.