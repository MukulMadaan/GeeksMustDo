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
	    vector<int> res;
	    int val = arr[0];
        int count = 1;
        int day = 0;
	    for(int i = 1 ; i < n; i++){
	        if(count == 1 && arr[i] < val) {
	            day = i;
	        } else if(count > 1 && arr[i] < val){
	            res.push_back(day);
	            res.push_back(i - 1);
	            day = i;
	            count = 1;
	        } else if(i == n - 1){
	            res.push_back(day);
	            res.push_back(i);
	        } else 
	            count++;    
	        val = arr[i];
	    }
	    if(res.size() == 0) cout<<"No Profit";
	    for(int i = 0; i < res.size() ;i += 2){
	        cout<<"("<<res[i]<<" "<<res[i + 1]<<")"<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
