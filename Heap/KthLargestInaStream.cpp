#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int k,n;
	    cin>>k>>n;
	    vector<int> arr(n);
	    priority_queue<int, vector<int>, greater<int>> pq;
	    for(int i = 0 ; i < n ; i ++){
	        cin>>arr[i];
	    }
	    for(int i = 0 ; i < n ; i ++){
	        if(pq.size() < k){
	            pq.push(arr[i]);
	            if(pq.size() == k) cout<<pq.top()<<" ";
	            else cout<<"-1"<<" ";
	        } else if(pq.size() == k){
                if(arr[i] <= pq.top()) cout<<pq.top()<<" ";
                else {
                    pq.pop();
                    pq.push(arr[i]);
                    cout<<pq.top()<<" ";
                } 
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
