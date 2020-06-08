#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
	    string s;
	    getline(cin, s);
	    string str = "";
	    for(int i = 0; i < s.length(); i++){
	        if(isalnum(s[i])) str += tolower(s[i]);
	    }
	    string check = str;
	    reverse(str.begin(), str.end());
	    if(check == str) cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}
	return 0;
}
