#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string s;
	    string x;
	    cin>>s>>x;
	    string cmp = "";
	    int flag = 0;
	    for(int i = 0 ; i < s.length();i++){
	        cmp += s[(i + 2)%s.length()];
	    }
	    reverse(s.begin(), s.end());
	    swap(s[0], s[1]);
	    reverse(s.begin() + 2, s.end());
	    if(s == x) flag = 1;
	    if(cmp == x) flag = 1;
	    if(flag == 1) cout<<"1"<<endl;
	    else cout<<"0"<<endl;
	}
	return 0;
}
