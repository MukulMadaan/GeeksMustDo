#include <bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string A) {
    if(A.size() == 0) return 0;
    unordered_map<char, int> M;
    int res = 1;
    int j = 0;
    for(int i = 0; i < A.size(); i++){
        if(M.find(A[i]) != M.end()){
            while(A[j] != A[i]){
                M.erase(A[j]);
                j++;
            } 
            j++;
        }else
            M[A[i]];
        res = max(res, i - j + 1);
    }
    return res;
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    cout<<lengthOfLongestSubstring(s)<<endl;
;	}
	return 0;
}
