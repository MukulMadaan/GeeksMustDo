#include <bits/stdc++.h>
using namespace std;

void dfs(int i, int j, int n, int m, vector<vector<char>>& arr){
    if(i >= n || i < 0 || j >= m || j < 0) return;
    if(arr[i][j] == 'O') arr[i][j] = 'Y';
    else return;
    dfs(i + 1, j, n, m, arr);
    dfs(i - 1, j, n, m, arr);
    dfs(i, j + 1, n, m, arr);
    dfs(i, j - 1, n, m, arr);
    return;
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    vector<vector<char>> arr(n, vector<char>(m, 0));
	    for(int i = 0 ; i < n; i++){
	        for(int j = 0 ; j < m; j++){
	            cin>>arr[i][j];
	        }
	    }

	    for(int i = 0 ; i < n; i++){
	        for(int j = 0 ; j < m; j++){
	            if((i == 0 || j == m - 1 || j == 0 || i == n - 1 )){
	                if(arr[i][j] == 'O'){
	                   // cout<<i<<" "<<j<<" ";
	                    dfs(i, j, n , m , arr);
	                } 
	                    
	            }
	                
	        }
	    }
	    for(int i = 0 ; i < n; i++){
	        for(int j = 0 ; j < m; j++){
	            if(arr[i][j] == 'Y') cout<<"O ";
	            else cout<<"X ";
	           //cout<<arr[i][j]<<" ";
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
