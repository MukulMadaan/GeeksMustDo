#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<long long> arr(n);
	    vector<long long> srr(n);
	    unordered_map<long long, long long> M;
	    for(int i = 0 ; i < n; i++){
	        cin>>arr[i];
	        M[arr[i]]++;
	       // cout<<arr[i]<<M[arr[i]]<<" ";
	    }
	   // cout<<endl;
	    int count = 0;
	    for(int i = 0 ; i < n; i++){
	        cin>>srr[i];
	        M[srr[i]]--;
	        
	        if(M[srr[i]] == 0) {
	            count++;
	           // cout<<srr[i]<<M[srr[i]]<<" ";
	        }
	    }
	   // cout<<count<<" ";
	    if(count == M.size()) cout<<"1"<<endl;
	    else cout<<"0"<<endl;
	}
	return 0;
}
