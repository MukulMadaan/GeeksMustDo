#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    unsigned short n1,k;
	    cin>>n1>>k;
	    int n2 = n1;
	    while(k--){
	        int left = 0;
	        int right = 0;
	        if(n1 & 1<<15) left = 1;
	        if(n2 & 1<<0) right = pow(2, 15);
	        int rx = n2 >> 1;
	        rx += right;
	        int lx = n1 << 1;
	        lx += left;
	        n1 = lx;
	        n2 = rx;
	    }
	    cout<<n1<<endl<<n2<<endl;
	}
	return 0;
}
