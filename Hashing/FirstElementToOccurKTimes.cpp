#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n, k;
	    cin>>n>>k;
	    unordered_map<int, int> M;
	    vector<int> arr(n);
	    for(int i = 0 ; i < n ; i++){
	        cin>>arr[i];
	        M[arr[i]]++;
	    }
	    int i;
	    for(i = 0 ; i < n ; i++){
	        if(M[arr[i]] == k) {
	            cout<<arr[i]<<endl;
	            break;
	        }
	    }
	    if(i == n) cout<<"-1"<<endl;
	}
	return 0;
}
