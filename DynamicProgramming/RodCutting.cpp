#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<vector<int>> DP(n + 1 ,vector<int> (n + 1, 0));
	    int arr[n];
	    for(int i = 0 ; i < n; i++) cin>>arr[i];
        for (int i = 0; i <= n; i++){
    	    for (int l = 0; l <= n; l++) {
                    if (i == 0 || l == 0) DP[i][l] = 0;
    	    }
        }
        for (int i = 1; i <= n; i++){
    	    for (int l = 1; l <= n; l++) {
                if ( l >= i)
                    DP[i][l] = max(arr[i - 1] + DP[i][l - i],  DP[i - 1][l]);
                else
                    DP[i][l] = DP[i - 1][l];
    	    }
        }
         cout<<DP[n][n]<<endl;
	}
	return 0;
}
