1class Solution {
2public:
3    int evalRPN(vector<string>& tokens) {
4        stack<int> st;
5
6        for (string token : tokens) {
7
8            // If token is an operator
9            if (token == "+" || token == "-" ||
10                token == "*" || token == "/") {
11
12                int b = st.top(); st.pop();   // second operand
13                int a = st.top(); st.pop();   // first operand
14
15                if (token == "+") st.push(a + b);
16                else if (token == "-") st.push(a - b);
17                else if (token == "*") st.push(a * b);
18                else st.push(a / b);           // truncates toward zero
19            }
20            // If token is a number
21            else {
22                st.push(stoi(token));
23            }
24        }
25
26        return st.top();   // final result
27    }
28};
29