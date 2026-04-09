# LeetCode 72 – Edit Distance

## Problem Statement

Two strings are given:

word1
word2

You need to convert `word1` into `word2`.

Allowed operations:

1. Insert → add a character
2. Delete → remove a character
3. Replace → change one character to another

Each operation has a cost of 1.

The task is to find the **minimum number of operations required** to convert `word1` into `word2`.

Example

word1 = "horse"
word2 = "ros"

Output

3

---

## Thinking Process

### Step 1: Break the problem (Engineer approach)

Solving the full string at once is difficult.

An engineer breaks the problem into smaller parts.

Define:

dp[i][j] =
minimum cost to convert first `i` characters of word1 into first `j` characters of word2

---

### Step 2: Understand base cases

If word2 is empty:

dp[i][0] = i
→ we must delete all characters

If word1 is empty:

dp[0][j] = j
→ we must insert all characters

---

### Step 3: Decision at each position

At position (i, j):

compare:

word1[i-1]
word2[j-1]

---

### Case 1: Characters are the same

No operation needed

dp[i][j] = dp[i-1][j-1]

---

### Case 2: Characters are different

An engineer does not take a greedy decision.

Instead, considers all 3 possibilities:

1. Delete
   dp[i-1][j]

2. Insert
   dp[i][j-1]

3. Replace
   dp[i-1][j-1]

Final decision:

dp[i][j] = 1 + min(
delete,
insert,
replace
)

---

### Important Insight

At every mismatch:

→ there are 3 possible choices
→ compute cost of each
→ take the minimum

This is why Dynamic Programming is used

---

### Why normal thinking fails?

A normal person:

→ fixes mismatch immediately (greedy)

But:

→ does not consider future impact
→ may miss optimal solution

An engineer:

→ evaluates all possibilities
→ reuses previous results (DP)

---

## Real Engineering Problems 

### 1. Spell Check / Auto-Correct Systems

Typing systems (mobile keyboards, search engines) correct wrong words.

Example:

"speling" → "spelling"

Mapping:

word1 → user input
word2 → dictionary word

The system checks:

→ which word can be formed with minimum edits

---

### 2. Search Engine Query Correction

Search engines detect typos in queries.

Example:

"facbook" → "facebook"

Mapping:

word1 → user query
word2 → correct query

The system finds the closest valid query using minimum edits

---

### 3. DNA Sequence Matching

Used in bioinformatics to compare DNA sequences.

Mapping:

word1 → DNA sequence 1
word2 → DNA sequence 2

Insert → insertion mutation
Delete → deletion mutation
Replace → substitution

Scientists measure similarity using this concept

---

