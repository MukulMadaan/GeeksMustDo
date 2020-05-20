#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; 
	cin>>t;
	int n;
	int target;
	while(t--){
	    cin>>n;
	    cin>>target;
	    int sum = 0;
	    int flag = 0;
	    unordered_map<int, int> M;
	    vector<int> arr;
	    M[sum] = 0;
	    for(int i = 0; i < n; i++){
	        int x;
	        cin>>x;
	        arr.push_back(x);
	    }
	    for(int i = 0 ; i < n; i++){
	        sum += arr[i];
	        int a = sum - target;
	        if(M.find(a) != M.end()){
	            cout<<M[a] + 1<<" "<<i + 1;
	            flag = 1;
	            break;
	        } else
	            M[sum] = i + 1;
	    }
	    if(flag == 0) cout<<-1;
	    cout<<endl;
	}
	return 0;
}
