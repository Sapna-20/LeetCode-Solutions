# LeetCode 274 – H-Index

## Problem in Simple Words

A list of numbers is given.

Each number represents how many times one article or paper was cited.

Each number belongs to one article.

The task is:

- Find a number `h` such that  
- At least `h` articles have `h` or more citations  
- The remaining articles have `h` or fewer citations  

That number `h` is called the H-Index.

Example:

Citations: 3, 0, 6, 1, 5  

After sorting: 0, 1, 3, 5, 6  

Here:

3 articles have at least 3 citations  

So, H-Index = 3  

---

## How to Think About This Problem

This problem is about measuring **consistent performance**.

It does not focus on only one popular article.

It checks:

- How many articles are doing well regularly  
- How strong the overall work is  

Instead of asking:

"Which article is best?"

It asks:

"How many good articles are there?"

---

## Simple Thinking Process

### Step 1: Understand
- Each value shows citation count  
- Higher citation means more impact  
- Both quantity and quality matter  

### Step 2: Sort the Data

Arrange the list in increasing order.

This helps compare:

Number of articles  
with  
Number of citations

---

### Step 3: Check Balance

After sorting:

At each position, check:

How many articles are left on the right side.

If:

Citations ≥ Number of remaining articles

Then this value can be the H-index.

Choose the maximum such value.

---

## Connection with Social Media and Algorithms

This idea is similar to how platforms understand user interest.

Suppose similar videos appear in a feed.

If a person:

- Dislikes them many times  
- Skips them again and again  

The system understands:

"This user is not interested in this type of content."

So those videos are shown less.

The system does not decide from one action.

It looks for repeated behavior.

---

## H-Index and Recommendation Systems (Similar Thinking)

H-Index looks for:

Repeated success of articles.

Recommendation systems look for:

Repeated likes, dislikes, or skips.

Both focus on:

Consistency, not one-time events.

Example:

If many posts get good engagement regularly,
the creator is considered reliable.

If many videos are disliked regularly,
that category is reduced.

---

## Real-Life Tech Examples

### 1. Content Ranking Platforms

Blog and article platforms:

Analyze how many posts get regular attention.

They rank creators using balanced metrics.

H-index logic helps in this.

---

### 2. Research Analytics Systems

Academic platforms:

Use citation data to measure impact.

They calculate H-index automatically.

---

### 3. Creator Performance Dashboards

Social platforms:

Show how many posts perform well.

Not just one viral post.

This helps in creator evaluation.

---

### 4. Recommendation Engines

Video and music platforms:

Track repeated likes and dislikes.

They filter content based on patterns.

Similar logic to H-index.

---

### 5. Product Review Systems

E-commerce sites:

Check how many products get consistent good reviews.

They rank sellers using this data.

---

