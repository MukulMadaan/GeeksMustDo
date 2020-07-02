#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    unordered_map<char, int> M;
	    unordered_map<char, int> N;
	    int n = s.length();
	    for(int i = 0; i < n; i++) M[s[i]] = 1;
	    int count = M.size();
	    int len = 0;
	    int j = 0;
	    int res = n;
	    for(int i = 0 ; i < n ; i++){
	        N[s[i]]++;
	        if(N[s[i]] == 1) len++;
	        while(len == count){
	            res = min(res, i - j + 1);
	            N[s[j]]--;
	            if(N[s[j]] == 0) len--;
	            j++;
	        }
	        if(res == M.size())break;
	    }
	    cout<<res<<endl;
	}
	return 0;
}

//Optimized solution
#include<bits/stdc++.h>
using namespace std;
int solve(string s){
    int help[26] = {0};
    int distinct[26] = {0};
    int n = s.length();
    int count = 0;
    int len = 0;
    for(int i = 0; i < n; i++){
        if(distinct[s[i]-'a'] == 0){
           distinct[s[i]-'a'] = 1;
           count++;
        }
    }
    int left = 0;
    int right = 0;
    int ans = INT_MAX;
    for(right = 0; right < n; right++){
        help[s[right]-'a']++;
        if(help[s[right]-'a'] == 1){
            len++;
        }
        while(len == count){
            ans = min(ans,right-left+1);
            help[s[left]-'a']--;
            if(help[s[left]-'a'] == 0){
                len--;
            }
            left++;
        }
    }
    return ans;
}
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    cout<<solve(s)<<endl;
	}
	return 0;
}
