#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,m,target;
	    cin>>n>>m;
	    int sum1 = 0, sum2 = 0;
	    unordered_map<int, int> M;
	    vector<int> arr(n);
	    for(int i = 0 ; i < n; i++){
	        cin>>arr[i];
	        sum1 += arr[i];
	    }
	    for(int i = 0 ; i < m; i++){
	        int x;
	        cin>>x;
	        sum2 += x;
	        M[x] = 1;    
	    }
	    target = abs(sum1 - sum2);
	    int flag = 0;
	    for(int i = 0 ; i < n; i++){
	        int check = target - arr[i];
	        if(M[check] == 1){
	            cout<<"1";
	            flag = 1;
	            break;
	        }
	    }
	    if(flag == 0) cout<<"-1";
	    cout<<endl;
	}
	return 0;
}
