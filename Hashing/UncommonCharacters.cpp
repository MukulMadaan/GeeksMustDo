#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string s1,s2;
	    cin>>s1>>s2;
	    unordered_map<char, int>M;
	    int n = s1.length();
	    for(int i = 0 ; i < n; i++){
	        M[s1[i]] = 1;
	    }
	    string res = "";
	    n = s2.length();
	    for(int i = 0 ; i < n; i++){
	        if(M.find(s2[i]) == M.end()) {
	            res += s2[i];
	            M[s2[i]] = 0;
	        } else{
	            M[s2[i]] = 0;
	        }
	    }
	    for(auto it = M.begin(); it != M.end(); it++){
	        if(it->second == 1) {
	            res += it->first;
	        }
	    }
	    sort(res.begin(), res.end());
	    cout<<res<<endl;
	}
	return 0;
}
