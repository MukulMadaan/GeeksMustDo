#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int> v{1,2,5,10,20,50,100,200,500,2000};
	sort(v.rbegin(),v.rend());
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int cnt = 0;
	    for(int i = 0; n > 0 && i < 10;i++){
	        while(n >= v[i]){
	            n = n - v[i];
	            cout<<v[i]<<" ";
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
