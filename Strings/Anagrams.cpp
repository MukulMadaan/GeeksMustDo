#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string s1,s2;
		cin >> s1 >> s2;
		int h[28] = {0},g[28] = {0};
		
		for(int i = 0; i < s1.size(); i++)
			h[s1[i] - 'a']++;
			
		for(int i = 0; i < s2.size(); i++)
			g[s2[i] - 'a']++;
			
		int flag = 1;
		
		for(int i = 0;i < 26; i++)
		{
			if(h[i] != g[i])
			{
				flag = 0;
				break;
			}
		}
		
		if(flag)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}
