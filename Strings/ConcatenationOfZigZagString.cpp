#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    int numRows;
	    cin>>numRows;
	    if(numRows <= 1)
	    {
	        cout<<s<<endl;
	        continue;
	    }
	    vector<string>ans(numRows);
	    int row = 0;
	    int step = 1;
	    for(int i = 0;i < s.size(); i++)
	    {
	        ans[row].push_back(s[i]);
	        if(row == 0)
	          step = 1;
	        if(row == numRows - 1)
	          step = -1;
	        row += step;
	    }
	    for(int i=0;i<ans.size();i++)
	    {
	        cout<<ans[i];
	    }
	    cout<<endl;
	}
	return 0;
}
