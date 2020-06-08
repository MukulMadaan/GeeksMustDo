#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    unordered_map<string, int> M;
	    vector<string> s;
	    for(int i = 0 ; i < n; i++){
	        string s1;
	        cin>>s1;
	        s.push_back(s1);
	        M[s1]++;
	    }
	    int res = 0;
	    int ans = 0;
	    string str = "";
	    for(int i = 0 ; i < n; i++){
	        if(M[s[i]] >= res) {
	            res = max(res, M[s[i]]);
	            str = s[i];
	            M[s[i]] = 0;
	        }
	    }
	    cout<<str<<endl;
	}
	return 0;
}
