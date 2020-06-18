#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n, k;
	    cin>>n>>k;
	    int arr[n];
	    int sum = 0; 
	    for(int i = 0 ; i < n; i++) cin>>arr[i];
	    int j = 0;
	    int res = n;
	    for(int i = 0 ; i < n; i++){
	        sum += arr[i];
	        while(sum > k){
	            res = min(res, i - j + 1);
	            sum -= arr[j++];
	        }
	    }
	    cout<<res<<endl;
	}
	return 0;
}
