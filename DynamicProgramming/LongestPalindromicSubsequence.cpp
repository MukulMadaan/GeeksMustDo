#include <bits/stdc++.h>
using namespace std;

int LCS(string s1, string s2){
    int n = s1.length();
    int m = s2.length();
    int dp[n + 1][m + 1] = {0};
    for(int i = 0 ; i <= n; i++) {
        dp[i][0] = 0;
    }
    for(int i = 0 ; i <= m; i++) {
        dp[0][i] = 0;
    }
    for(int i = 1 ; i <= n; i++){
        for(int j = 1 ; j <= m; j++){
            if(s1[i - 1] == s2[j - 1])  dp[i][j] = 1 + dp[i - 1][j - 1];
            else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }
    return dp[n][m];
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    string s1;
	    cin>>s1;
	    string s2;
	    s2 = s1;
	    reverse(s1.begin(), s1.end());
	    cout<<LCS(s1, s2)<<endl;
	}
	return 0;
}
