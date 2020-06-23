#include <bits/stdc++.h>
using namespace std;

unordered_map<string, int> M;
vector<string> res;
int maxLen = INT_MIN;
int x[] = {0,1,-1,0,1,-1,1,-1};
int y[] = {1,0,0,-1,1,-1,-1,1};

void dfs(vector<vector<char>> arr, vector<vector<int>> vis, int i, int j, int r, int c,string check){
    if(i >= r || i < 0 || j >= c || j < 0 || vis[i][j] == 1 || check.length() > maxLen) return;
    vis[i][j] = 1;
    check += arr[i][j];
    if(M.find(check) != M.end()) {
        res.push_back(check);
        M.erase(check);
    }
    for(int a = 0 ; a < 8; a++){
        dfs(arr, vis,i + x[a], j + y[a], r, c, check);
    }
    vis[i][j] = 0;
    return;
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    M.clear();
	    res.clear();
	    maxLen = INT_MIN;
	    int n;
	    cin>>n;
	    string s;
	    set<char> first;
	    for(int i = 0; i < n ; i++){
	        cin>>s;
	        int q = s.length();
	        maxLen = max(maxLen, q);
	        first.insert(s[0]); 
	        M[s]++;
	    }
	    int r,c;
	    cin>>r>>c;
	    vector<vector<char>> arr(r, vector<char>(c, 0));
	    vector<vector<int>> visited(r, vector<int>(c, 0));
	    for(int i = 0 ; i < r; i++){
	        for(int j = 0 ; j < c; j++){
	            cin>>arr[i][j];
	        }
	    }
	    for(int i = 0 ; i < r; i++){
	        for(int j = 0 ; j < c; j++){
	            char l = arr[i][j];
	            if(first.find(l) != first.end()){
	                dfs(arr,visited, i, j, r, c, "");
	            }
	                
	        }
	    }
	    sort(res.begin(), res.end());
	    if(res.size() == 0) cout<<"-1";
	    for(int i = 0 ; i < res.size(); i++) cout<<res[i]<<" ";
	    cout<<endl;
	}
	return 0;
}
