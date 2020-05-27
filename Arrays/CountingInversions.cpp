//Solution 1

#include <bits/stdc++.h>
using namespace std;

int merge(vector<int> arr, vector<int> temp, int left, int mid, int right){ 
    int i, j, k; 
    int inv_count = 0; 
  
    i = left; 
    j = mid; 
    k = left; 
    while ((i <= mid - 1) && (j <= right)) { 
        if (arr[i] <= arr[j]) { 
            temp[k++] = arr[i++]; 
        } 
        else { 
            temp[k++] = arr[j++]; 
  
            inv_count = inv_count + (mid - i); 
        } 
    } 
  
    while (i <= mid - 1) 
        temp[k++] = arr[i++]; 

    while (j <= right) 
        temp[k++] = arr[j++]; 
  
    for (i = left; i <= right; i++) 
        arr[i] = temp[i]; 
  
    return inv_count; 
} 


int _mergeSort(vector<int> arr, vector<int> temp, int left, int right) 
{ 
    int mid, inv_count = 0; 
    if (right > left) { 
        
        mid = (right + left) / 2; 
  
        inv_count += _mergeSort(arr, temp, left, mid); 
        inv_count += _mergeSort(arr, temp, mid + 1, right); 

        inv_count += merge(arr, temp, left, mid + 1, right); 
    } 
    return inv_count; 
} 


int mergeSort(vector<int> arr, int n){ 
    vector<int> temp(n); 
    return _mergeSort(arr, temp, 0, n - 1); 
} 

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> a;
	    for(int i = 0; i < n; i++){
	        int x;
	        cin>>x;
	        a.push_back(x);
	    }
	    cout<<mergeSort(a, n)<<endl;
	}
	return 0;
}

//Solution 2

#include <bits/stdc++.h>
using namespace std;

int getInvCount(vector<int> arr,int n) 
{ 
    multiset<int> set1; 
    set1.insert(arr[0]); 
  
    int invcount = 0; 
  
    multiset<int>::iterator itset1; 
  
    
    for (int i=1; i<n; i++) 
    { 
        set1.insert(arr[i]); 
 
        itset1 = set1.upper_bound(arr[i]); 
        
        invcount += distance(itset1, set1.end()); 
    } 
  
    return invcount; 
} 

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> a;
	    for(int i = 0; i < n; i++){
	        int x;
	        cin>>x;
	        a.push_back(x);
	    }
	    cout<<getInvCount(a, n)<<endl;
	}
	return 0;
}
