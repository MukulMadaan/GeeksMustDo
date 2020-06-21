#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    unordered_map<int, int> M;
	    for(int i = 0; i < n; i++) cin>>arr[i];
	    int k;
	    cin>>k;
	    for(int i = 0; i < n; i++) {
	        int check = arr[i] % k;
	        int x = (check == 0)?0:k - check;
	        if(M.find(x) != M.end()){
	            M[x]--;
	            if(M[x] == 0) M.erase(x);
	        } else
	            M[check]++;
	    }
	    if(M.size() == 0) cout<<"True"<<endl;
	    else cout<<"False"<<endl;
	}
	return 0;
}
