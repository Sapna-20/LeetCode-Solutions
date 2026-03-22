# LeetCode 392 — Is Subsequence

---

1. Problem Statement

We are given two strings: `s` and `t`.

The task is to check whether `s` is a subsequence of `t`.

A subsequence means all characters of `s` appear in `t` in the same order.

Characters do not need to be continuous, but the order must be maintained.

Example:

s = "abc"
t = "ahbgdc"

Here:

* a → found
* b → found
* c → found

All characters are present in order, so the answer is true.

---

2. Thinking Process

Simple idea:

Match characters of `s` inside `t` from left to right.

A basic approach could be:

* check every possible combination (not efficient)

Better approach is using Two Pointer Technique.

### Two Pointer Idea

Take two pointers:

* one pointer for `s`
* one pointer for `t`

Start comparing from the beginning.

Steps:

1. If characters match → move pointer of `s`
2. Always move pointer of `t`
3. Keep doing this until `t` ends

At the end:

* if pointer of `s` reaches the end → all characters matched → true
* otherwise → false

So overall, just try to match `s` inside `t` in order.

---

## 3. Real Engineering Situations Where This Idea Appears

This problem is related to sequence checking and ordered matching.

---

### Example 1 — Search Systems

User types:

fb

System checks inside:

facebook

* f → found
* b → found later

Order is correct → match accepted

---

### Example 2 — Log or Pattern Checking

Checking if a pattern like:

err

exists inside:

server_error_log

* e → found
* r → found
* r → found

Pattern exists in correct order.

---

### Example 3 — User Activity Tracking

System tracks steps like:

login → search → payment

Even if there are extra actions in between, system checks:

* login happened first
* then search
* then payment

If order matches → valid flow

---


