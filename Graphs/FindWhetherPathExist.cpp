#include <bits/stdc++.h>
using namespace std;

int check(vector<vector<int>> arr, int n, int ii, int jj, vector<vector<bool>> visited){
    if(ii >= n || ii < 0 || jj >= n || jj < 0) return 0;
    else if(visited[ii][jj] == true) return 0;
    else if(arr[ii][jj] == 3 || arr[ii][jj] == 2) return 1; 
    return 0;
}

bool bfs(vector<vector<int>> arr, int n, int ii, int jj){
    vector<vector<bool>> visited(n, vector<bool> (n, false));
    queue<pair<int, int>> q;
    q.push({ii, jj});
    int a[] = {0, 1, -1, 0};
    int b[] = {1, 0, 0, -1};
    while(!q.empty()){
        auto p = q.front();
        q.pop();
        int x = p.first;
        int y = p.second;
        // cout<<x<<" "<<y<<" ";
        visited[x][y] = true;
        for(int i = 0 ; i < 4; i++){
            if(check(arr, n, x + a[i], y + b[i], visited)){
                if(arr[x + a[i]][y + b[i]] == 2) return true;
                q.push({x + a[i], y + b[i]});
            }
        }
    }
    return false;
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<vector<int>> arr(n, vector<int>(n , 0));
	    for(int i = 0;i < n; i++){
	        for(int j = 0 ; j < n; j++){
	            cin>>arr[i][j];
	        }
	    }
	    bool ans = false;
	    for(int i = 0; i < n; i++){
	        for(int j = 0 ; j < n; j++){
	            if(arr[i][j] == 1) ans = ans || bfs(arr, n, i, j);
	        }
	    }
	    if(ans) cout<<"1"<<endl;
	    else cout<<"0"<<endl;
	}
	return 0;
}
