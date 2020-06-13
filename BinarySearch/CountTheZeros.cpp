#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i = 0 ; i < n; i++) cin>>arr[i];
        int lo = 0 ;
        int hi = n - 1;
        while(lo <= hi){
            int mid = lo + (hi - lo)/2;
            if(arr[mid] == 0) hi = mid - 1;
            else lo = mid + 1;
        }
        if(lo != n) cout<<n - lo<<endl;
        else cout<<"0"<<endl;
    }
	return 0;
}
