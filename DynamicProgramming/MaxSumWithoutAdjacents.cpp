#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    int dp[n] = {0};
	    for(int i = 0; i < n; i++){
	        cin>>arr[i];
	    }
	    dp[0] = arr[0];
	    dp[1] = max(dp[0], arr[1]);
	    for(int i = 2 ; i < n; i++){
	        dp[i] = max(dp[i - 1], arr[i] + dp[i - 2]);
	    }
	    cout<<dp[n - 1]<<endl;
	}
	return 0;
}
