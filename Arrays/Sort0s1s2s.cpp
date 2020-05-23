#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> arr;
	    for(int i = 0; i < n; i++){
	        int x;
	        cin>>x;
	        arr.push_back(x);
	    }
        int i = 0;
        int j = n - 1;
        while(i < j){
            if(arr[j] == 2) j--;
            else if(arr[i] != 2) i++;
            else swap(arr[i], arr[j]);
        }
        i = 0;
        while(i < j){
            if(arr[j] == 1) j--;
            else if(arr[i] == 0) i++;
            else swap(arr[i], arr[j]);
        }
        for(int i = 0; i < n; i++) cout<<arr[i]<<" ";
        cout<<endl;
	}
	return 0;
}
