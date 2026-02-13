# LeetCode 80 – Remove Duplicates from Sorted Array II (Easy Explanation)

##  Problem in Simple Words

A sorted list of numbers is given.

Some numbers appear many times.

The task is:

 Keep each number **maximum two times**  
 Remove extra copies  
 Do it in the same list  
 Do NOT make a new list  
 Return how many numbers remain  

Example:

List: 1, 1, 1, 2, 2, 3  

After cleaning:

List becomes: 1, 1, 2, 2, 3  

Return: 5  

---

##  How to Think About This Problem

Think like this:

A list is already arranged in order.

Same numbers are coming together.

Only two copies are allowed.

More than two copies are waste.

So extra ones must be removed.

---

##  Simple Thinking Process

### Step 1: Understand
- List is sorted
- Same numbers are together
- Only two copies are allowed
- Extra space is not allowed

### Step 2: Check Count

Go from start to end.

For each number:
- If it appears 1st time → keep
- If it appears 2nd time → keep
- If it appears more → remove

### Step 3: Arrange

All allowed numbers are moved to front.

At the end,
only useful numbers remain.

---

##  Real Life Examples (Very Simple)

###  1. Exam Answer Sheets

A student can submit **only two answer sheets**.

If someone submits 3 or 4,
extra sheets are rejected.

Only first two are kept.

---

###  2. OTP Messages

A system allows **only two OTP messages**.

If many are sent,
extra ones are ignored.

---

###  3. Discount Coupons

A customer can use **only two coupons**.

More than that is not allowed.

---

###  4. Complaint System

A person can register **only two complaints**.

Extra complaints are removed.

---

###  5. Office Leave Requests

Only two leave requests per month allowed.

Extra requests are rejected.

---
