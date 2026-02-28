1class Solution {
2public:
3    int searchInsert(vector<int>& nums, int target) {
4        int left = 0, right = nums.size() - 1;
5
6        while (left <= right) {
7            int mid = left + (right - left) / 2;
8
9            if (nums[mid] == target) return mid;
10            else if (nums[mid] < target) left = mid + 1;
11            else right = mid - 1;
12        }
13
14        return left; // insert position
15    }
16};
17