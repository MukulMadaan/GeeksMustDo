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
	    int exor = 0;
	    for(int i = 0; i < N; i++){
	        cin>>arr[i];
	        exor ^= arr[i];
	    }
	    int idx = 0;
	    while(idx <= 31){
            if(exor & 1<<idx) break;
            idx++;
        }
        int a = 0;
        int b = 0;
        for(int i = 0; i < N; i++){
            if(arr[i] & 1<<idx) a ^= arr[i];
            else b ^= arr[i];
        }
	    cout<<min(a, b)<<" "<<max(b, a)<<" "<<endl;
	}
	return 0;
}
