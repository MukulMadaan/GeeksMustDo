#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int n = s.length();
	    vector<int> dp(n, 1);
	    for(int i = 1; i < n ; i++){
	        for(int j = 0; j < i; j++){
	            if(s[i] - 'a' > s[j] - 'a') dp[i] = max(dp[j] + 1, dp[i]);
	        }
	    }
	     cout<<*max_element(dp.begin(), dp.end())<<endl;
	}
	return 0;
}
