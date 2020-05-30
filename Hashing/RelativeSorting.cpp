#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    map<int, int> M;
	    for(int i = 0; i < n;i++){
	        int x;
	        cin>>x;
	        M[x]++;
	    }
	    for(int i = 0 ; i < m; i++){
	        int x;
	        cin>>x;
	        while(M[x]){
	            cout<<x<<" ";
	            M[x]--;
	        }
	    }
        for(auto it = M.begin(); it != M.end(); it++){
            while(it->second){
	            cout<<it->first<<" ";
	            it->second--;
	        }
        }	    
        cout<<endl;
	}
	return 0;
}
