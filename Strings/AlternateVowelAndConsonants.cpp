#include <bits/stdc++.h>
using namespace std;

bool isVowel(char c){
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') return true;
    return false;
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    int alphabet[26] = {0};
	    int vowel = 0;
	    int consonant = 0;
	    for(int i = 0 ; i < n; i++){
	        alphabet[s[i] - 'a']++;   
	    }
	    string res = "";
	    for(int i = 0 ; i < n; i++){
	        while(i % 2 == 0 && vowel <= 20){
	            if(isVowel(vowel + 'a') && alphabet[vowel] > 0) {
	                res += vowel + 'a';
	                alphabet[vowel]--;
	                break;
	            }else vowel++;
	        }
	        if(i < n && vowel > 20) {
	            res = "-1";
	            break;
	        }
	        while(i % 2 != 0 && consonant <= 26){
	            if(!isVowel(consonant + 'a') && alphabet[consonant] > 0) {
	                res += consonant + 'a';
	                alphabet[consonant]--;
	                break;
	            }else consonant++;
	        }
	        if(i < n && consonant > 26) {
	            res = "-1";
	            break;
	        }
	    }
	    cout<<res<<endl;
	}
	return 0;
}
