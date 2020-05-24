#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string x;
	    cin>>x;
	    int res = -1;
	    int i = 0;
	    while(x[i] != NULL){
	       if(x[i] == '1') res = i; 
	       i++;
	    }
	    cout<<res<<endl;
	}
	return 0;
}
