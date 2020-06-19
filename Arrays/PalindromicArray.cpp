#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i = 0 ; i < n; i++) cin>>arr[i];
	    int lo = 0;
	    int hi = n - 1;
	    int res = 0;
	    while(lo < hi){
	        if(arr[lo] == arr[hi]) {
	            lo++;
	            hi--;
	            continue;
	        } else if(arr[lo] < arr[hi]){
	            arr[lo + 1] += arr[lo];
	            lo++;
	        } else{
	            arr[hi - 1] += arr[hi];
	            hi--;
	        }
	        res++;
	    }
	    cout<<res<<endl;
	}
	return 0;
}
