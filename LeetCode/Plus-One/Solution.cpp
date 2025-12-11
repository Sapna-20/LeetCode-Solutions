1class Solution {
2public:
3    vector<int> plusOne(vector<int>& digits) {
4    int n = digits.size();
5    
6    // Start from the last digit
7    for (int i = n - 1; i >= 0; i--) {
8        if (digits[i] < 9) {
9            digits[i]++;           // just add 1
10            return digits;         // no carry needed
11        }
12        digits[i] = 0;             // digit was 9 → becomes 0
13        // carry goes automatically to next loop step
14    }
15    
16    // If we reached here → all digits were 9
17    digits.insert(digits.begin(), 1); // add 1 at front
18    return digits;
19}
20
21};