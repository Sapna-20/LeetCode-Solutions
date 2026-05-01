LeetCode 124 – Binary Tree Maximum Path Sum

## Problem Statement

Given a binary tree where each node contains an integer value (can be positive or negative).

A path is a sequence of nodes connected through parent-child links.

# Rules of the path:

Path can start from any node
Path can end at any node
Path must be continuous
Path does NOT need to pass through root

task is to find the maximum path sum in the tree.

If completing is not possible (all negative), return the maximum node value.

Example

Tree

       -10
       /  \
      9   20
         /  \
        15   7

Output

42

Best path

15 → 20 → 7

## Thinking Process

First understand what happens at each node.

At node i:

fuel gained = node->val

We take contribution from:

left subtree
right subtree

But ignore negative contribution:

left_gain  = max(0, left)
right_gain = max(0, right)
Important observation

At every node, two roles exist:

Node acts as complete path (turning point)
Node acts as path going upward
Case 1: Node as turning point
current_path = node->val + left_gain + right_gain

Update answer:

maxSum = max(maxSum, current_path)
Case 2: Node returning to parent

We can only return one side:

node->val + max(left_gain, right_gain)
Key observation

If a subtree is negative → ignore it completely.

Algorithm

Use DFS

At each node:

1. compute left gain
2. compute right gain
3. update global max using full path
4. return best single path
Time Complexity

O(n)

Space Complexity

O(h)

## Real Engineering Problems 

1. Circuit Critical Path Analysis

In digital circuits:

• Each node = gate
• Each gate has delay

Mapping

node->val → delay
left/right → input paths
path sum → total delay

Used to find:

• maximum delay path in circuit

2. Dependency Trees in Systems

In large software systems:

• Components form dependency tree
• Each has impact value

Mapping

node->val → impact
path → dependency chain

Used to find:

• most critical chain

3. Execution / Call Stack Analysis

In program execution:

• Functions form call tree
• Each consumes resources

Mapping

node->val → memory/time usage
path → execution chain

Used to find:

• maximum resource usage path

4. Network Signal Propagation

In network trees:

• Nodes affect signal strength

Mapping

node->val → signal gain/loss
path → route

Used to find:

• strongest signal path