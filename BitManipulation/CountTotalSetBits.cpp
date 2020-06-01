#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int res = 0;
	    for(int i = 1 ; i <= n; i++){
	        int count = 0;
	        while(count <= 31){
	            if(i & 1<<count) res++;
	            count++;
	        }
	    }
	    cout<<res<<endl;
	}
	return 0;
}
