#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    map<int, int> M;
	    for(int i = 0; i < a; i++){
	        int x;
	        cin>>x;
	        M[x] = 1;
	    }
	    for(int i = 0; i < b; i++){
	        int x;
	        cin>>x;
	        if(M[x] == 1) M[x]++;
	    }
	    for(int i = 0; i < c; i++){
	        int x;
	        cin>>x;
	        if(M[x] == 2) M[x]++;
	    }
	    int flag = 0;
	    for(auto it = M.begin(); it != M.end(); it++){
	        if(it->second == 3) {
	            flag = 1;
	            cout<<it->first<<" ";
	        }
	    }
	    if(flag == 0) cout<<"-1";
	    cout<<endl;
	}
	return 0;
}
