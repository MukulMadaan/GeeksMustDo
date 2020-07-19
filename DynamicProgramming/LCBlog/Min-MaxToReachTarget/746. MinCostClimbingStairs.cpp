class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        cost.push_back(0);
        int n = cost.size();
        int index;
        vector<int> DP(n);
        DP[0] = cost[0];
        DP[1] = cost[1];
        for(int i = 2; i < n; i++){
            int x = cost[i] + DP[i - 1];
            int y = cost[i] + DP[i - 2];
            DP[i] = min(x, y);
        }
        return DP[n - 1];
    }
};
