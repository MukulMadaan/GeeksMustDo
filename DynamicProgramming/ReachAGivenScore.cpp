#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int sum;
	    cin>>sum;
	    vector<int> arr(3);
	    arr[0] = 3; arr[1] = 5; arr[2] = 10;
	    int dp[4][sum + 1] = {0};
	    for(int i = 0 ; i <= sum; i++){
	        dp[0][i] = 0;
	    }
	    for(int i = 0; i <= 3; i++){
	        dp[i][0] = 1;
	    }
	    for(int i = 1; i <= 3; i++){
	        for(int j = 1; j <= sum ; j++){
	            if(j >= arr[i - 1]) dp[i][j] = dp[i][j - arr[i - 1]] + dp[i - 1][j];
	            else dp[i][j] = dp[i - 1][j];
	        }
	    }
	    cout<<dp[3][sum]<<endl;
	}
	return 0;
}
