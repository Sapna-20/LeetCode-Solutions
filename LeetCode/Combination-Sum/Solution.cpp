1class Solution {
2public:
3    vector<vector<int>> result;
4
5    void backtrack(vector<int>& candidates, int target, int index, vector<int>& current) {
6        // base case
7        if (target == 0) {
8            result.push_back(current);
9            return;
10        }
11
12        if (target < 0) return;
13
14        // try each candidate from current index
15        for (int i = index; i < candidates.size(); i++) {
16            current.push_back(candidates[i]);
17            backtrack(candidates, target - candidates[i], i, current); // i, not i+1
18            current.pop_back(); // undo
19        }
20    }
21
22    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
23        vector<int> current;
24        backtrack(candidates, target, 0, current);
25        return result;
26    }
27};
28