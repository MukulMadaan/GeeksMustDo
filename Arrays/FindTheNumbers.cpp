#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int N = 2 * n + 2;
	    vector<int>arr(N);
	    for(int i = 0; i < N; i++){
	        cin>>arr[i];
	    }
	    sort(arr.begin(), arr.end());
	    for(int i = 0 ; i < N ; ){
	        if(i != N - 1 && arr[i] == arr[i + 1]){
	             i += 2;
	             continue;
	        }
	        cout<<arr[i]<<" ";
	        i++;
	    }
	    cout<<endl;
	}
	return 0;
}
