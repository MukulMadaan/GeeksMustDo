#include<bits/stdc++.h>
using namespace std;
int kadane(int arr[],int n){
    int sum = 0;
    int max_sum = 0;
    for(int i = 0;i < n; i++){
        sum = max(arr[i],sum + arr[i]);
        max_sum = max(sum,max_sum);
    }
    return max_sum;
}

int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    int arr[n][m];
	    for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                 cin>>arr[i][j];
            }
        }
        int a[n];
        int ans = INT_MIN;
        for(int left = 0; left < m; left++){
            memset(a,0,sizeof(a));
            for(int right = left; right < m; right++){
                for(int i = 0; i < n; i++){
                    a[i] += arr[i][right];
                }
                ans = max(ans,kadane(a,n));
            }
        }
        cout<<ans<<endl;
	}
	return 0;
}
