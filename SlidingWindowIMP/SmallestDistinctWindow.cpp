#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    unordered_map<char, int> M;
	    unordered_map<char, int> N;
	    int n = s.length();
	    for(int i = 0; i < n; i++) M[s[i]] = 1;
	    int count = M.size();
	    int len = 0;
	    int j = 0;
	    int res = n;
	    for(int i = 0 ; i < n ; i++){
	        N[s[i]]++;
	        if(N[s[i]] == 1) len++;
	        while(len == count){
	            res = min(res, i - j + 1);
	            N[s[j]]--;
	            if(N[s[j]] == 0) len--;
	            j++;
	        }
	        if(res == M.size())break;
	    }
	    cout<<res<<endl;
	}
	return 0;
}
