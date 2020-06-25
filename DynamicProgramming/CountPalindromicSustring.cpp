#include <bits/stdc++.h> 
using namespace std;  
  

int longestPalSubstr(string str) 
{ 
    int n = str.length();  
  
    bool table[n][n]; 
      
    memset(table, 0, sizeof(table)); 
  
    int palins = 0; 
      
    for (int i = 0; i < n; ++i) 
        table[i][i] = true; 
  
    for (int i = 0; i < n - 1; i++) { 
        if (str[i] == str[i + 1]) { 
            table[i][i + 1] = true; 
            palins++;
        } 
    } 
  
    for (int k = 3; k <= n; ++k){ 
        for (int i = 0; i < n - k + 1; ++i){ 
            int j = i + k - 1; 
            if (table[i + 1][j - 1] && str[i] == str[j]) {
                table[i][j] = true; 
                palins++;
            } 
        } 
    } 
   
   return palins;
} 

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        cout<<longestPalSubstr(s);
        cout<<endl;
    }
	return 0;
}
