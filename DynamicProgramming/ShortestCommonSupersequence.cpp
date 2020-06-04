#include <bits/stdc++.h>
using namespace std;


int LCS(string s1, string s2, int n, int m){
    vector<vector<int>> dp(n + 1 , vector<int> (m + 1, 0));
    for(int i = 0 ; i < n; i++){
        for(int j = 0; j < m; j++){
            if(i == 0 || j == 0) dp[i][j] = 0;
        }
    }
    for(int i = 1 ; i <= n; i++){
        for(int j = 1 ; j <= m; j++){
            if(s1[i - 1] == s2[j - 1]) {
                dp[i][j] = 1 + dp[i - 1][j - 1];
            } else{
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }           
        }
    }
    return n + m - dp[n][m]; 
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    string s1,s2;
	    cin>>s1>>s2;
	     n = s1.size();
	     m = s2.size();
	    cout<<LCS(s1, s2, n, m)<<endl;
	}
	return 0;
}
