#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    int aa = min(a, b);
	    int bb = max(a, b);
	    int count = 0;
	    int idx = 0;
	    while(count <= 31){
	        if(aa & 1<<count) idx = count; 
	        count++;
	    }
	    int id = 0;
	    count = 0;
	    while(count <= 31){
	        if(bb & 1<<count) id = count; 
	        count++;
	    }
	    int val = id - idx;
	    while(val--) {
	        aa = aa << 1; 
	    }
	    int ans = aa ^ bb;
	    
	    cout<<ans<<endl;
	    
	}
	return 0;
}

//Easier Solution
