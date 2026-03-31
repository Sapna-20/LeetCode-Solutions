class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {

                // starting cell, nothing to add
                if (i == 0 && j == 0) continue;

                // first row → can only come from left
                else if (i == 0)
                    grid[i][j] += grid[i][j - 1];

                // first column → can only come from top
                else if (j == 0)
                    grid[i][j] += grid[i - 1][j];

                // rest → take minimum of top and left
                else
                    grid[i][j] += min(grid[i - 1][j], grid[i][j - 1]);
            }
        }

        // answer is stored in bottom-right cell
        return grid[m - 1][n - 1];
    }
};