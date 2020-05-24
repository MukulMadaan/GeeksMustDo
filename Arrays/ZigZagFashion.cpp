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
	    for(int i = 0 ; i  < n - 1 ; i ++){
	        if(i % 2 == 0){
	            if(arr[i] > arr[i + 1]) swap(arr[i], arr[i + 1]);
	        } else {
	            if(arr[i] < arr[i + 1]) swap(arr[i], arr[i + 1]);
	        }
	    }
	    for(int  i = 0; i < n; i++){
	        cout<<arr[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
