class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int DP[n][m];
        
        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++)
                DP[i][j] = 0;
        
        DP[0][0] = grid[0][0];
        
        for(int i = 1; i < n; i++){
            DP[i][0] = DP[i - 1][0] + grid[i][0];
        }
        
        for(int i = 1; i < m; i++){
            DP[0][i] = DP[0][i - 1] + grid[0][i];
        }
        
        for(int i = 1; i < n; i++){
            for(int j = 1; j < m ; j++){
                DP[i][j] = min(DP[i][j - 1], DP[i - 1][j]) + grid[i][j];
            }
        }
        return DP[n - 1][m - 1];
    }
};
