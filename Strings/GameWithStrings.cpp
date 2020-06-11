#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int k;
	    string str;
	    cin >> str >> k;
	    vector<int> count(26, 0);
	    
	    for(int i=0; i < str.length(); i++) {
	        count[str[i]-'a']++;
	    }
	    
	    sort(count.begin(), count.end(), greater<int>());
	    
	    int len = 0;
	    while(k--){
	        if(count[len + 1] > count[len]) sort(count.begin(), count.end(), greater<int>());
	        if(count[len] != 0){
	            count[len]--;
	        } 
	    }
	    int ans = 0;
	    for(int i = 0; i < 26; i++){
            ans += count[i] * count[i];
        }
        cout<<ans<<endl;
	}
	return 0;
}
