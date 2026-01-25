1class Solution {
2public:
3    int m, n;
4
5    bool dfs(vector<vector<char>>& board, string word, int i, int j, int k) {
6        // If all characters are found
7        if (k == word.length())
8            return true;
9
10        // Boundary + mismatch check
11        if (i < 0 || j < 0 || i >= m || j >= n || board[i][j] != word[k])
12            return false;
13
14        char temp = board[i][j];
15        board[i][j] = '#';  // mark visited
16
17        bool found =
18            dfs(board, word, i+1, j, k+1) ||
19            dfs(board, word, i-1, j, k+1) ||
20            dfs(board, word, i, j+1, k+1) ||
21            dfs(board, word, i, j-1, k+1);
22
23        board[i][j] = temp; // backtrack
24        return found;
25    }
26
27    bool exist(vector<vector<char>>& board, string word) {
28        m = board.size();
29        n = board[0].size();
30
31        for (int i = 0; i < m; i++) {
32            for (int j = 0; j < n; j++) {
33                if (dfs(board, word, i, j, 0))
34                    return true;
35            }
36        }
37        return false;
38    }
39};
40