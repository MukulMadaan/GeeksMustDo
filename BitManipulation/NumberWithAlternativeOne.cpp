#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    for(int i = 1; i < pow(2, n); i++){
	        int count = 0;
	        int flag = 0;
	        int val = -2;
	        while(count <= 31){
	            if(i & 1<<count){
	                if(count == val + 1){
	                    flag = 1;
	                    break;
	                }
	                val = count;
	            }
	            count++;
	        }
	        if(flag == 0) cout<<i<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
