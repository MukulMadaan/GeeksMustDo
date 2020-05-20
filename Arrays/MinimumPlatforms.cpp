//Code not working but will be good for better understanding

#include <bits/stdc++.h>
using namespace std;

int minimumPlatform(vector<int> a, vector<int> d){
    sort(a.begin(), a.end());
    sort(d.begin(), d.end());
    int res = 1;
    int j = 0;
    int count = 0;
    for(int i = 0; i < a.size() && j < a.size();){
        if(a[i] < d[j]) {
            count++;
            i++;
        } else {
            count--;
            j++;
        }
        // cout<<count<<" "<<res<<" ";
        res = max(res, count);
    }
    return res;
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> arrival;
	    vector<int> departure;
	    for(int i = 0; i < n; i++){
	        int x;
	        cin>>x;
	        arrival.push_back(x);
	       // cout<<arrival[i]<<" ";
	    }
	    for(int i = 0; i < n; i++){
	        int x;
	        cin>>x;
	        departure.push_back(x);
	   //     if(departure[i] < arrival[i])
			 //   departure[i] += 2400;
	    }
	    cout<<minimumPlatform(arrival, departure)<<endl;
	}
	return 0;
}
