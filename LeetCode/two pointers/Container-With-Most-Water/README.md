# LeetCode 11 - Container With Most Water

## Problem Statement

You are given an array of heights.

Each index is a position, and the value is the height of a vertical line.

Pick any two lines. These two lines + the x-axis form a container.

This container can store water.

You have to find which two lines will store the maximum water.

Things to remember:

* Water depends on the smaller height
* Width = distance between indices

So:
water = min(height[i], height[j]) * (j - i)

---

## Thinking Process

First thought is to check all pairs, but that will be too slow.

So we use two pointers.

Start from both ends:
left = 0
right = last index

Now at every step:

* calculate water
* update max if needed

Main idea is simple:

The smaller height is the problem.

If left height is smaller → move left
If right height is smaller → move right

Why?

Because water is always limited by the smaller one.
If you move the bigger one, nothing improves.

So we always try to move the smaller side and hope to find a better height.

Keep doing this until left < right

---

## Real Engineering Problems

### 1. Network Bandwidth

Two servers are connected.

One can handle 10 Mbps, the other 5 Mbps.

Final speed will be 5 Mbps.

The slower one decides everything.

So if you want to improve speed, fix the slower server.

---

### 2. Pipeline

Two pipes are connected.

One allows 8 liters/sec, the other 3 liters/sec.

Final flow = 3 liters/sec

Again, the smaller one limits everything.

---

### 3. Load Balancing

Two servers handling requests.

One can handle 100 req/sec, the other 40 req/sec.

Final system = 40 req/sec

Slow server is the bottleneck.

---

### 4. Production Line

Two machines working together.

One produces 50 units/hour, the other 20 units/hour.

Final output = 20 units/hour

Slow machine controls the system.

---
