## LeetCode 188 Best Time to Buy and Sell Stock IV

## Problem Statement

We are given an array prices where each element represents the stock price on a given day. We are also given an integer k which tells us the maximum number of transactions we can perform.

Rules are simple
At any time we can hold only one stock
We must buy before we sell
One transaction means one buy and one sell
We cannot perform more than k transactions

The goal is to maximize the total profit.

## Thinking Approach

At first it feels simple
If price increases then sell
If price decreases then wait or buy

But this approach does not work

The problem is if I sell too early, I might miss a bigger profit later
And if I keep holding, the price might drop

So just comparing with the next day is not enough

The real issue is that at every day I have choices
Buy
Sell
Or do nothing

And I also need to keep track of
How many transactions are left
Whether I am holding a stock or not

So this becomes a decision problem where I need to choose the best action at every step

That is why a normal greedy approach fails

## Why DP

DP is used because the same situations repeat again and again

For example
Same day index
Same number of transactions left
Same state whether I am holding a stock or not

If I solve one such state once, I can reuse it later

Another important thing is that every decision depends on the future

If I sell today or wait depends on what happens later
DP handles this by considering all possibilities

In simple words
At every step we compare
Sell now
Or hold and sell later

DP always chooses the better option

## Real Engineering Problems

This type of problem appears in real systems

1. One example is trading systems
Automated systems decide when to buy and when to sell
They also have limits like capital or risk

2. Another example is resource allocation
Like in cloud systems or CPU scheduling
Where resources are limited and need to be used at the right time

3. Inventory management is also similar
Buy goods when price is low and sell when price is high
But operations are limited
