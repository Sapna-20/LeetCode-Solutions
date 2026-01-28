1class Solution {
2public:
3    int maxSubArray(vector<int>& nums) {
4        int currSum = nums[0];
5        int maxSum = nums[0];
6
7        for (int i = 1; i < nums.size(); i++) {
8            // either extend the previous subarray
9            // or start fresh from current element
10            currSum = max(nums[i], currSum + nums[i]);
11            maxSum = max(maxSum, currSum);
12        }
13
14        return maxSum;
15    }
16};
17