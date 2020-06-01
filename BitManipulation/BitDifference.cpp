#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    int count = 0;
	    int res = 0;
	    while(count <= 31){
	        if((a & 1<<count) != (b & 1<<count)) res++;
	        count++;
	    }
	    cout<<res<<endl;
	}
	return 0;
}
