#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            v.push_back(a);
        }
        
        int count = 0, ans = 0;
        for (int i = 0; i < 32; i++)
        {
            count = 0;
            for (int j = 0; j < n; j++)
            {
                if ((v[j] & (1 << i)) == false)
                {
                    count++;
                }
            }
            ans += (count * (n - count) * 2);
        }
        cout << ans << endl;
    }
    return 0;
}
