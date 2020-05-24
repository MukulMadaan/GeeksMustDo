#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    	cin.tie(NULL);
	int t;
	cin>>t;
	int n;
	while(t--){
	    cin>>n;
	    vector<int> arr;
	    for(int i = 0 ; i < n; i++){
	        int x;
	        cin>>x;
	        arr.push_back(x);
	    }
	    int m;
	    cin>>m;
	    sort(arr.begin(), arr.end());
	    int res = INT_MAX;
	    for(int i = 0 ; i <= n - m; i++){
	        int x = arr[i + m - 1] - arr[i];
	        res = min(res, x);
	    }
	    cout<<res<<endl;
	}
	return 0;
}
