# LeetCode 12 — Integer to Roman


## Problem Statement

In this problem, an integer number is given and the task is to convert that number into a Roman numeral.

Roman numerals use a fixed set of symbols.

I   = 1  
V   = 5  
X   = 10  
L   = 50  
C   = 100  
D   = 500  
M   = 1000  

For example:

3 becomes III  
58 becomes LVIII  
1994 becomes MCMXCIV  

Roman numerals also follow some subtraction rules. Instead of writing four same symbols, a smaller symbol is placed before a larger one.

4   becomes IV  
9   becomes IX  
40  becomes XL  
90  becomes XC  
400 becomes CD  
900 becomes CM  

So the problem simply asks to convert a normal integer (between 1 and 3999) into its correct Roman numeral form.



## Thinking Process

One thing to observe in Roman numerals is that the representation always starts from the largest value and then moves towards smaller values.

Because of this pattern, the number can be broken down using the important Roman values.

1000 → M  
900  → CM  
500  → D  
400  → CD  
100  → C  
90   → XC  
50   → L  
40   → XL  
10   → X  
9    → IX  
5    → V  
4    → IV  
1    → I  


The idea is simple.

Start checking from the largest value.

If the number is greater than or equal to that value, that Roman symbol is added and the value is subtracted from the number.

This continues until the number becomes zero.


Example:

Number = 1994

First the largest possible value is used.

1994 is greater than 1000  
so M is added.

Remaining number becomes 994.


Next, 994 is greater than 900  
so CM is added.

Remaining number becomes 94.


Next, 94 is greater than 90  
so XC is added.

Remaining number becomes 4.


Finally, 4 corresponds to IV.


So the final Roman numeral becomes

MCMXCIV


The important observation is that the representation is always built by using the largest possible value first and then moving step by step toward smaller values.



## Real Engineering Problems Where This Concept Is Used


### Cash Denomination Systems

When money is broken into currency notes, the system usually starts with the largest note.

For example, if the amount is 1370, the breakdown becomes

1000  
200  
100  
50  
20  

This reduces the number of notes and makes the transaction efficient. The idea is similar to choosing the largest Roman value first.



### Resource Allocation in Systems

In many systems, resources are allocated from the largest available unit and then smaller units are used for the remaining part.

For example, in storage systems or memory allocation, a large block may be assigned first and then smaller blocks are used for the leftover requirement.



### Video Streaming Quality Selection

In video streaming platforms, the system tries to select the highest possible video quality that the available bandwidth can support.

If the bandwidth cannot support the highest quality, the system moves to the next available level.

This decision process is also similar to selecting the largest possible value first and then moving downward.