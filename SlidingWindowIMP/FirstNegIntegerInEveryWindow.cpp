#include<bits/stdc++.h>
using namespace std;
int main()
 {
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 int T;
	cin >> T;
	while(T--)
	{
	  int n,k;
	  cin >> n;
	  int arr[n];
	  queue <int> neg;
	  for(int i = 0; i < n; ++i)
	      cin >> arr[i];
	  cin >> k;
	  
	  for(int i = 0; i < k; ++i)
	      if(arr[i] < 0) neg.push(arr[i]);
	      
	  for(int i = k; i <= n - 1; ++i)
	  {
	      if(neg.size() != 0)
	      cout<<neg.front()<<" ";
	      else cout<<"0 ";
	      if(arr[i-k] < 0) neg.pop();
	      if(arr[i] < 0) neg.push(arr[i]);
	  }
	   if(neg.size() != 0)
	      cout<<neg.front()<<" ";
	      else cout<<"0 ";
	  cout<<"\n";
	}
	return 0;
}
