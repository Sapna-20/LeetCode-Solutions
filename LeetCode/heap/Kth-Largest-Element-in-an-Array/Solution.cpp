1class Solution {
2public:
3    int findKthLargest(vector<int>& nums, int k) {
4        sort(nums.begin(), nums.end());   // sort array
5        
6        int n = nums.size();
7        return nums[n - k];               // kth largest
8    }
9};
10