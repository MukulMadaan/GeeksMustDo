#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int numb;
	    cin>>numb;
	    int count = -1;
	    if(numb == 0) cout<<"0"<<endl;
	    else{
    	    while(count++ <= 31){
    	        if(numb & 1<<count) {
    	            cout<<count + 1<<endl;
    	            break;
    	        }
    	    }
	    }
	}
	return 0;
}
