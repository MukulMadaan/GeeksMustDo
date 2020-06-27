#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    long long int n;
	    cin>>n;
        string ans="";
        while(n){
            int rem = n % 26;
            if(rem){
                char c = rem - 1 + 'A';
                ans += c;
                n = n / 26;
            } else{
                ans += 'Z' ;
                n = n / 26 - 1;
            }
        }
        reverse(ans.begin(), ans.end());
        cout<<ans<<endl;
	}
	return 0;
}
