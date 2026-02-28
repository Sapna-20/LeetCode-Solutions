1class Solution {
2public:
3   int singleNumber(vector<int>& nums) {
4    int ans = 0;
5
6    for(int x : nums) {
7        ans = ans ^ x;   // cancel pairs
8    }
9
10    return ans;          // lonely number will remain
11}
12
13};