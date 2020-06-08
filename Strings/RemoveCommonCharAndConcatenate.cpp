#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string s1,s2;
	    cin>>s1>>s2;
	    unordered_set<char>s;
	    int n = s1.length();
	    int m = s2.length();
	    string res = "";
	    for(int i = 0 ; i < m ; i ++){
	        s.insert(s2[i]);
	    }
	    for(int i = 0 ; i < n ; i ++){
	        if(s.find(s1[i]) == s.end()) res += s1[i];
	    }
	    s.clear();
	    for(int i = 0 ; i < n ; i ++){
	        s.insert(s1[i]);
	    }
	    for(int i = 0 ; i < m ; i ++){
	        if(s.find(s2[i]) == s.end()) res += s2[i];
	    }
	    if(res.length()) cout<<res<<endl;
	    else cout<<"-1"<<endl;
	}
	return 0;
}
