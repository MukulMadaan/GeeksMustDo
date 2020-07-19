class Solution {
public:
    int minSteps(int n) {
        vector<int> dp(1500, INT_MAX);
        dp[0] = 0;
        dp[1] = 0;
        for(int i = 2; i <= n; i++){
            for(int j = 1; j < i/2 + 1; j++){
                if(j != 1 && i % j != 0) continue;
                dp[i] = min(dp[i], dp[j] + (i/j - 1) + 1); 
            }
        }
        return dp[n];
    }
};
