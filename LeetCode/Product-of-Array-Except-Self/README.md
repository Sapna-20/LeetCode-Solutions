# LeetCode 238 – Product of Array Except Self (Easy Explanation)

##  Problem in Simple Words

Imagine you have a list of numbers.

Example:

List: 1, 2, 3, 4  

Now your task is:

 For each position, multiply all numbers  
 But do NOT include the current number  
 Store the answer in a new list  

So:

For 1 → 2 × 3 × 4 = 24  
For 2 → 1 × 3 × 4 = 12  
For 3 → 1 × 2 × 4 = 8  
For 4 → 1 × 2 × 3 = 6  

Final Answer:

24, 12, 8, 6  

But there is one condition:

You are NOT allowed to use division.

So you must find another way.

---

##  How to Think About This Problem

Let’s understand this using real life.

Suppose:

You have many machines working together.

Each machine adds to total production.

Now you want to know:

“How much work is done if one machine is removed?”

You cannot calculate everything again and again.

You reuse old calculations.

Same idea here.

Instead of multiplying everything again,
we divide the work into parts.

---

### Important Idea

For any position:

Answer =  
(Product of numbers on left) × (Product of numbers on right)

Not including itself.

---

##  Simple Thinking Process

### Step 1: Understand
- Each position needs product of other numbers
- Division is not allowed
- Zero can be present in array

### Step 2: Calculate Left Product

Make a list that stores:

Product of all numbers before current position.

Example:

Input: 1, 2, 3, 4  
Left:  1, 1, 2, 6  

(First is always 1 because nothing is before it)

---

### Step 3: Calculate Right Product

Now move from right side.

Keep one variable for right product.

Multiply it while moving left.

---

### Step 4: Combine Both

For each position:

Answer = Left × Right

This gives final result.

No division needed.

---

##  Real Life Examples (Why This Problem Matters)

This problem is NOT just for exams.
It is used in many real systems.

---

###  1. Financial Calculations

Banks calculate total risk from many factors.

Sometimes one factor is removed.

Remaining product is calculated.

Same logic.

---

###  2. Data Analysis

Data systems combine many values.

To check impact of one value,
they remove it and recalculate.

This method is used.

---

###  3. Business Cost Analysis

Companies calculate total cost from many parts.

If one part is removed,
new cost is calculated.

Same idea.

---

###  4. Engineering Reliability

System reliability = product of parts.

Remove one part,
recalculate reliability.

Same logic.

---

###  5. Machine Learning

ML systems combine many features.

To test one feature,
others are multiplied.

This pattern is used.

---
