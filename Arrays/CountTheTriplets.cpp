#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> arr;
	    for(int i = 0; i < n; i++){
	        int x; 
	        cin>>x;
	        arr.push_back(x);
	    }
	    sort(arr.rbegin(), arr.rend());
	    int res = 0;
	    for(int i  = 0 ; i < n - 2; i++){
	        int lo = i + 1;
	        int hi = n - 1;
	        while(lo < hi){
	            int add = arr[lo] + arr[hi];
	            if(add > arr[i]) lo++;
	            else if(add < arr[i]) hi--;
	            else {
	                res++;
	                lo++;
	                hi--;
	            }
	        }
	    }
	    if(res == 0)cout<<"-1"<<endl;
	    else cout<<res<<endl;
	}
	return 0;
}
