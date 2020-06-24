#include <bits/stdc++.h>
using namespace std;

int dx[] = {2,2,-2,-2,-1,1,1,-1};
int dy[] = {-1,1,-1,1,-2,2,-2,2};
    
int is_valid(int r, int c, int m, int n){
    if(r >= 0 && r < m && c >= 0 && c < n){
        return 1;
    }
    return 0;
}

int bfs(int a,int b,int distx,int disty,int m,int n){
    if(a == distx && b == disty)
        return 0;
    vector<vector<int>>visit(m,vector<int>(n,0));
    queue<pair<int,int>>q;
    q.push({a,b});
    visit[a][b] = 1;
    
    int steps = 0;
    while(!q.empty()){
        int size = q.size();
        steps++;
        while(size--){
            pair<int,int>v = q.front();
            q.pop();
            for(int i = 0; i < 8; i++){
                int r = v.first + dx[i];
                int c = v.second + dy[i];
                if(r == distx && c == disty){
                    return steps;
                }
                if(is_valid(r,c,m,n) && visit[r][c] == 0){
                    q.push({r,c});
                    visit[r][c] = 1;
                }
            }
        }
    }
    return -1;
}

int main() {
	//code
	int t;
	int n;
	int x,y;
	int a,b;
	cin>>t;
	while(t--){
	    cin>>n;
	    cin>>a>>b;
	    cin>>x>>y;
	    cout<<bfs(a-1,b-1,x-1,y-1,n,n)<<endl;
	}
	return 0;
}
