# LeetCode 58 — Length of Last Word

## Problem Statement

Given a string `s` consisting of words and spaces, return the length of the **last word** in the string.

A **word** is defined as a sequence of characters that does not contain spaces.

Important things to notice:

* The string may contain **multiple spaces between words**.
* The string may also contain **spaces at the end**.
* We only need the **length of the last word**, not the word itself.

Example:

Input:
`"Hello World"`

Output:
`5`

Explanation:
The last word is `"World"` and its length is `5`.

Another example:

Input:
`"   fly me   to   the moon  "`

Output:
`4`

Explanation:
The last word is `"moon"` and its length is `4`.

---

# Thinking Process

Instead of scanning the string from the beginning, it is easier to scan it **from the end**.

Reason:

Sometimes the string contains **extra spaces at the end**, and we don't want those to affect the result.

So the logic becomes very straightforward.

### Step 1 — Start from the end of the string

Initialize a pointer (index) at the last character.

```
int i = s.length() - 1;
```

Example:

```
"Hello World   "
               ↑
```

---

### Step 2 — Ignore trailing spaces

If there are spaces at the end, move the pointer left until we reach a character.

```
while(i >= 0 && s[i] == ' ')
{
    i--;
}
```

After skipping spaces:

```
Hello World
           ↑
```

Now the pointer is at the **last character of the last word**.

---

### Step 3 — Count the characters of the last word

Move left and keep counting characters until a space appears.

```
while(i >= 0 && s[i] != ' ')
{
    count++;
    i--;
}
```

Example movement:

```
Hello World
           ↑   count = 1
Hello World
          ↑    count = 2
Hello World
         ↑     count = 3
Hello World
        ↑      count = 4
Hello World
       ↑       count = 5
```

Now we hit a space, so we stop.

---

### Step 4 — Return the result

The value stored in `count` is the length of the last word.

```
return count;
```

---

# Complexity Analysis

Time Complexity

O(n)

In the worst case we scan the entire string once.

Space Complexity

O(1)

No extra memory is used.

---

# Real Engineering Usage

This same concept appears in many real systems where text needs to be parsed from the end.

### File Path Parsing

Example path:

```
/home/user/documents/report.pdf
```

To extract the file name, systems scan from the end until `/` appears.

Result:

```
report.pdf
```

---

### Command Line Argument Parsing

Example command:

```
git commit -m "initial commit"
```

Many command parsers identify the **last argument** by scanning from the end of the command string.

---

### Log Processing Systems

Example log entry:

```
2026-03-05 ERROR Database connection failed
```

Log processors sometimes extract the **last token or message segment** by scanning backward.

---

# Key Insight

The important realization in this problem is that we **do not need to store the last word**.

We only need its **length**.

So instead of using extra structures like stacks or splitting the string, we simply:

1. Start from the end
2. Skip spaces
3. Count characters until a space appears

This keeps the solution **simple, memory efficient, and fast**.
