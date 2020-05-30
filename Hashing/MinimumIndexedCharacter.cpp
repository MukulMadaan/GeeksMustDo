#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string s1,s2;
	    cin>>s1>>s2;
	    unordered_map<char, int> M;
	    for(int i = 0 ; i < s2.length(); i++){
	        M[s2[i]];
	    }
	    int i;
	    for(i = 0 ; i < s1.length(); i++){
	        if(M.find(s1[i]) != M.end()){
	            cout<<s1[i]<<endl;
	            break;
	        }
	    }
	    if(i == s1.length()) cout<<"$"<<endl;
	}
	return 0;
}
