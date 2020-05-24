#include<bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
	    int n;
	    cin>>n;
	    vector<bool> map(1001);
	    for (int i = 0; i < n; i++) {
	        int x;
	        cin>>x;
	        map[x] = true;
	    }
	    bool ans = false;
	    for (int i = 1; i <= 1000; i++) {
	        if (ans) {break;}
	        for (int j = i + 1; j <= 1000; j++) {
	            if (!map[i] || !map[j]) {continue;}
	            int tri = i*i + j*j;
	            int root = (int)pow(tri, 0.5);
	            if (tri > root*root) {continue;}
	            if (map[root]) {ans = true; break;}
	        }
	    }
	    if (ans) {cout<<"Yes"<<endl;}
	        else {cout<<"No"<<endl;}
	}
	
	return 0;
}
