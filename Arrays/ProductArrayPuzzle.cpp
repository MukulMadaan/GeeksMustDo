#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i = 0; i < n; i++) cin>>arr[i];
	    int pre[n + 1];
	    pre[0] = 1;
	    for(int i = 1; i <= n; i++) pre[i] = pre[i - 1] * arr[i - 1];
	    int post[n + 1];
	    post[n] = 1;
	    for(int i = n - 1; i >= 0; i--){
	        post[i] = post[i + 1] * arr[i];
	    }
	    for(int i = 1 ; i <= n; i++){
	        cout<<pre[i - 1] * post[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
