#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    bool parity[n];
	    for(int i = 0; i < n; i++) {
	        cin>>arr[i];
	        parity[i] = false;
	    }
	    int missing = 0;
	    int repeated = 0;
	    for(int i = 0 ; i < n ; i++){
	        if(parity[arr[i] - 1] == false) parity[arr[i] - 1] = true;
	        else {
	            repeated = arr[i];
	        }
	    }
	    for(int i = 0 ; i < n ; i++){
	        if(parity[i] == false) missing = i + 1;
	    }
	    cout<<repeated<<" "<<missing<<endl;
	}
	return 0;
}
