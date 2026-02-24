1class Solution {
2public:
3    string longestCommonPrefix(vector<string>& strs) {
4    string first = strs[0];
5    string ans = "";
6
7    for (int i = 0; i < first.size(); i++) {
8        char ch = first[i];
9
10        for (int j = 1; j < strs.size(); j++) {
11            if (i >= strs[j].size() || strs[j][i] != ch) {
12                return ans;
13            }
14        }
15
16        ans += ch;
17    }
18
19    return ans;
20}
21
22};