#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int res = 1;
	    int n = s.length();
	    unordered_map<char, int> M;
	    for(int i = 0; i  < n ; ){
	        if(M.find(s[i]) != M.end()){
	            i = M[s[i]] + 1;
	            M.clear();
	        } else
	            M[s[i]] = i++;
	       	int len = M.size();
	        res = max(len, res);
	    }
	    cout<<res<<endl;
	}
	return 0;
}
