1class Solution {
2public:
3    void gameOfLife(vector<vector<int>>& board) {
4        int rows = board.size();
5        int cols = board[0].size();
6
7        // Directions for 8 neighbors
8        int dx[8] = {-1,-1,-1,0,0,1,1,1};
9        int dy[8] = {-1,0,1,-1,1,-1,0,1};
10
11        // Step 1: Mark changes using temporary states
12        for (int i = 0; i < rows; i++) {
13            for (int j = 0; j < cols; j++) {
14
15                int liveNeighbors = 0;
16
17                // Count live neighbors
18                for (int d = 0; d < 8; d++) {
19                    int ni = i + dx[d];
20                    int nj = j + dy[d];
21
22                    if (ni >= 0 && ni < rows && nj >= 0 && nj < cols) {
23                        if (board[ni][nj] == 1 || board[ni][nj] == -1)
24                            liveNeighbors++;
25                    }
26                }
27
28                // Apply rules
29                if (board[i][j] == 1) {
30                    if (liveNeighbors < 2 || liveNeighbors > 3)
31                        board[i][j] = -1;   // live → dead
32                }
33                else {
34                    if (liveNeighbors == 3)
35                        board[i][j] = 2;    // dead → live
36                }
37            }
38        }
39
40        // Step 2: Finalize the board
41        for (int i = 0; i < rows; i++) {
42            for (int j = 0; j < cols; j++) {
43                if (board[i][j] > 0)
44                    board[i][j] = 1;
45                else
46                    board[i][j] = 0;
47            }
48        }
49    }
50};
51