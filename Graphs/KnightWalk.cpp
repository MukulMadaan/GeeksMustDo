#include <bits/stdc++.h>
using namespace std;
#define pp pair<int,int>

vector<int> x={1,1,2,2,-1,-1,-2,-2};
vector<int> y={2,-2,-1,1,2,-2,-1,1};
int issafe(int i,int j,int n,int m){
    if(i > 0 && j > 0 && i <= n && j <= m) return 1;
    return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int m;cin>>m;
        int s1,s2,d1,d2;
        cin>>s1>>s2>>d1>>d2;
    
        int vis[n+1][m+1];
        memset(vis,0,sizeof(vis));
        queue<pp> q;
        q.push({s1,s2});
        int size = q.size();
        int res = 0;
        int flag = 0;
        while(!q.empty()){
            auto cord = q.front();
            q.pop();
            vis[cord.first][cord.second] = 1;
            if(cord.first == d1 && cord.second == d2) {
                flag = 1;
                break;
            }
            for(int i = 0 ; i < 8; i++){
                int f = x[i] + cord.first;
                int s = y[i] + cord.second;
                if(!vis[f][s] && issafe(f, s, n, m)) {
                    q.push({f, s});
                }
            }
            if(flag == 1) break;
            if(--size == 0){
                res++;
                size = q.size();
            }
        }
        cout<<(flag == 1 ? res : -1)<<endl;
    }
    return 0;
}
