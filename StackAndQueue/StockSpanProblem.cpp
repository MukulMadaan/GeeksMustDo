#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int>v(n);
	    for(int i = 0; i < n; i++){
	        cin>>v[i];
	    }
	    stack<pair<int,int>>s;
	    s.push({v[0],0});
	    cout<<1<<" ";
	    for(int i = 1; i < n; i++){
	        if(v[i] < s.top().first){
	            cout<<i-s.top().second<<" ";
	            s.push({v[i],i});
	        }else{
	            while(!s.empty() && v[i] >= s.top().first){
	                s.pop();
	            }
	            if(s.empty()){
	                cout<<i+1<<" ";
	            }else{
	                cout<<i-s.top().second<<" ";
	            }
	            s.push({v[i],i});
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
