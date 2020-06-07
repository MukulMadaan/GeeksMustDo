#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    unordered_map<string, int> M;
	    while(n--){
	        string s;
	        cin>>s;
	        M[s]++;
	    }
	    int res = 0;
	    int ans = 0;
	    for(auto it = M.begin(); it != M.end(); it++){
	        res = max(res, it->second);
	    }
	    string str = "";
	    for(auto it = M.begin(); it != M.end(); it++){
	        if(it->second != res && it->second > ans) {
	            ans = max(ans, it->second);
	            str = it->first;
	        }
	    }
	    cout<<str<<endl;
	}
	return 0;
}
