#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int r,c;
	    cin>>r>>c;
	    int a[r][c];
	    for(int i=0;i<r;i++)
	    {
	        for(int j=0;j<c;j++)
	        {
	            cin>>a[i][j];
	        }
	    }
	    queue<pair<int,int>>q;
	    int fresh_count=0;
	    for(int i=0;i<r;i++)
	    {
	        for(int j=0;j<c;j++)
	        {
	            if(a[i][j]==2)
	            {
	                q.push({i,j});
	            }
	            else if(a[i][j]==1)
	              fresh_count++;
	        }
	    }
	    
	    int x_dir[]={1,0,-1,0};
	     int y_dir[]={0,1,0,-1};
	     
	    int count=0;
	    bool flag;
	    while(!q.empty())
	    {
	        int size = q.size();
	         flag = false;
	        for(int p = 0;p < size; p++)
	        {
	            pair<int,int>temp=q.front();
	            q.pop();
	            int i = temp.first;
	            int j = temp.second;
	           
	            for(int k = 0;k < 4; k++)
	            {
	                int x_new = i + x_dir[k];
	                int y_new = j + y_dir[k];
	                if(x_new >= 0 && y_new >= 0 && x_new < r && y_new < c && a[x_new][y_new] == 1)
	                {
	                   a[x_new][y_new] = 2;
	                   q.push({x_new, y_new});
	                   fresh_count--;
	                   if(flag == false)
	                   {
	                      count++;
	                      flag=true;
	                   }

	                }
	            }
	        }
	    }
	    if(fresh_count == 0)
	        cout<<count<<endl;
	    else
	        cout<<"-1"<<endl;
	}
	return 0;
}
