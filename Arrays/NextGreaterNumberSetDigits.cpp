//Solution 1
#include <algorithm>
#include <string>
using namespace std;

int main() {
	//code
	int t;
	
	cin >> t;
	while(t-- > 0){
	    string s;
	    cin >> s;
	    if(next_permutation(s.begin(), s.end()))
	        cout << s << endl;
	    else
	        cout << "not possible" << endl;
	}
	return 0;
}

//Solution 2
#include<bits/stdc++.h>
using namespace std;

string solution(string str)
{
        int i;
	    for(i = str.length() - 1; i > 0; i--)
	    {
	        if(str[i] > str[i - 1]){
	              break;
	        }
	    }
	    if(i==0)
	      return "not possible";
	    
	    char prev = '9';
	    int idx = i;
	    for(int j = i;j < str.length(); j++)
	    {
	        if(str[j] > str[i-1] && str[j] <= prev){    
	               idx = j;
	               prev = str[j];
	           }
	    }
	   // cout<<str[i-1]<<endl;
	   // cout<<str[idx]<<endl;
	    swap(str[i - 1], str[idx]);
	    sort(str.begin() + i, str.end());
	    return str;
}
int main()
 {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin>>str;
	    cout<<solution(str)<<endl;
	}
	return 0;
}
