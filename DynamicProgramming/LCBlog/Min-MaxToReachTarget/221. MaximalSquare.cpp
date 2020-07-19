class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        
        if (matrix.empty()) return 0;
        
        int m = matrix.size();
        int n = matrix[0].size();
        
        
        vector<vector<int>>v(m, vector<int>(n, 0));
        
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                v[i][j] = matrix[i][j]-'0';
            }
        }
        
        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                if (v[i][j])
                    v[i][j] += min(min(v[i-1][j], v[i-1][j-1]), v[i][j-1]);
            }
        }
        
        int mxval = INT_MIN;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                mxval = max(v[i][j], mxval);
            }
        }
        
        return mxval * mxval;
        
    }
};
