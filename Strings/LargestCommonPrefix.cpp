#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<string> s;
	    for(int i = 0 ; i < n ; i++){
	        string x;
	        cin>>x;
	        s.push_back(x);
	    }
	    string res = "";
	    int flag = 0;
	    int m = s[0].length();
	    for(int i = 0 ; i < m; i++){
	        int j;
	        for(j = 0; j < n - 1; j++){
	            if(s[j][i] != s[j + 1][i]){
	                if(res.length() == 0) cout<<"-1"<<endl;
	                else
	                cout<<res<<endl;
	                flag = 1;
	                break;
	            } 
	        }
	        if(flag == 1) break;
	        res += s[j][i];
	    }
	    if(flag == 0) cout<<res<<endl;
	}
	return 0;
}
