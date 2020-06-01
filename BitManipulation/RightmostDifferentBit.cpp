#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n1,n2;
	    cin>>n1>>n2;
	    int count = -1;
	    while(count++ <= 31){
	        if((n1 & 1<<count) != (n2 & 1<<count)) {
	            cout<<count + 1<<endl;
	            break;
	        }
	    }
	}
	return 0;
}
