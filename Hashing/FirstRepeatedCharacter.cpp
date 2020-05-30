#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        unordered_map<char, int> M;
        int n = s.length();
        int i;
        for( i = 0; i < n; i++){
            M[s[i]]++;
            if(M[s[i]] > 1) {
                cout<<s[i]<<endl;
                break;
            }
        }
        if(i == n) cout<<"-1"<<endl;
    }
	return 0;
}
