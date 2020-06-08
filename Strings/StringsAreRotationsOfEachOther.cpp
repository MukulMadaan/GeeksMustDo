#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string s1,s2;
	    cin>>s1>>s2;
	    int m = s1.length();
	    s1 += s1;
	    int n = s2.length();
	    int flag = 0;
	    if(n == m){
	        for(int i = 0; i < s1.length() - n + 1; i++){
	            if(s1.substr(i, n) == s2){
	                cout<<"1"<<endl;
	                flag = 1;
	                break;
	            } 
	        }
	    }
	    if(flag == 0) cout<<"0"<<endl;
	}
	return 0;
}
