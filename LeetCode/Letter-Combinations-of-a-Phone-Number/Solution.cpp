1class Solution {
2public:
3    vector<string> result;
4
5    void backtrack(string &digits, int index, string current,
6                   vector<string> &mapping) {
7
8        if (index == digits.size()) {
9            result.push_back(current);
10            return;
11        }
12
13        string letters = mapping[digits[index] - '0'];
14
15        for (char ch : letters) {
16            backtrack(digits, index + 1, current + ch, mapping);
17        }
18    }
19
20    vector<string> letterCombinations(string digits) {
21        if (digits.empty()) return {};
22
23        vector<string> mapping = {
24            "", "", "abc", "def", "ghi", "jkl",
25            "mno", "pqrs", "tuv", "wxyz"
26        };
27
28        backtrack(digits, 0, "", mapping);
29        return result;
30    }
31};
32