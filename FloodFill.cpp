#include <bits/stdc++.h>
using namespace std;

void floodFill(vector<vector<int>>& arr, int a, int b, int r,int c, int val, int oldVal){
    
    if(a >= r || a < 0 || b >= c || b < 0 ) return;
    if(arr[a][b] != oldVal) return;
    
    arr[a][b] = val;
    
    floodFill(arr, a + 1, b, r, c, val, oldVal);
    floodFill(arr, a - 1, b, r, c, val, oldVal);
    floodFill(arr, a, b + 1, r, c, val, oldVal);
    floodFill(arr, a, b - 1, r, c, val, oldVal);
    
    return;
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    int r,c;
	    cin>>r>>c;
	    vector<vector<int>> arr(r, vector<int>(c, 0));
	    for(int i = 0; i < r; i++){
	        for(int j = 0 ; j < c; j++){
	            cin>>arr[i][j];
	        }
	    }
	    int a,b;
	    cin>>a>>b;
	    int val;
	    cin>>val;
	    int oldVal = arr[a][b];
	    floodFill(arr, a, b, r, c, val, oldVal);
	    for(int i = 0; i < r; i++){
	        for(int j = 0 ; j < c; j++){
	            cout<<arr[i][j]<<" ";
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
