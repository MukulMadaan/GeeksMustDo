#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
	    string s;
	    getline(cin, s);
	    int n = s.length();
	    unordered_map<char, int>M;
	    string res = "";
	    int flag = 0;
	    for(int i = 0; i < n; i++){
	        
	    }
	    for(int i = 0 ; i < n; i++){
	        char c = tolower(s[i]);
	        if(M.find(c) != M.end()){
	            flag = 1;
	            if(M[c] == 0){
	                M[c]++;
	                res += s[i];
	            }else if(M[c] == 1){
	                M[c]--;
	            }
	        } else{
	            M[c]++;
	            res += s[i];
	        }
	    }
	    if(flag == 1) cout<<res<<endl;
	    else cout<<s<<endl;
	}
	return 0;
}
