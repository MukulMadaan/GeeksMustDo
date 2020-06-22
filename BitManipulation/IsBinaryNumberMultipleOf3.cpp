#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
	    string s;
	    cin >> s;
	    int sum=0;
	    int j=0;
	    for(int i=s.length()-1;i>=0;i--){
	        if(s[i] == '1'){
	            if(j % 2 == 0)
	                sum += 1;
	            else
	                sum += 2;
	        }
	        ++j;
	    }
	    if(sum % 3 == 0)
	        cout << "1\n";
	    else
	        cout << "0\n";
	}
	return 0;
}
