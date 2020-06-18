#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int count = 1;
	    stack<pair<char, int>> st;
	    for(int i = 0 ; i < s.length(); i++){
	        if(s[i] == '(') {
	            st.push({s[i], count});
	            cout<<count++<<" ";
	        }
	        else if(s[i] == ')'){
	            auto a = st.top();
	            if(a.first == '(')
	            cout<<a.second<<" ";
	            st.pop();
	        }
	    }
	    cout<<endl;   
	}
	return 0;
}
