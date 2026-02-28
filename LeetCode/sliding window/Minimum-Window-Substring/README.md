LeetCode 76 – Minimum Window Substring
## Problem Statement

We are given two strings s and t. The goal is to find the smallest substring in s that contains all characters of t. Every character from t must appear in the substring and the frequency also matters. The order of characters does not matter. If no such substring exists, we return an empty string.

Example
s = "ADOBECODEBANC"
t = "ABC"

Valid substrings containing A, B, C:

ADOBEC
DOBECODEBA
BANC

The smallest substring is:

BANC

So the output is:

"BANC"
## Key Observation

Important things to notice:

We are not asked to find any substring.

We must find the minimum length substring.

Characters from t must appear with correct frequency.

Trying all substrings would be very slow, so a better approach is needed.

## Idea to Solve

The best approach is Sliding Window + Character Frequency Tracking.

Two pointers are used:

left  -> start of window
right -> end of window

The window keeps expanding and shrinking while scanning the string.

Approach

Step 1 – Store frequency of characters in t.

Example:

t = "AABC"

Frequency needed:
A -> 2
B -> 1
C -> 1

Step 2 – Move the right pointer across string s and include characters into the window.

Step 3 – When the window contains all required characters, the window becomes valid.

Step 4 – Now try to shrink the window from the left to remove unnecessary characters.

Step 5 – Keep updating the minimum window length whenever a valid window is found.

## This problem mainly tests:

Sliding Window technique

Two pointer approach

Character frequency tracking

Optimizing brute force substring search

Without sliding window, the brute force solution would be very slow.

### Real Life Tech Usage

This concept appears in many real systems.

## Search Engines
When users search multiple keywords, the search system may find the smallest part of a document containing all those keywords so it can highlight the most relevant snippet.

## Log Monitoring Systems
In production systems, engineers may need to detect the smallest log segment containing events like ERROR, TIMEOUT, and DATABASE_FAIL.

## Text Processing / NLP
Some systems try to find the smallest sentence or paragraph containing multiple required keywords for summarization or document analysis.

## Complexity:

### Time Complexity

O(n)

Each character is visited at most twice by the sliding window.

### Space Complexity

O(1)

Only a fixed size character frequency array is used.

### Final Summary

The problem asks for the smallest substring containing all required characters. Instead of checking every substring, we use a sliding window with two pointers. The window expands to include required characters and shrinks to remove unnecessary ones. During this process we keep track of the smallest valid window and return it as the answer.