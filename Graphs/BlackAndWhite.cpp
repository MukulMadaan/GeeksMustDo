#include <bits/stdc++.h>
using namespace std;
#define endll "\n"
#define pp pair<int,int>
#define fi first
#define se second
vector<pp> v={{2,1},{2,-1},{-2,1},{-2,-1},{1,2},{-1,2},{1,-2},{-1,-2}};

int issafe(int i,int j,int n,int m){
    if(i> = 0 && j>=0 && i < n && j < m){
        return 1;
    }
    return 0;
}

int f(int i, int j, int n, int m){
    int ans = 0;
    for(int k = 0;k < 8; k++){
        int a = v[k].fi;
        int b = v[k].se;
        if(issafe(i + a, j + b, n, m)){
            ans++;
        }
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int ans = (n * m - 1) * n * m;
        for(int i = 0;i < n; i++){
            for(int j = 0;j < m; j++){
                ans -= f(i, j, n, m);
            }
        }
        cout<<ans<<endll;
    }
    return 0;
}
