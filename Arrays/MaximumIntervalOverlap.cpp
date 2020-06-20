#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	while(n--){
	    int k;
	    cin>>k;
	    int a[k],b[k];
	    int maximum=0;
	    for(int i=0;i<k;i++)cin>>a[i];
	    for(int i=0;i<k;i++)cin>>b[i];
	    int res = 0;
	    int count = 0;
	    int val = 0;
	    sort(a, a + k);
	    sort(b, b + k);
	    int up = 0;
	    int down = 0;
	    while(up < k){
	        
	        if(a[up] <= b[down]){
	            count++;
	            up++;
	        } else{
	            count--;
	            down++;
	        }
	        if(count > res){
	            res = count;
	            val = a[up - 1];
	        }
	        
	    }
	    cout<<res<<" "<<val<<endl;
    }
    return 0;
}
