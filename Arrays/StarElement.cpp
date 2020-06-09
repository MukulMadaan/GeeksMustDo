#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> arr(n);
	    vector<int> res;
	    for(int i = 0 ; i < n ; i++) cin>>arr[i];
	    int val = INT_MIN;
	    for(int i = n - 1; i >= 0; i--){
	        if(arr[i] > val) {
	            res.push_back(arr[i]);
	            val = arr[i];
	        }
	    }
	    int m = res.size() - 1;
	    for(int i = m; i >= 0; i--){
	        cout<<res[i]<<" ";
	    }
	    int count = 0;
	    for(int i = 0 ; i < n ; i++) {
	        if(arr[i] == res[m]) count++;
	    }
	    if(count == 1) cout<<endl<<res[m]<<endl;
	    else cout<<endl<<"-1"<<endl;
	    
	}
	return 0;
}
