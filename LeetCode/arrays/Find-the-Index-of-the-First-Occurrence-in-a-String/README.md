# LeetCode 28 – Find the Index of the First Occurrence in a String

## Problem Statement

We are given two strings.

haystack → the main large string  
needle → the smaller string we want to search

The task is to find the first position where the string `needle` appears inside the string `haystack`.

If the pattern exists, return the starting index of that occurrence.  
If the pattern does not exist inside the main string, return `-1`.

Example:

haystack = "sadbutsad"  
needle   = "sad"

Output:

0

Explanation:

The substring `"sad"` starts at index `0` in `"sadbutsad"`.

Another example:

haystack = "leetcode"  
needle   = "leeto"

Output:

-1

Explanation:

The substring `"leeto"` does not exist inside `"leetcode"`.



## Thinking Process (how to approach the problem)

The main idea is to check whether the smaller string `needle` appears inside the larger string `haystack`.

Let:

n = length of haystack  
m = length of needle

If we want to find a match, we must check every possible starting position where the substring of size `m` can exist inside the string of size `n`.

The last possible starting position will be:

n - m

because after that there will not be enough characters left to match the pattern.

So the general approach is:

1. Start from index `0` in `haystack`.
2. Take a substring of length `m`.
3. Compare it with `needle`.
4. If both match → return the index.
5. If not → move the starting position by one.
6. Continue this until the index reaches `n - m`.

Example:

haystack = "hello"  
needle   = "ll"

Check positions one by one.

Index 0 → "he" ≠ "ll"  
Index 1 → "el" ≠ "ll"  
Index 2 → "ll" = "ll"

Match found → return `2`.

In the worst case, we compare many characters repeatedly.

Example worst case:

haystack = "aaaaaaaaaaaaa"  
needle   = "aaaaab"

At almost every position the comparison will go until the last character and fail.

Because of repeated comparisons, the time complexity becomes:

O(n × m)



## What Techniques Are Used and Why

This problem belongs to the category of **string pattern searching**.

Different algorithms exist to solve it efficiently.

### 1. Naive Substring Search

Idea  
Check every possible substring of size `m`.

Why used  
Very simple and works fine for small strings.

Time complexity  
O(n × m)



### 2. Rabin–Karp Algorithm

Idea  
Instead of comparing characters every time, compute a **hash value** of the pattern and compare it with the hash of substrings.

Key technique used  
Rolling Hash

When the window moves, the hash is updated instead of recomputing it completely.

Why it helps  
Hash comparison is much faster than character-by-character comparison.

Average complexity  
O(n + m)

Problem  
Hash collisions may occur, which can make the algorithm slower.



### 3. KMP (Knuth–Morris–Pratt)

Idea  
Avoid rechecking characters that are already known to match.

Technique used  
LPS array (Longest Prefix that is also Suffix)

The LPS array tells us how much we can shift the pattern when a mismatch occurs.

Why it is powerful  
It guarantees that characters are not compared repeatedly.

Time complexity  
O(n + m) guaranteed



### 4. Boyer–Moore Algorithm

Idea  
Compare the pattern from the **right side instead of the left**.

Techniques used

Bad Character Rule  
Good Suffix Rule

These rules allow the algorithm to skip many characters at once when a mismatch happens.

Why it is very fast  
It can jump large sections of the text instead of checking every position.

In practice this algorithm performs extremely well for large text searching.



## Why Tools Like grep Prefer Boyer–Moore or KMP

Real systems process extremely large files.

Examples:

• system logs  
• source code repositories  
• large text datasets

These systems require **predictable performance**.

Rabin–Karp depends on hashing and may suffer from collisions.

KMP and Boyer–Moore avoid that issue and provide stable performance.

Because of this, tools like:

grep  
ripgrep  
ag (The Silver Searcher)

use algorithms based on **Boyer–Moore or its variants**.



## Real Engineering Problems Where This Concept Is Used

### Browser "Find in Page"

When pressing:

Ctrl + F

in a browser, the browser searches a word inside the entire webpage.

This requires scanning large text and finding pattern occurrences efficiently.



### Log Analysis Systems

Engineers often search logs for patterns like:

ERROR  
Timeout  
Connection refused

Log analysis tools scan massive log files to find where these patterns appear.



### Search Engines

Search engines must locate query words inside billions of documents.

Efficient string searching algorithms are used in indexing and query processing.



### Malware Signature Detection

Antivirus systems scan files looking for known malware signatures.

A signature is basically a specific pattern of bytes inside a file.

Efficient pattern matching algorithms help detect these patterns quickly.



### DNA Sequence Search

In bioinformatics, scientists search DNA patterns inside extremely long DNA sequences.

Example pattern:

ACTGATCG

Pattern matching algorithms help locate these sequences efficiently in genomic data.