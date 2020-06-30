#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    int pos = 0;
	    for(int i = 0; i < n ; i++){
	        cin>>arr[i];
	    }
	    int k;
	    cin>>k;
	    int res = n;
	    int count = 0;
	    for(int i = 0 ; i < n; i++){
	        if(arr[i] <= k) count++;
	    }
	    int swap = 0;
	    for(int i = 0; i < count; i++){
	        if(arr[i] <= k) swap++;
	    }
	    res = min(res, count - swap);
	    int j = 0;
	    for(int i = count; i < n; i++){
	        if(arr[j] <= k) swap--;
	        if(arr[i] <= k) swap++;
	        j++;
	        res = min(res, count - swap);
	    }
	    cout<<res<<endl;
	}
	return 0;
}

