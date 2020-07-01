#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n, target;
	    cin>>n>>target;
	    int flag = 0;
	    int arr[n];
	    for(int i = 0 ; i < n ; i++) cin>>arr[i];
	    sort(arr, arr + n);
	    for(int i = 0 ; i < n - 3; i++){
	        if(i > 0 && arr[i] == arr[ i - 1]) continue;
	        for(int j = i + 1; j < n - 2; j++){
	            if(j > i + 1 && arr[j] == arr[j - 1]) continue;
	            int lo = j + 1;
	            int hi = n - 1;
	            while(lo < hi){
	                int sum = arr[i] + arr[j] + arr[lo] + arr[hi];
	                if(sum == target){
	                    flag = 1;
	                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[lo]<<" "<<arr[hi]<<" $";
	                    lo++;
	                    while(lo < hi && arr[lo] == arr[lo  - 1]) lo++;
	                }else if(sum > target){
	                    hi--;
	                } else
	                    lo++;
	            }
	        }
	    }
	    if(flag == 0)cout<<"-1";
	    cout<<endl;
	}
	return 0;
}
