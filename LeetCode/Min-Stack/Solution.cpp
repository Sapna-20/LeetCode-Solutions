1class MinStack {
2private:
3    stack<int> st;      // main stack
4    stack<int> minSt;   // min stack
5
6public:
7    MinStack() {}
8
9    void push(int val) {
10        st.push(val);
11
12        if (minSt.empty() || val <= minSt.top()) {
13            minSt.push(val);
14        } else {
15            minSt.push(minSt.top());
16        }
17    }
18
19    void pop() {
20        st.pop();
21        minSt.pop();
22    }
23
24    int top() {
25        return st.top();
26    }
27
28    int getMin() {
29        return minSt.top();
30    }
31};
32