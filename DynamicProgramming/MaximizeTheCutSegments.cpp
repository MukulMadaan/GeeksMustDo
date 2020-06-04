#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> arr(3);
	    cin>>arr[0]>>arr[1]>>arr[2];
	    vector<int> dp(n + 1, INT_MIN);
	    dp[0] = 0;
	    for(int i = 1 ; i <= n ; i++){
	        for(int j = 0; j < 3; j++){
	            if(i - arr[j] >= 0) 
	                dp[i] = max(dp[i], 1 + dp[i - arr[j]]);
	        }
	    }
	    dp[n] == INT_MIN ? cout<<"-1"<<endl :cout<<dp[n]<<endl;
	}
	return 0;
}
