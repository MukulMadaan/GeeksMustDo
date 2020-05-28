#include <bits/stdc++.h>
using namespace std;

int romanToInt(string A) {
    unordered_map<char, pair<int, int> > M;
    M['I'] = make_pair(1,1); M['V'] = make_pair(2,5); M['X'] = make_pair(3,10);
    M['L'] = make_pair(4,50); M['C'] = make_pair(5,100); M['D'] = make_pair(6,500);
    M['M'] = make_pair(7,1000);
    int res = 0;
    int priority = 8;
    for(int i = 0 ; i < A.length(); i++){
        auto doub = M[A[i]];
        int p;
        if(priority >= doub.first) {
            res += doub.second;
            p = doub.second;
        } else {
            res = res + doub.second - 2 * p;
        }
        priority = doub.first;
    }
    return res;
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    cout<<romanToInt(s)<<endl;
	}
	return 0;
}
