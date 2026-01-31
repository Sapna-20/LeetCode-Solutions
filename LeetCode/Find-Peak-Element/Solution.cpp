1class Solution {
2public:
3    int findPeakElement(vector<int>& nums)
4{
5    int left = 0;
6    int right = nums.size() - 1;
7
8    while (left < right)
9    {
10        int mid = (left + right) / 2;
11
12        // if next element is bigger,
13        // it means we are still climbing
14        if (nums[mid] < nums[mid + 1])
15        {
16            left = mid + 1;
17        }
18        else
19        {
20            // here slope is going down
21            // so peak is here or on left
22            right = mid;
23        }
24    }
25
26    // left == right
27    return left;
28}
29
30};