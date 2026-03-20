LeetCode 167 – Two Sum II (Input Array Is Sorted)
1. Problem Statement

given a sorted array of integers (in increasing order) and a number called target.

task is to find two different elements in the array such that their sum is equal to the target.

Return the positions (indices) of these two elements.

Important Points:

The array is already sorted

There is exactly one solution

We cannot use the same element twice

Indexing is 1-based (not 0-based)

2. Thinking Process
Step 1: Brute Force Idea

Check every pair:

Take one element and try it with all others

Time complexity: O(n²) → not efficient

Step 2: Use Sorted Property

Since the array is sorted, we can avoid checking all pairs.

Step 3: Two Pointer Approach

Take two pointers:

left → start of array

right → end of array

Step 4: Evaluate Sum

At each step:

sum = numbers[left] + numbers[right]
Step 5: Move Pointers

If sum == target → return answer

If sum < target → move left++ (need bigger value)

If sum > target → move right-- (need smaller value)

Step 6: Why This Works

Moving left increases sum

Moving right decreases sum

Each step reduces search space

No need to recheck elements

Time Complexity:

O(n)

Space Complexity:

O(1)

3. Real Life Engineering Problem
Scenario: Log Analysis in Backend Systems

In production systems, logs are often stored in sorted order (by time or value).

Example:

response_times = [100, 200, 300, 700, 800]
threshold = 1000
Problem:

Find two API calls whose combined response time equals the threshold.

Approach:

Start from smallest and largest values

Check their sum

Adjust pointers based on result

100 + 800 = 900 → too small → move left
200 + 800 = 1000 → match found
Why This Approach is Used:

Logs are already sorted

Data size is large

Need fast and efficient scanning

Avoid nested loops

