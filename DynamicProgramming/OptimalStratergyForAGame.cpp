#include <bits/stdc++.h>
using namespace std;

int dp[101][101];

int stratergy(int a[], int start, int end){
    if(start > end) return 0;
    if(start == end) return dp[start][end] = a[start];
    if(end - start == 1) return dp[start][end] = max(a[start], a[end]);
    if(dp[start][end] != -1) return dp[start][end];
    return dp[start][end] = max(a[start] + min(stratergy(a, start + 2, end), stratergy(a, start + 1, end - 1))
           , a[end] + min(stratergy(a, start, end - 2), stratergy(a, start + 1, end - 1)));
}
int main() {
    int t;
    cin>>t;
    while(t--){
        memset(dp,-1,sizeof(dp));
        int n;
        cin>>n;
        int a[n];
        for(int i = 0;i < n; i++) cin>>a[i];
        cout<<stratergy(a, 0, n - 1)<<endl; 
    }
    return 0;
}
