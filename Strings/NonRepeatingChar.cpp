#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    unordered_map<char, int> M;
	    for(int i = 0 ; i < n ; i++){
	        M[s[i]]++;
	    }
	    int flag = 0;
	    for(int i = 0 ; i < n ; i++){
	        if(M[s[i]] == 1){
	            cout<<s[i]<<endl;
	            flag = 1;
	            break;
	        }
	    }
	    if(flag == 0) cout<<"-1"<<endl;
	}
	return 0;
}
