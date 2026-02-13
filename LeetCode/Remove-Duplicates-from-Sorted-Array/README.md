# LeetCode 26 – Remove Duplicates from Sorted Array (Easy Explanation)

##  Problem in Simple Words

A sorted list of numbers is given.

Some numbers appear more than once.

The task is:

 Remove duplicate numbers  
 Keep only one copy of each number  
 Do it inside the same list  
 Do NOT create a new list  
 Return how many unique numbers remain  

Example:

List: 1, 1, 2  

After removing duplicates:

List becomes: 1, 2  

Return: 2  

---

##  How to Think About This Problem

Think like this:

A class attendance sheet is given.

Some student names are written more than once.

Only one entry per student is needed.

But making a new sheet is not allowed.

The same sheet must be cleaned.

---

##  Simple Thinking Process

### Step 1: Understand
- The list is already sorted
- Duplicate numbers are together
- Extra space is not allowed

### Step 2: Keep Unique Elements

Start from the first number.

Whenever a new number is different from the previous one,
keep it.

If the number is same as before,
skip it.

### Step 3: Shift Left

All unique numbers are moved to the front.

At the end,
only different numbers remain.

---

##  Real Life Examples (Why This Problem Matters)

This concept is used in many systems.

---

###  1. Contact List Cleaning

- Same contact saved many times
- Only one copy is kept

---

###  2. Database Management

- Duplicate records exist
- Only unique records are stored

---

###  3. Customer Lists

- Same customer registered multiple times
- Only one entry is maintained

---

###  4. Log Monitoring

- Same event logged many times
- One entry is enough

---

###  5. Exam Registration

- Student registered twice
- Duplicate entry is removed

---
