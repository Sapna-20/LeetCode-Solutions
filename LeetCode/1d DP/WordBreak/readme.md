## LeetCode 139 – Word Break

## Problem in Simple Words

You are given:

* A string `s`
* A list of words `wordDict`

The string does not contain spaces.

### Task:

Check whether the string can be segmented into a sequence of one or more words from the given list.

### Conditions:

* Each word must exist in `wordDict`
* You can reuse words multiple times
* The entire string must be covered (no leftover characters)

---

### Example 1:

String: "applepenapple"

Word list: ["apple", "pen"]

Valid split:

"apple" + "pen" + "apple"

Output: true

---

### Example 2:

String: "catsandog"

Word list: ["cats", "dog", "sand", "and", "cat"]

No valid full segmentation exists

Output: false

---

## How to Think About This Problem

This is not about checking random substrings.

The goal is to verify whether the **entire string** can be constructed using valid dictionary words.

So the problem becomes:

> Can we split the string into valid pieces such that every part belongs to the given dictionary?

---

# Thinking Process

### Step 1: Understand the Structure

* String is continuous
* Dictionary is fixed
* We must cover the whole string

---

### Step 2: Naive Approach (Why it fails)

Try all possible ways to split the string.

Problem:

* Same substrings are checked repeatedly
* Leads to exponential time complexity

---



### Step 3: DP Idea

Define:

`dp[i] = true` if substring from index `0` to `i` can be segmented

---

### Step 4: Transition Logic

For each index `i`, check all possible previous cuts `j`:

If:

* `dp[j] == true` (left part is valid)
* substring `s[j...i]` exists in dictionary

Then:

`dp[i] = true`

---

### Step 5: Final Answer

* If `dp[n] == true` → valid segmentation exists
* Else → not possible

---

## Real-Life Engineering Applications

### 1. Search Query Processing

Example input:

"bestlaptopsunder50000"

System needs to interpret it as:

"best laptops under 50000"

Why this matters:

* Improves search relevance
* Matches user intent with indexed data

---

### 2. Natural Language Processing (NLP)

Example:

"iloveprogramming" → "i love programming"

Used in:

* Chat systems
* Text understanding pipelines

---

### 3. Text Correction Systems

Example:

"themanranfast" → "the man ran fast"

Used in:

* Auto-correct
* Text recovery

---



