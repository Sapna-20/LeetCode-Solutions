1class Solution {
2public:
3    bool isValid(string s) {
4        stack<char> stack;
5        unordered_map<char, char> mapping = {{')', '('}, {']', '['}, {'}', '{'}};
6
7        for (char c : s) {
8            if (mapping.find(c) == mapping.end()) {
9                stack.push(c);
10            } else if (!stack.empty() && mapping[c] == stack.top()) {
11                stack.pop();
12            } else {
13                return false;
14            }
15        }
16
17        return stack.empty();        
18    }
19};