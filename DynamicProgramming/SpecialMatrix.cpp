#include <bits/stdc++.h>
using namespace std;
int mod = pow(10, 9) + 7;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int k;
	    int n,m;
	    cin>>n>>m;
	    cin>>k;
	    int arr[n][m];
	    arr[0][0] = 1;
	    while(k--){
	        int a,b;
	        cin>>a>>b;
	        arr[a - 1][b - 1] = -1;
	    }
	    for(int i = 0; i < n ; i++){
	        for(int j = 0; j < m; j++){
	            if(i == 0 && j == 0) continue;
	            if(arr[i][j] != -1){
	                if(i == 0) arr[i][j] = arr[i][j - 1];
	                else if(j == 0) arr[i][j] = arr[i - 1][j];
	                else {
	                    int x = (arr[i - 1][j] == -1) ? 0 : arr[i - 1][j];
	                    int y = (arr[i][ j - 1] == -1) ? 0 : arr[i][ j - 1];
	                    arr[i][j] = ( x % mod + y % mod) % mod; 
	                }
	            }
	            
	        }
	    }
	    cout<<arr[n - 1][m - 1] % mod<<endl;
	}
	return 0;
}
