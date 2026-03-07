# LeetCode 13 — Roman to Integer


## Problem Statement

In this problem, a Roman numeral string is given and the task is to convert it into a normal integer value.

Roman numerals use the following symbols.

I   = 1  
V   = 5  
X   = 10  
L   = 50  
C   = 100  
D   = 500  
M   = 1000  

Example conversions:

III → 3  
LVIII → 58  
MCMXCIV → 1994  

Usually Roman numerals are written from larger value to smaller value and the values are simply added.

Example:

VIII

5 + 1 + 1 + 1 = 8


But sometimes Roman numerals follow a subtraction rule where a smaller value appears before a larger value.

Example:

IV  → 5 − 1 = 4  
IX  → 10 − 1 = 9  
XL  → 50 − 10 = 40  
XC  → 100 − 10 = 90  

So the task is to read the Roman numeral string and convert it into its correct integer value.



## Thinking Process

The main idea is to observe how Roman numerals behave when reading them from left to right.

For every symbol we check the value of the next symbol.

Two situations can happen.

First situation:  
If the current symbol has a value greater than or equal to the next symbol, the value is added.

Example:

VI

V = 5  
I = 1  

Since 5 is greater than 1, both values are added.

5 + 1 = 6


Second situation:  
If the current symbol is smaller than the next symbol, then it represents subtraction.

Example:

IV

I = 1  
V = 5  

Since 1 is smaller than 5, we subtract.

5 − 1 = 4


Example walkthrough:

Roman numeral = MCMXCIV

Values of symbols:

M = 1000  
C = 100  
M = 1000  
X = 10  
C = 100  
I = 1  
V = 5  


Now compare each symbol with the next one.

M ≥ C  → add 1000  

C < M  → subtract 100  

M ≥ X  → add 1000  

X < C  → subtract 10  

C ≥ I  → add 100  

I < V  → subtract 1  

V      → add 5  


Final calculation:

1000 − 100 + 1000 − 10 + 100 − 1 + 5 = 1994


So the main idea is simple.

If the current value is smaller than the next value, subtract it.  
Otherwise add it.



## Real Engineering Problems Where This Concept Is Used


### Parsing Systems

In compilers or interpreters, characters are read sequentially and sometimes their meaning depends on the next character.

For example in programming languages:

<=  
>=  
==  

The parser reads one character and checks the next one to understand the correct operation.  
This is similar to how Roman numerals are evaluated by comparing neighboring symbols.



### Network Protocol Parsing

In networking, packet headers are parsed field by field.

Sometimes the meaning of a field depends on the next byte or flag in the packet.  
So the system reads data sequentially and uses the next value to decide how to interpret the current one.



### Log and Text Processing

Many systems that analyze logs or structured text read characters step by step and interpret them based on nearby characters.

For example while reading structured data formats or timestamps, the parser uses separators and neighboring values to understand the structure of the data.

This kind of sequential interpretation is conceptually similar to how Roman numerals are converted into integers.