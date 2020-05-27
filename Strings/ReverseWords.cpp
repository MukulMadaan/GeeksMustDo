#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int n = s.length();
	    reverse(s.begin(), s.end());
	    string help = "";
	    string res = "";
	    for(int i = 0 ; i < n; i++){
	        if(s[i] != '.') help += s[i];
	        else{
	            reverse(help.begin(), help.end());
	            res += help;
	            res += '.'; 
	            help = "";
	        }
	        if(i == n - 1){
	            reverse(help.begin(), help.end());
	            res += help;
	        }
	    }
	    cout<<res<<endl;
	}
	return 0;
}
