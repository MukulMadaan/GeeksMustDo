#include <bits/stdc++.h>
using namespace std;

int firstMissingPositive(vector<int>& nums) {
    int containsOne = 0;
    int n = nums.size();
    for(int i = 0;i < n ;i++){
        if(nums[i] == 1) containsOne = 1;
        else if(nums[i] <= 0 || nums[i] > n){
            nums[i] = 1;
        }
    }
    if(containsOne != 1) return 1;
    int ans = n + 1;
    for(int i = 0; i < n; i++){
        int x = abs(nums[i]);
        if(nums[x - 1] < 0) continue;
        nums[x - 1] = -1 * nums[x - 1];
    }
    for(int i = 0 ; i < n; i++){
        if(nums[i] > 0) return i + 1;
    }
    return ans;
} 
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> arr(n);
	    for(int i = 0 ; i < n; i++){
	        cin>>arr[i];
	    }
	    cout<<firstMissingPositive(arr)<<endl;
	}
	return 0;
}
