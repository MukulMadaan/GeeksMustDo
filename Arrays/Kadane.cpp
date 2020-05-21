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
	    int currSum = 0;
	    int maxSum = 0;
	    int num = 0;
	    for(int i = 0; i < n; i++){
	        currSum += arr[i];
	        if(currSum > maxSum) maxSum = currSum;
	        if(currSum < 0) {
	            currSum = 0;
	            num++;
	        }
	    }
	    if(num == n) cout<<*max_element(arr.begin(), arr.end())<<endl;
	    else cout<<maxSum<<endl;
	}
	return 0;
}
