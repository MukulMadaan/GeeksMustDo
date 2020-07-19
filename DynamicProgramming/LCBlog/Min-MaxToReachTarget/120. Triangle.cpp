class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        for(int i=1;i<n;i++)
        {
            int t=triangle[i].size();
            for(int j=0;j<t;j++)
            {
                triangle[i][j]+=min(triangle[i-1][max(0,j-1)], triangle[i-1][min(t-2,j)]);  
            }
        }
        int ans=INT_MAX;
        for(int i=0;i<triangle[n-1].size();i++)
        {
            ans=min(ans, triangle[n-1][i]);
        }
        return ans;
    }
};
