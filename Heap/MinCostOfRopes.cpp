#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    priority_queue<ll, vector<ll>, greater<ll>> pq;
	    for(int i = 0 ; i < n; i++) cin>>arr[i];
	    for(int i = 0 ; i < n ; i++){
	        pq.push(arr[i]);
	    }
	    ll res = 0;
	    while(pq.size() != 1){
	        ll x = pq.top(); pq.pop();
	        ll y = pq.top(); pq.pop();
	        res += x + y;
	        pq.push(x + y);
	    }
	    cout<<res<<endl;
	}
	return 0;
}
