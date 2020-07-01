#include <bits/stdc++.h>
using namespace std;

int partition(vector<int>& stones) {
        int n = stones.size();
        int sum = 0;
        for(int i = 0; i < n; i++){
            sum += stones[i];
        }
        int dp[n + 1][sum + 1];
        for(int i = 0 ; i <= sum  ; i++) dp[0][i] = 0;
        for(int i = 0 ; i <= n ; i++) dp[i][0] = 1;
        
        for(int i = 1 ; i <= n; i++){
            for(int j = 1; j <= sum; j++){
                if(j >= stones[i - 1]) dp[i][j] = dp[i - 1][j - stones[i - 1]] || dp[i - 1][j];
                else dp[i][j] = dp[i - 1][j];
            }
        }
        int res = INT_MAX;
        for(int i = 1; i <= sum; i++){
            if(dp[n][i] == 1) res = min(res, abs(2 * i - sum)); 
        }
        return res;
    }
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> arr(n);
	    for(int i = 0 ; i < n ; i++) cin>>arr[i];
	    cout<<partition(arr)<<endl;
	}
	return 0;
}
