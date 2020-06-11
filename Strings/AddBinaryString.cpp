#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string s1,s2;
	    cin>>s1>>s2;
	   // reverse(s1.begin(), s1.end());
	   // reverse(s2.begin(), s2.end());
	    int n = s1.length();
	    int m = s2.length();
	    char carry = '0';
	    char add;
	    string res = "";
	    int i = n - 1;
	    int j = m - 1;
	    char a;
	    char b;
	    while(i >= 0 || j >= 0){
	        if(i < 0) a = '0';
	        else a = s1[i];
	        if(j < 0) b = '0';
	        else b = s2[j];
	        add = a ^ b ^ carry;
	        carry = (a & b) | (carry&(a | b));
	       // cout<<carry<<" ";
	        res += add;
	        i--; j--;
	    }
	    if(carry == '1') res += carry;
	    reverse(res.begin(), res.end());
	    cout<<res<<endl;
	}
	return 0;
}
