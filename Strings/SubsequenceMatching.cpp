#include <bits/stdc++.h>
using namespace std;

bool subMatching (string s, int n){
    
    unordered_map<string , int> M;
    M["R"] = 1;
    M["RY"] = 2;
    M["RYY"] = 3;
    string check = "";
    for(int i = 0; i < n; ){
        check += s[i];
        // cout<<check<<" ";
        if(M.find(check) != M.end()){
            i++;
        } else{
            if(check.size() == 1) return false;
            check.clear();
        }
    }
    return true;
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    (subMatching(s, s.length()))?cout<<"YES":cout<<"NO";
	    cout<<endl;
	}
	return 0;
}
