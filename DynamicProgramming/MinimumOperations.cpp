#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> dp(n + 1, 0);
	    dp[0] = 0;
	    dp[1] = 1;
	    dp[2] = 2;
	    for(int i = 3 ; i <= n; i++){
	        if(i % 2 == 0) dp[i] = dp[i/2] + 1 ;
	        else dp[i] = dp[i - 1] + 1;
	    }
	    cout<<dp[n]<<endl;
	}
	return 0;
}
