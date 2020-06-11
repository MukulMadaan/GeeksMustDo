#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int r,c;
	    cin>>r>>c;
	    int arr[r][c];
	    for(int i = 0 ; i < r; i++){
	        for(int j = 0 ; j < c; j++){
	            cin>>arr[i][j];
	        }
	    }
	    int res = 0;
	    int pos;
	    for(int i = 0 ; i < r; i++){
	        int lo = 0;
	        int hi = c - 1;
	        int mid;
	        while(lo <= hi){
	            mid = lo + (hi - lo) / 2; 
	            if(arr[i][mid] == 1) hi = mid - 1;
	            else lo = mid + 1;
	        }
	        if(c - lo > res) {
	            res = c -lo;
	            pos = i;
	        }
	    }
	    cout<<pos<<endl;
	}
	return 0;
}
