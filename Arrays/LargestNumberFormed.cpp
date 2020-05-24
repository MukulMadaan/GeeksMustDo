#include <bits/stdc++.h>
using namespace std;

bool myComp(string a, string b){
    string aa = a + b;
    string bb = b + a;
    if(aa > bb) return true;
    else return false;
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string res = "";
	    vector<string> arr;
        for(int i = 0; i < n; i++){
	        string x;
	        cin>>x;
	        arr.push_back(x);
	    }
	    sort(arr.begin(), arr.end(), myComp);
	    for(int i = 0; i < n; i++) res += arr[i];
	    cout<<res<<endl;
	}
	return 0;
}
