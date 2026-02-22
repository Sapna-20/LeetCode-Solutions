# LeetCode 122 – Best Time to Buy and Sell Stock II

## Problem in Simple Words

A list of numbers is given.

Each number represents the stock price on a particular day.

The order of the list represents time.

The task is:

- Buy and sell the stock multiple times  
- Find the maximum total profit  
- Buying must happen before selling  
- Only one stock can be held at a time  

This means:
After selling, buying again is allowed.

Example:

Prices: 7, 1, 5, 3, 6, 4  

Possible transactions:

Buy at 1 → Sell at 5 → Profit = 4  
Buy at 3 → Sell at 6 → Profit = 3  

Total Profit = 4 + 3 = 7  

---

## How to Think About This Problem

This problem is similar to 121, but with one major difference:

Multiple transactions are allowed.

Instead of finding only one best pair,
every small profit opportunity can be used.

Important idea:

If today’s price is higher than yesterday’s price,
profit can be taken.

There is no need to wait for a global maximum.

Every upward movement gives profit.

---

## Simple Thinking Process

### Step 1: Understand
- Prices are given in time order  
- Multiple buy and sell operations are allowed  
- Cannot hold more than one stock at a time  

### Step 2: Look for Increases

Move from left to right.

Whenever:

Current price > Previous price  

Profit = Current − Previous  

Add it to total profit.

### Step 3: Continue

Repeat this for the entire list.

All small profits together give maximum total profit.

---

## Real-Life Tech Examples

### 1. Automated Trading Systems

In algorithmic trading platforms:

Systems monitor price changes continuously.

Instead of waiting for one large opportunity,
they capture multiple small profitable movements.

This strategy increases total gain over time.

The logic used here is similar.

---

### 2. High-Frequency Trading Software

High-frequency trading systems:

Execute many small buy-sell operations in short intervals.

They take advantage of small price differences.

This problem models the simplified version of that behavior.

---

### 3. Cryptocurrency Trading Platforms

Crypto markets fluctuate frequently.

Trading bots often:

- Buy when price rises
- Sell quickly
- Repeat multiple times

This maximizes cumulative profit.

The same pattern appears in this problem.

---
