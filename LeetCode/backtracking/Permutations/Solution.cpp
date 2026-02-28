1class Solution {
2public:
3    vector<vector<int>> result;
4
5    void backtrack(vector<int>& nums, vector<int>& temp, vector<bool>& used) {
6        // if temp has all numbers, save it
7        if (temp.size() == nums.size()) {
8            result.push_back(temp);
9            return;
10        }
11
12        for (int i = 0; i < nums.size(); i++) {
13            // if number already used, skip
14            if (used[i]) continue;
15
16            // choose
17            used[i] = true;
18            temp.push_back(nums[i]);
19
20            // explore
21            backtrack(nums, temp, used);
22
23            // undo (backtrack)
24            temp.pop_back();
25            used[i] = false;
26        }
27    }
28
29    vector<vector<int>> permute(vector<int>& nums) {
30        vector<int> temp;
31        vector<bool> used(nums.size(), false);
32        backtrack(nums, temp, used);
33        return result;
34    }
35};
36