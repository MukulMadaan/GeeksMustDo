#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i = 0 ; i < n ; i++) cin>>arr[i];
	    stack<int> s;
	    int val = arr[0];
	    for(int i = 0; i < n ; i++){
	        if(s.empty()){
	            s.push(arr[i]);
	            cout<<"-1 ";
	        }else if(s.top() <= arr[i]) {
	            cout<<s.top()<<" ";
	            s.push(arr[i]);
	        } else{
	            while(!s.empty() && s.top() >= arr[i]){
	                s.pop();
	            }
	            if(s.empty()) cout<<"-1 ";
	            else cout<<s.top()<<" ";
	            s.push(arr[i]);
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
