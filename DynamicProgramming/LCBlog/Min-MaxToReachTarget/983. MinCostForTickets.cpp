class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& cost) {
        int n = days.size();
        int m = days[0];
        int mx = days[n - 1];
        vector<int>dp(500, 10000);
        
        for(int d = 0; d < m; d++) dp[d] = 0;
        int b = m - 1;
        for(int i = 0; i < n; i++){
            int val = days[i];
            dp[val] = min(dp[val], dp[b] + cost[0]);
            for(int d = 0; d < 7; d++) dp[val + d] = min(dp[val + d], dp[b] + cost[1]);
            for(int d = 0; d < 30; d++) dp[val + d] = min(dp[val + d], dp[b] + cost[2]);
            b = days[i];
        }
        for(int d = 0; d <= mx; d++) cout<<dp[d]<<" ";
        return dp[mx];
    }
};
