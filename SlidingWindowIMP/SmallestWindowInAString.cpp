#include <bits/stdc++.h>
using namespace std;

bool checkMap1(unordered_map<char, int> M){
    for(auto it = M.begin(); it != M.end(); it++){
        if(it->second <= 0) continue;
        else return false;
    }
    return true;
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    string s1,s2;
	    cin>>s1>>s2;
	    int n = s1.length();
	    int m = s2.length();
	    unordered_map<char, int> M;
	    for(int i = 0 ; i < m; i++){
	        M[s2[i]]++;
	    }
	    int res = n + 1;
	    string ans = "";
	    int j = 0;
	    int flag = 0;
	    for(int i = 0 ; i < n; i++){
	        if(M.find(s1[i]) != M.end()){
	            M[s1[i]]--;
	            while(checkMap1(M)) {
	                flag = 1;
	                if(M.find(s1[j]) != M.end()) M[s1[j]]++;
	                j++;
	            }
	            if(flag == 1){
	                if(i - (j - 1) + 1 < res){
	                    ans = "";
	                    for(int a = j - 1; a <= i; a++) ans += s1[a];
	                    res = i - (j - 1) + 1;
	                }
	                
	                flag = 0;
	            }
	        } 
	    }
	    if(res == n + 1) cout<<"-1";
	    cout<<ans;
	    cout<<endl;
	}
	return 0;
}
