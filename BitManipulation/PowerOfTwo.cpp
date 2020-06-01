//Not Working
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    long long n;
	    cin>>n;
	    int count = 0;
	    int res = 0;
	    while(count <= 63){
	        if(n & 1<<count) res++;
	        count++;
	    }
	    if(res == 1) cout<<"YES";
	    else cout<<"NO";
	    cout<<endl;
	}
	return 0;
}

//Working
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		LL n;
		cin >> n;
		if(n==0)
		{
		    cout << "NO"<<endl;
		    continue;
		}
		if(ceil(log2(n)) == floor(log2(n)))
			cout << "YES" <<endl;
		else
			cout << "NO" <<endl;
	}
}
