LeetCode 30 – Substring with Concatenation of All Words
## Problem Statement

We are given:

One big string

One list of words

All words are of the same length.

We need to find all starting indexes in the big string
where all those words appear together, continuously,
without any extra character in between.

Order of words does not matter.
But all words must be used exactly once.

Example

String:

barfoothefoobarman

Words:

foo, bar

Each word length = 3
Total size needed = 3 × 2 = 6

So we check substrings of size 6.

Valid ones are:

barfoo
foobar

So answer is:

0, 9

## What I Understood From This Problem

The important thing is:

All words are same length. So instead of checking random substrings, we only check substrings of fixed size.

That fixed size is:

word length × number of words

That makes this problem easier.

How I Think About Solving It
Step 1

First, I store how many times each word appears.

For example:

If words = ["foo", "bar", "foo"]

Then I store:

foo → 2
bar → 1

This helps me know the exact frequency needed.

Step 2

Now I move through the string.

At each index, I take a substring of total required length. Then I break that substring into small parts of word length. Then I count those words.

If the count matches the original frequency map,
then I add that index to the answer.

What This Problem Is Actually Testing

This problem is testing:

Can I detect a fixed pattern inside a big string?

Can I use a hashmap properly?

Can I use sliding window idea?

Can I avoid unnecessary repeated work?

If I try all combinations blindly, it will be slow.

So sliding window helps reduce repeated checking.

## Real Life Understanding 

Imagine a system log like this:

loginlogoutloginpaycart

And I want to detect where:

login + cart + pay

happened together.

Instead of checking every possible combination,
I move a fixed window and check frequency.

That is exactly what this problem is doing.

What I Learned From This Problem

When words have same length, think fixed window

Use hashmap for frequency matching

Sliding window helps optimize

Pattern detection problems are common in backend systems

## Final Summary

We are scanning a big string
to find exact combination of given words
with correct frequency
and no extra characters.

Main trick:

Fix window size and compare frequencies.

That’s it.
