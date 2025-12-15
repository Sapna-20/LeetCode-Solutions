1class Solution {
2public:
3    vector<int> spiralOrder(vector<vector<int>>& matrix) {
4        vector<int> result;
5
6        int rows = matrix.size();
7        int cols = matrix[0].size();
8
9        int top = 0, bottom = rows - 1;
10        int left = 0, right = cols - 1;
11
12        while (top <= bottom && left <= right) {
13
14            // 1. Left → Right (Top row)
15            for (int j = left; j <= right; j++)
16                result.push_back(matrix[top][j]);
17            top++;
18
19            // 2. Top → Bottom (Right column)
20            for (int i = top; i <= bottom; i++)
21                result.push_back(matrix[i][right]);
22            right--;
23
24            // 3. Right → Left (Bottom row)
25            if (top <= bottom) {
26                for (int j = right; j >= left; j--)
27                    result.push_back(matrix[bottom][j]);
28                bottom--;
29            }
30
31            // 4. Bottom → Top (Left column)
32            if (left <= right) {
33                for (int i = bottom; i >= top; i--)
34                    result.push_back(matrix[i][left]);
35                left++;
36            }
37        }
38
39        return result;
40    }
41};
42