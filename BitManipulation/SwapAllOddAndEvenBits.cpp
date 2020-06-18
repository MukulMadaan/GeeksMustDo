#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int i = 0;
	    int j = 1;
	    while(j <= 31){
	        if((n & 1<<i) != 0 && (n & 1<<j) != 0);
	        else if((n & 1<<i) == 0 && (n & 1<<j) == 0);
	        else if(n & 1<<i){
	            n |= 1<<j;
	            n &= ~(1 << i);
	        } else{
	            n |= 1<<i;
	            n &= ~(1 << j);
	        }
	        i += 2;
	        j += 2;
	    }
	    cout<<n<<endl;
	}
	return 0;
}
