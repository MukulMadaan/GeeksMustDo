#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,w;
        cin>>n>>w;
        vector<vector<int>> dp(n + 1, vector<int>(w + 1 , 0));
        vector<int> profit(n);
        vector<int> weight(n);
        for(int i = 0; i < n; i++) cin>>profit[i];
        for(int i = 0; i < n; i++) cin>>weight[i];
        
        for (int i = 0; i <= n; i++){
	        for (int j = 0; j <= w; j++) {
                if (i == 0 || j == 0) dp[i][j] = 0;
	        }
        }
        
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= w; j++){
                
                if(j >= weight[i - 1]) 
                    dp[i][j] = max(dp[i - 1][j - weight[i - 1]] + profit[i - 1], dp[i - 1][j]);
                else 
                    dp[i][j] = dp[i - 1][j];
                cout<<dp[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<dp[n][w]<<endl;
    }
	
	return 0;
}
