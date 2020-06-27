#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n],b[n],c[2*n],j=0;
        vector<int>v;
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
            c[j++]=a[i];
        }
        for(ll i=0; i<n; i++)
        {
            cin>>b[i];
            c[j++]=b[i];
        }
        sort(c,c+2*n);
        map<int,int>h;
        ll flag=0;
        for(int i=2*n-1;i>0; i--)
        {
            if(c[i]!=c[i-1] &&flag<n)
            {
                h[c[i]]++;
                flag++;
            }
        }
        if(flag<n)
            h[c[0]]++;
        for(ll i=0; i<n; i++)
            if(h.find(b[i])!=h.end())
            {
                cout<<b[i]<<" ";
                h.erase(b[i]);
            }
        for(ll i=0; i<n; i++)
            if(h.find(a[i])!=h.end())
            {
                cout<<a[i]<<" ";
                h.erase(a[i]);
            }
        cout<<endl;
    }
    return 0;
}
