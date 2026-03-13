# LeetCode 6 — Zigzag Conversion

## Problem Statement

Given a string `s` and an integer `numRows`, arrange the characters of the string in a zigzag pattern across the specified number of rows. After forming the zigzag pattern, read the rows sequentially from top to bottom to generate the final string.

### Example 1

Input

s = "PAYPALISHIRING"
numRows = 3

Zigzag Pattern

P   A   H   N
A P L S I I G
Y   I   R

Output

PAHNAPLSIIGYIR

---

### Example 2

Input

s = "PAYPALISHIRING"
numRows = 4

Zigzag Pattern

P     I     N
A   L S   I G
Y A   H R
P     I

Output

PINALSIGYAHRPI

---

## Key Observation

The characters are not placed linearly. Instead, they follow a **zigzag movement pattern**:

1. Characters move downward from the first row to the last row.
2. Once the last row is reached, the movement reverses upward.
3. After reaching the first row again, the direction switches downward.
4. This pattern repeats until all characters are placed.

For example, if the number of rows is 4, the row traversal order will look like this:

0 → 1 → 2 → 3 → 2 → 1 → 0 → 1 → 2 → 3 ...

This repeating wave pattern is the core idea behind the problem.

---

## Thinking Process

To construct the zigzag pattern conceptually:

1. Treat each row as a container that collects characters.
2. Start placing characters in the first row.
3. Move downward row by row until the last row is reached.
4. Reverse the direction and move upward.
5. Continue switching directions when reaching the top or bottom row.
6. After processing all characters, concatenate the rows sequentially.

This simulates how the zigzag structure is formed.

---

## Edge Case

If `numRows = 1`, the zigzag pattern cannot be formed.
In this situation, the output string will be exactly the same as the input string.

---

## Time Complexity

O(n)

Each character in the string is processed exactly once.

---

## Space Complexity

O(n)

Additional storage is required to temporarily store characters for each row before forming the final result.

---

## Real Engineering Applications

### JPEG Image Compression

In JPEG compression, a zigzag scanning pattern is used when reading the frequency matrix after applying the Discrete Cosine Transform (DCT). The zigzag traversal groups lower frequency values first, which improves compression efficiency.

### Matrix Traversal in Image Processing

Computer vision algorithms sometimes use zigzag or wave traversal when scanning matrices or processing pixel blocks.

### Memory Traversal Patterns

Certain system-level algorithms process memory blocks using wave-like traversal patterns to optimize cache behavior and data access efficiency.

---

## Core Concept

The main concept of this problem is **directional traversal with boundary reversal**, where movement switches direction when reaching the first or last row.
