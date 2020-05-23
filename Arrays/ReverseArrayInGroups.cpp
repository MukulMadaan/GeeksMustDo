#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; 
	cin>>t;
	int n;
	int k;
	while(t--){
	    cin>>n>>k;
	    vector<int> arr;
	    for(int i = 0; i < n; i++){
	        int x;
	        cin>>x;
	        arr.push_back(x);
	    }
	    k = k - 1;
	    for(int i = 0 ; i < n; i++){
	        int lo = i;
	        int hi = i + k;
	        while(hi >= n) hi--; 
	        i = hi;
	        while(lo < hi){
	            swap(arr[lo++], arr[hi--]);
	        }
	    }
	    for(int i = 0 ; i < n; i++){
	        cout<<arr[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
