#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	string s;
	cin.ignore();
	while(t--){
	    getline(cin, s);
	    vector<bool> arr(500);
	    int n = s.size();
	   // cout<<s<<" ";
	    for(int i = 0 ; i < n; i++){
	        int index = s[i]%500;
	       // cout<<s[i]<<" "<<index<<" ";
	        arr[index] = true;
	    }
	    for(int i = 0 ; i < n ; i++){
	        int index = s[i]%500;
	        if(arr[index] == true)cout<<s[i];
	        arr[index] = false;
	    }
	    cout<<endl;
	}
	return 0;
}
