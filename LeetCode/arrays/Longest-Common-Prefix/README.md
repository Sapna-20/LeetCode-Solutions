# LeetCode 14 — Longest Common Prefix

## Problem Statement (Layman Technical Language)

We are given a list of strings.

Example:

```
["flower","flow","flight"]
```

We need to find the **longest starting part of the word that is common in all strings**.

Example:

```
flower
flow
flight
```

All three words start with **"fl"**, so the answer is:

```
fl
```

If there is **no common starting part**, then we return an empty string.

Example:

```
["dog","racecar","car"]
```

These words do not share any common prefix, so the answer will be:

```
""
```

---

## Thinking Process

The natural way to think about this problem is to **compare characters from the beginning of the words**.

Example:

```
flower
flow
flight
```

Step 1 — Compare first character

```
f   f   f
```

All are same, so continue.

Step 2 — Compare second character

```
l   l   l
```

Still same, continue.

Step 3 — Compare third character

```
o   o   i
```

Here we see a mismatch.

So the common prefix stops **before this position**.

Therefore the longest common prefix becomes:

```
fl
```

### How we logically solve it

1. Take the **first string as a reference word**.

Example:

```
flower
```

2. Check each character of this word one by one.

```
f
l
o
w
e
r
```

3. For every character position, compare it with the **same position in all other strings**.

Example:

Index `0`

```
flower
flow
flight
```

All have `f` → continue.

Index `1`

```
l
l
l
```

All same → continue.

Index `2`

```
o
o
i
```

Mismatch occurs → stop checking.

4. Whatever characters matched before mismatch form the **longest common prefix**.

---

## Real Engineering Problems Where This Concept Is Used

### Search Engine Suggestions

When you type something in a search engine like:

```
prog
```

The system checks many stored words such as:

```
program
programming
progress
project
```

Since many words share the prefix **"pro"**, systems use prefix comparison to quickly generate suggestions.

---

### Trie Data Structure in Large Systems

Many systems store large sets of words using a **Trie (Prefix Tree)**.

Example words:

```
car
card
care
careful
```

All share the prefix `"car"`.

Instead of storing each word separately, the system stores the shared prefix once and branches later.
This saves memory and makes prefix searching very fast.

---

### File System Path Optimization

Operating systems also use prefix matching for file paths.

Example:

```
/usr/local/bin
/usr/local/lib
/usr/local/share
```

All share the prefix:

```
/usr/local/
```

Systems detect this common prefix to optimize path storage and lookup operations.
