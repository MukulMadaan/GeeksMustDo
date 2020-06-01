#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,a,b;
	    cin>>n>>a>>b;
	    int count = 0;
	    int res = 0;
	    while(count <= 31){
	        int mul = ((n & 1<<count) == 0)? 0 : 1;
	        if(count + 1 >= a && count + 1  <= b) mul = (mul + 1) % 2;
	        res += pow(2, count) * mul;
	        count++;
	    }
	    cout<<res<<endl;
	}
	return 0;
}
