#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    stack<char> p;
	    int n = s.length();
	    for(int i = 0 ; i < n; i++){
	        if(p.empty()) p.push(s[i]);
	        else if(s[i] == ')' && p.top() == '(') p.pop();
	        else if(s[i] == '}' && p.top() == '{') p.pop();
	        else if(s[i] == ']' && p.top() == '[') p.pop();
	        else
	            p.push(s[i]);
	    }
	    if(p.empty()) cout<<"balanced"<<endl;
	    else cout<<"not balanced"<<endl;
	}
	return 0;
}
