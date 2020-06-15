#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int n = s.length();
	    int count = 0;
	    for(int i = 0 ; i < n; i++){
	        if(s[i] == '1') count++;
	    }
	    cout<<((count) * (count - 1))/2<<endl;
	}
	return 0;
}
