#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    vector<int> arr(61, 0);
	    int n;
	    cin>>n;
	    for(int i = 0; i < n; i++){
	        int x;
	        cin>>x;
	        arr[x]++;
	    }
	    map<int, vector<int>, greater <int>> M;
	    for(int i = 0; i < 61; i++){
	        if(arr[i] > 0) M[arr[i]].push_back(i);
	    }
	    for(auto it = M.begin(); it != M.end(); it++){
	        vector<int> v = it->second;
	        for(int i = 0 ; i < v.size(); i++){
	            int count = it->first;
	            while(count--){
	                cout<<v[i]<<" ";    
	            }
	            
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
