#include <iostream>
using namespace std;

int countRotation(int arr[], int n)
{
    int lo=0;
    int hi=n-1;
    
    while(lo <= hi)
    {
        int mid = lo + (hi - lo)/2;
        if(arr[mid] < arr[hi]) hi = mid;
        else if(arr[mid] > arr[hi]) lo = mid + 1;
        else return arr[mid];
    }
    return arr[lo];
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    
	       cout<<countRotation(arr,n)<<endl;
	   
	}
	return 0;
}
