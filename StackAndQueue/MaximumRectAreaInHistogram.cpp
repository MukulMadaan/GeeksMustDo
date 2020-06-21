#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll arr[n];
        for(int i = 0 ; i < n; i++) cin>>arr[i];
        stack<ll> s;
        ll res = 0;
        ll i;
        for(i = 0 ; i < n; i++){
            if(s.empty() || arr[i] >= arr[s.top()]) {
                s.push(i);
                continue;
            }
            while(!s.empty() && arr[i] < arr[s.top()]){
                int x = arr[s.top()];
                // cout<<x<<" ";
                s.pop();
                if(s.empty()) res = max(res, x * i);
                else res = max(res, x * (i - s.top() - 1));
                
            }
            s.push(i);
        }
        while(!s.empty()){
                int x = arr[s.top()];
                s.pop();
                if(s.empty()) res = max(res, x * i);
                else res = max(res, x * (i - s.top() - 1));
                
        }
        cout<<res<<endl;
    }
return 0;
}
