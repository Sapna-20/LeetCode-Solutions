# LeetCode 380 – Insert Delete GetRandom O(1)

## Problem in Simple Words

Design a data structure that supports three operations:

1. Insert a value  
2. Remove a value  
3. Return a random value  

All operations must run in constant time O(1).

Rules:

- No duplicate values allowed  
- insert() returns true if value was added  
- remove() returns true if value was removed  
- getRandom() returns any existing value randomly  

---

## What Makes This Problem Interesting

Normally:

- Array gives fast random access
- HashMap gives fast search

But neither alone can do everything in O(1).

So the trick is:

Use both together.

---

## Core Idea

We use:

- A vector to store values  
- An unordered_map to store value → index  

Why?

The vector helps with:

- Fast random selection  

The hashmap helps with:

- Fast checking if a value exists  
- Fast finding the index of a value  
- Fast removal  

Both are necessary.

---

## Why Store Values in BOTH Structures?

Every value must be inserted into:

- The vector  
- The hashmap  

Because:

Vector stores the actual data.

Hashmap stores where that data is located inside the vector.

If we only use vector:

Removing an element from the middle becomes slow.

If we only use hashmap:

Getting a random element becomes slow.

So both work together.

---

## How Insert Works

When inserting a value:

1. Check if it already exists using hashmap  
2. If it exists → return false  
3. If not →  
   - Push it to the end of vector  
   - Store its index in hashmap  

This keeps insert operation O(1).

---

## How Remove Works (Important Trick)

Removing from middle of vector is slow.

So instead:

1. Find index of value using hashmap  
2. Take last element from vector  
3. Move last element to the removed element’s position  
4. Update hashmap for moved element  
5. Remove last element from vector  
6. Erase value from hashmap  

This avoids shifting elements.

Still O(1).

---

## How getRandom Works

Since everything is stored in vector:

1. Generate random index  
2. Return value at that index  

Direct access → O(1)

---

## Example

Start empty.

Insert(10)

Vector: [10]  
Map: {10: 0}

Insert(20)

Vector: [10, 20]  
Map: {10: 0, 20: 1}

Insert(30)

Vector: [10, 20, 30]  
Map: {10: 0, 20: 1, 30: 2}

Remove(20)

- Index of 20 = 1  
- Last element = 30  
- Move 30 to index 1  

Vector becomes: [10, 30]  
Map becomes: {10: 0, 30: 1}

Done.

---

## Real-Life System Examples

### 1. Cache Systems

Data is inserted, removed, and sometimes randomly selected.
Performance must be constant time.

### 2. Gaming Servers

Active players are stored.
Players join and leave.
Random player selection may be needed.

### 3. Load Testing Systems

Active sessions are tracked.
Random sampling is used for monitoring.


