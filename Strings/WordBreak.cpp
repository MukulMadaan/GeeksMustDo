#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    unordered_map<string, int> M;
	    for(int i = 0; i < n ;i++){
	        string s;
	        cin>>s;
	        M[s] = 1;
	    }
	    string s;
	    cin>>s;
	    string res = "";
	    for(int i = 0 ; i < s.length() ; i++){
	        res += s[i];
	        if(M.find(res) != M.end()){
	            res = "";
	        }
	    }
	    if(res == "") cout<<"1"<<endl;
	    else cout<<"0"<<endl;
	}
	return 0;
}
