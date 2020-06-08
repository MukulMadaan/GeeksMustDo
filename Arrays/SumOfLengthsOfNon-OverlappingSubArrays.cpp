#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n;
        vector<int> arr(n);
        for(int i = 0 ; i < n; i++){
            cin>>arr[i];
        }
        int count = 0;
        int res = 0;
        int flag = 0;
        cin>>k;
        for(int i = 0 ; i < n; i++){
            if(arr[i] < k) count++;
            else if(arr[i] == k) {
                flag = 1;
                count++;
            } else {
                if(flag == 1) res += count;
                count = 0;
                flag = 0;
            }
        }
        if(flag == 1) res += count;
        cout<<res<<endl;
    }
	return 0;
}
