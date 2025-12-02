1class Solution {
2public:
3    vector<string> summaryRanges(vector<int>& nums) {
4    vector<string> ans;
5    if (nums.empty()) return ans;
6
7    int start = nums[0];  // start of current range
8
9    for (int i = 1; i <= nums.size(); i++) {
10
11        // break condition: end of array OR not consecutive
12        if (i == nums.size() || nums[i] != nums[i-1] + 1) {
13
14            int end = nums[i-1];  // end of range
15
16            // if only one number in range
17            if (start == end)
18                ans.push_back(to_string(start));
19            else
20                ans.push_back(to_string(start) + "->" + to_string(end));
21
22            // start new range
23            if (i < nums.size())
24                start = nums[i];
25        }
26    }
27
28    return ans;
29}
30
31};