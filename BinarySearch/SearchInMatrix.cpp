#include <iostream>
using namespace std;

int main() {
	int t,n,m,x,result;
	cin>>t;
	while(t--)
	{
	    result=0;
	    cin>>n>>m;
	    int mat[n][m];
	    
	    for(int i=0;i<n;i++)
	    for(int j=0;j<m;j++)
	    cin>>mat[i][j];
	    
	    cin>>x;
	    
	    for(int i=0;i<n;i++)
	    {
	        if(x >=mat[i][0] && x <= mat[i][m-1])
	        {
	            int low = 0,high = m-1, mid;
	            while(low <= high)
	            {
	                mid = low + ((high - low)/ 2);
	                if(mat[i][mid] == x)
	                {
	                    result = 1;
	                    break;
	                }
	                else if(mat[i][mid] < x)
	                low = mid + 1;
	                else
	                high = mid - 1;
	            }
	            if(result == 1)
	                break;
	        }
	    }
	    cout<<result<<endl;
	}
	return 0;
}
