1class Solution {
2public:
3    vector<int> productExceptSelf(vector<int>& nums) {
4
5        int n = nums.size();
6
7        // This will store our final answer
8        vector<int> ans(n);
9
10        // Step 1: Left product
11        ans[0] = 1;
12
13        for(int i = 1; i < n; i++) {
14            ans[i] = ans[i-1] * nums[i-1];
15        }
16
17        // Step 2: Right product
18        int right = 1;
19
20        for(int i = n-1; i >= 0; i--) {
21            ans[i] = ans[i] * right;
22            right = right * nums[i];
23        }
24
25        return ans;
26    }
27};
28