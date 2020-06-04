#include <bits/stdc++.h>
using namespace std;


int LCS(vector<vector<int>>& dp, string s1, string s2, int n, int m){
    if(n == 0 || m == 0) return 0;
    if(dp[n][m]  != -1) return dp[n][m]; 
    if(s1[n - 1] == s2[m - 1]) {
        dp[n][m] = 1 + LCS(dp, s1, s2, n - 1, m - 1);
        return dp[n][m];
    } else{
        dp[n][m] = max(LCS(dp, s1, s2, n - 1, m), LCS(dp, s1, s2, n, m - 1));
        return dp[n][m];
    }
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    vector<vector<int>> dp(150 , vector<int> (150, -1));
	    int n,m;
	    cin>>n>>m;
	    string s1,s2;
	    cin>>s1>>s2;
	    cout<<LCS(dp,s1, s2, n, m)<<endl;
	}
	return 0;
}
