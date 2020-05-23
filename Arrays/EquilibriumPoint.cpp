#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int sum = 0;
	    vector<int> arr;
	    for(int i = 0; i < n; i++){
	        int x;
	        cin>>x;
	        arr.push_back(x);
	        sum += x;
	    }
	    int flag = 0;
	    int preSum = 0;
	    for(int i = 0; i < n; i++){
	        sum -= arr[i];
	        if(preSum == sum){
	            cout<<i + 1<<endl;
	            flag = 1;
	            break;
	        }
	        preSum += arr[i];
	    }
	    if(flag == 0)cout<<"-1"<<endl;
	}
	return 0;
}
