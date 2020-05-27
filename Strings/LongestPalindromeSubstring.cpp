//O(n^2) complexity

#include <bits/stdc++.h> 
using namespace std;  
  

void printSubStr( string str, int low, int high ) 
{ 
    for( int i = low; i <= high; ++i ) 
        cout << str[i]; 
} 

int longestPalSubstr(string str) 
{ 
    int n = str.length();  
  
    bool table[n][n]; 
      
    memset(table, 0, sizeof(table)); 
  
    int maxLength = 1; 
      
    for (int i = 0; i < n; ++i) 
        table[i][i] = true; 
  
    int start = 0; 
    for (int i = 0; i < n - 1; i++) { 
        if (str[i] == str[i+1]) { 
            table[i][i+1] = true; 
            if(start == 0) start = i;
            maxLength = 2; 
        } 
    } 
  
    for (int k = 3; k <= n; ++k){ 
        for (int i = 0; i < n - k + 1; ++i){ 
            int j = i + k - 1; 
            if (table[i+1][j-1] && str[i] == str[j]) {
                table[i][j] = true; 
  
                if (k > maxLength) { 
                    start = i; 
                    maxLength = k; 
                } 
            } 
        } 
    } 
    // cout<<start<<" ";
   printSubStr( str, start, start + maxLength - 1 ); 
   return maxLength; 
} 

int main() {
    int t;
    cin>>t;
    int res = 0;
    string ans = "";
    while(t--){
        string s;
        cin>>s;
        int n = s.length();
        longestPalSubstr(s);
        cout<<endl;
    }
	return 0;
}


//O(n^3) complexity

#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s, int res){
    string ss = s;
    reverse(s.begin(), s.end());
    int n =  s.length();
    return (ss == s && n > res)? 1: 0;
}

int main() {
    int t;
    cin>>t;
    int res = 0;
    string ans = "";
    while(t--){
        string s;
        cin>>s;
        int n = s.length();
        for(int i = 0 ; i < n; i++){
            string help = "";
            for(int j = i ; j < n; j++){
                help += s[j];
                if(isPalindrome(help, res)){
                    res = help.length();
                    ans = help;
                }
            }
        }
        cout<<ans<<endl;
    }
	return 0;
}
