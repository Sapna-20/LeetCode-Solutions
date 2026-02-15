# LeetCode 121 – Best Time to Buy and Sell Stock

## Problem in Simple Words

A list of numbers is given.

Each number represents the price of a stock on a particular day.

The order of the list matters because it shows time.

The task is:

- Buy the stock on one day  
- Sell it on a later day  
- Find the maximum profit  
- Only one buy and one sell is allowed  

If no profit is possible, return 0.

Example:

Prices: 7, 1, 5, 3, 6, 4  

Best choice:

Buy on day 2 at price 1  
Sell on day 5 at price 6  

Profit = 6 − 1 = 5  

---

## How to Think About This Problem

This problem is about making the best decision using past and future data.

One important rule is:

Buying must happen before selling.

So, while checking prices from left to right:

- First, notice the lowest price so far  
- Then, compare it with today’s price  
- Check how much profit is possible  

Instead of checking every possible pair of days,  
the focus is on finding the best opportunity step by step.

---

## Simple Thinking Process

### Step 1: Understand
- Prices are given in time order  
- Only one transaction is allowed  
- Selling must happen after buying  

### Step 2: Track the Minimum Price

While moving through the list:

Keep saving the smallest price seen so far.

This represents the best buying point till now.

### Step 3: Calculate Possible Profit

For each new price:

Profit = Current price − Minimum price so far

If this profit is greater than the previous best,
update the answer.

---

## Real-Life Tech Examples

### 1. Stock Trading Applications

Trading platforms store daily price data.

They analyze past prices to show users:

- When the stock was cheapest  
- When it was highest after that  
- What maximum profit was possible  

This helps users understand market behavior.

The same logic is used in background calculations.

---

### 2. Financial Analysis Software

Banks and finance companies work with large price datasets.

They generate reports like:

- Best performing periods  
- Profit opportunities  
- Loss analysis  

To do this, software scans data in the same way as this problem.

---

### 3. Investment Advisory Systems

Investment platforms suggest when to invest and when to exit.

They process historical prices and identify:

- Good entry points  
- Good exit points  

This problem represents the basic version of that analysis.

---

### 4. Business Profit Monitoring Systems

Companies track product costs and selling prices over time.

Example:

Raw material price changes every month.  
Selling price also changes.

Systems analyze:

- When cost was lowest  
- When selling price was highest after that  

This helps in business planning.

---

### 5. Market Research Tools

Market research tools study price trends of products, shares, or services.

They find time periods where maximum growth happened.

This logic is used for trend analysis.

---
