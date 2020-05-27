#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> arr;
	    for(int i = 0 ; i < n; i++){
	        int x;
	        cin>>x;
	        arr.push_back(x);
	    }
	    int val = arr[0];
	    int sum = 0;
	    int count = 0;
	    int res = 0;
	    for(int i = 1 ; i < n; i++){
	        if(arr[i] > val){
	            res += val * count - sum;
	            sum = 0;
	            val = arr[i];
	            count = 0;
	        }
	        sum += arr[i];
	        count++;
	    }
	    reverse(arr.begin(), arr.end());
	    val = arr[0];
	    int maybe = 0;
	    sum = 0;
	    count = 0 ;
	    for(int i = 1 ; i < n; i++){
	        if(arr[i] >= val){
	            maybe += val * count - sum;
	            sum = 0;
	            val = arr[i];
	            count = 0;
	        }
	        sum += arr[i];
	        count++;
	    }
	   // cout<<res<<" "<<maybe<<" ";
	    cout<<maybe + res<<endl;
	}
	return 0;
}
