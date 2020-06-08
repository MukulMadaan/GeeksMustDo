#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> arr(n);
	    for(int i = 0 ; i < n; i++)cin>>arr[i];
	    sort(arr.begin(), arr.end());
	    int val = arr[0];
	    int i = 0;
	    for( i = 1 ; i < n; i++){
	        while(arr[i] == arr[i - 1]) i++;
	        if(arr[i] != ++val) break;
	    }
	    if(i == n)cout<<"Yes"<<endl;
	    else cout<<"No"<<endl;
	}
	return 0;
}
