#include <bits/stdc++.h>
#define endll "\n";
using namespace std;
vector<int> v1={1,-1,0,0};
vector<int> v2={0,0,-1,1};
int issafe(int i,int j,int n,int m){
    if(i<0||j<0||i>=n||j>=m){
        return 0;
    }
    return 1;
}
int ans1;
void dfs(vector<vector<int>> a,vector<vector<int>> &vis,int i,int j,int n,int m,int ans,int d1,int d2){
 if(a[i][j]){
    if(i==d1&&j==d2){
        ans1=min(ans,ans1);
        return;
    }
    vis[i][j]=1;
    for(int ii=0;ii<4;ii++){
        if(issafe(i+v1[ii],j+v2[ii],n,m)&&vis[i+v1[ii]][j+v2[ii]]==0){
            dfs(a,vis,i+v1[ii],j+v2[ii],n,m,ans+1,d1,d2);
        }
    }
 }
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        int n,m;cin>>n>>m;
        vector<vector<int>> a(n,vector<int> (m)),vis(n,vector<int> (m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
            }
        }
        int d1,d2;cin>>d1>>d2;
        ans1=INT_MAX;
        dfs(a,vis,0,0,n,m,0,d1,d2);
        cout<<(ans1==INT_MAX?-1:ans1)<<endll;
    }
    return 0;
}
