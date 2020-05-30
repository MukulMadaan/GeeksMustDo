#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,m,target;
	    cin>>n>>m>>target;
	    unordered_map<int, int> M;
	    vector<int> arr(n);
	    for(int i = 0 ; i < n; i++){
	        cin>>arr[i];   
	    }
	    for(int i = 0 ; i < m; i++){
	        int x;
	        cin>>x;
	        M[x] = 1;    
	    }
	    int flag = 0;
	    string res = "";
	    for(int i = 0 ; i < n; i++){
	        int check = target - arr[i];
	        if(M[check] == 1){
	            res += to_string(arr[i]); res += " "; res += to_string(check); res += ", ";
	            flag = 1;
	        }
	    }
	    int p = res.length();
	    if(flag == 0) cout<<"-1";
	    else {
	        for(int i = 0; i < p - 2; i++){
	            cout<<res[i];
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
