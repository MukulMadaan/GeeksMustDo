#include <bits/stdc++.h>
using namespace std;

void dfs(int i, int j, int &res){
    if(i < 0 || j < 0) return;
    if(i == 0 && j == 0) res++;
    dfs(i - 1, j, res);
    dfs(i, j - 1, res);
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    int i,j;
	    cin>>i>>j;
	    int res = 0;
	    dfs(i, j, res);
	    cout<<res<<endl;
	}
	return 0;
}
