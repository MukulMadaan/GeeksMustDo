#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
	int t, n;
	cin >> t;
	while(t--) {
	    cin >> n;
	    vector <ll> arr(n), ans(n);
	    
	    for(int i = 0; i < n; i++)
	            cin >> arr[i];
	    stack <ll> s;
	    for(int i = n-1; i >= 0; i--) {
	        while(!s.empty() && arr[i] >= s.top())
	            s.pop();
	        ans[i] = s.empty() ? -1 : s.top();
	        s.push(arr[i]);
	    }
	    
	    for(int i = 0; i < n; i++)
	        cout << ans[i] << " ";
	    cout << endl;
	}
	return 0;
}
