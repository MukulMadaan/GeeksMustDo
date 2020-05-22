#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    long long int n;
	    cin>>n;
	    long long int sum = 0;
	    vector<int> arr;
	    for(int i = 0 ; i < n - 1; i++){
	        int x;
	        cin>>x;
	        sum += x;
	        arr.push_back(x);
	    }
	    long long int x = ((n) * (n  + 1))/2;
	    cout<<x - sum<<endl;
	    
	}
	return 0;
}
