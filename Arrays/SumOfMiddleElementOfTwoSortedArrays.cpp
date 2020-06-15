#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr1[n];
	    int arr2[n];
	    for(int i = 0 ; i < n; i++){
	        cin>>arr1[i];
	    }
	    for(int i = 0 ; i < n; i++){
	        cin>>arr2[i];
	    }
	    int num = 0;
	    int dest1 = (2 * n - 1)/2;
	    int dest2 = dest1 + 1;
	    int i = 0; int j = 0;
	    int val = 0;
	    int res = 0;
	    while(i < n && j < n){
	        if(arr1[i] < arr2[j]){
	            val = arr1[i];
	            i++; 
	        } else{
	            val = arr2[j];
	            j++;
	        }
	        if(num == dest1 || num == dest2) res += val;
	        num++;
	    }
	    cout<<res<<endl;
	}
	return 0;
}
