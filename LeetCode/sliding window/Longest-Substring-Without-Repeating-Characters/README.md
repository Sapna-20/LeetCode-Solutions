Longest Substring Without Repeating Characters (LeetCode #3)
## Problem Statement

We are given a string.

What we need to do is find the length of the longest substring where no character repeats.

By substring, I mean a continuous part of the string — we can’t skip characters.

Also, each character in that substring should appear only once.

At the end, we just return the length of that substring.

## Thinking Process
Brute Force Idea

First thought that comes to mind is simple.

We try all possible substrings.

For each substring, we check if all characters are unique or not.

If yes, we calculate its length and keep track of the maximum.

The problem with this approach is that we are checking the same things again and again, which makes it very slow.

## Better Approach (Sliding Window)

So instead of doing repeated work, we handle it in a smarter way.

We keep a window using two pointers:

one for the start (left)
one for the end (right)

We move the right pointer step by step and keep adding characters.

If the character is not repeated, we just continue and update the maximum length.

If we see a repeated character, we don’t restart everything.

We simply move the left pointer to remove the duplicate from the window.

We also keep track of the last seen position of characters using a map, so we can jump directly.

This way, every character is processed only once, and it becomes efficient.

## Real Engineering Problems
1. Log Analysis

In real systems, logs are generated like a sequence of events.

Sometimes we want to check how long the system runs without repeating the same event.

If events start repeating frequently, it may indicate some issue like a loop or retry problem.

2. Network Monitoring

In network traffic, data packets keep flowing.

If the same type of packet keeps repeating, it might indicate duplicate transmission or some abnormal behavior.

So tracking a non-repeating sequence helps in analysis.

3. User Activity Tracking

In applications, users perform actions like click, scroll, view, etc.

We can track the longest sequence of actions without repetition to understand normal behavior or detect bots.