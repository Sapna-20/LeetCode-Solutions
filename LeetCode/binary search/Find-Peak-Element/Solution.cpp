1class Solution {
2public:
3    int findPeakElement(vector<int>& nums)
4{
5    int l = 0, r = nums.size() - 1;
6
7    while (l < r)
8    {
9        int m = (l + r) / 2;
10
11        if (nums[m] < nums[m + 1])
12            l = m + 1;
13        else
14            r = m;
15    }
16    return l;
17}
18
19
20};