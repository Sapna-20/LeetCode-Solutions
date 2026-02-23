LeetCode 42 – Trapping Rain Water
Problem Statement

You are given an array where each element represents the height of a wall.
After raining, water can be trapped between these walls.

Your task is to calculate the total amount of water that can be stored.

Example
Input:  [0,1,0,2,1,0,1,3,2,1,2,1]
Output: 6
Requirement

Input: An integer array representing wall heights

Output: Total trapped water

Constraints:

Array size can be large

Solution should be efficient

Expected Complexity:

Time: O(n)

Space: O(1)

The solution should avoid nested loops and extra memory.

Thinking Process

Water can only be stored where there is a boundary on both sides.

The maximum water level at any position is decided by the smaller boundary.

For every position:

Water Level = min(left boundary, right boundary)
Stored Water = Water Level - Current Height

Instead of checking left and right for every position, two pointers are used:

One from the left

One from the right

Maintain:

Maximum height seen from the left

Maximum height seen from the right

Always move the pointer on the smaller side, because that side controls the water level.

Accumulate trapped water during traversal.

This allows the problem to be solved in one pass.

Real Tech Applications

This problem represents capacity calculation between constraints and bottlenecks.

It is used in many real systems:

1. Network Buffering

When data enters faster than it is processed, it accumulates in buffers.
The smallest bandwidth decides how much data can be stored safely.

2. Load Balancing

In distributed systems, overall throughput is limited by the weakest server.
The smallest capacity node controls the system performance.

3. Memory Management

Operating systems manage queues between producers and consumers.
If one side is slow, memory fills up until the limit is reached.

---
