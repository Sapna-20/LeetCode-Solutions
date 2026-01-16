1class Solution {
2public:
3    int snakesAndLadders(vector<vector<int>>& board) {
4        int n = board.size();
5        vector<int> arr(n*n + 1, -1);
6
7        // Convert 2D board to 1D
8        int idx = 1;
9        bool leftToRight = true;
10
11        for (int i = n - 1; i >= 0; i--) {
12            if (leftToRight) {
13                for (int j = 0; j < n; j++)
14                    arr[idx++] = board[i][j];
15            } else {
16                for (int j = n - 1; j >= 0; j--)
17                    arr[idx++] = board[i][j];
18            }
19            leftToRight = !leftToRight;
20        }
21
22        queue<int> q;
23        vector<bool> visited(n*n + 1, false);
24
25        q.push(1);
26        visited[1] = true;
27        int steps = 0;
28
29        while (!q.empty()) {
30            int size = q.size();
31            while (size--) {
32                int curr = q.front();
33                q.pop();
34
35                if (curr == n*n) return steps;
36
37                for (int dice = 1; dice <= 6; dice++) {
38                    int next = curr + dice;
39                    if (next > n*n) break;
40
41                    if (arr[next] != -1)
42                        next = arr[next];
43
44                    if (!visited[next]) {
45                        visited[next] = true;
46                        q.push(next);
47                    }
48                }
49            }
50            steps++;
51        }
52
53        return -1;
54    }
55};
56