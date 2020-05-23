#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> arr;
	    for(int i= 0; i < n; i++){
	        int x;
	        cin>>x;
	        arr.push_back(x);
	    }
	    vector<int> leaders;
	    int j = 0;
	    leaders.push_back(arr[n - 1]);
	    for(int i = n - 2; i >= 0; i--){
	        if(arr[i] > leaders[j]){
	            leaders.push_back(arr[i]);
	            j++;
	        }
	    }
	    reverse(leaders.begin(), leaders.end());
	    for(int i = 0; i <= j; i++) cout<<leaders[i];
	}
	return 0;
}
