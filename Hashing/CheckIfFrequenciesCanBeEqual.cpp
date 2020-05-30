#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    unordered_map<char, int> M;
	    unordered_map<int, int> N;
	    int n = s.length();
	    for(int i = 0 ; i < n; i++ ){
	        M[s[i]]++;
	    }
	    
	    for(auto it = M.begin(); it != M.end(); it++){
	        N[it->second]++;
	    }
	    
	    if(N.size() > 2) cout<<"0"<<endl;
	    else if(N.size() == 1) cout<<"1"<<endl;
	    else {
	        auto it = N.begin();
	        int valCount = it->second;
	        int val = it->first;
	        int cal = (++it)->first;
	        int calCount = it->second;
	        if(valCount > 1 && calCount > 1) cout<<"0"<<endl;
	        else if(val == cal) cout<<"1"<<endl;
	        else if (val + 1 == cal || val - 1 == cal || val == cal - 1 || val == cal + 1){
	            cout<<"1"<<endl;
	        } else
	            cout<<"0"<<endl;
	    }
	    
	}
	    
	return 0;
}
