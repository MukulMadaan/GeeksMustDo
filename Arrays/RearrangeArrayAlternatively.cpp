#include <bits/stdc++.h>
using namespace std;

void rearrange(vector<long long int>& arr, int n) { 
    
     int mx_i = n - 1, mn_i = 0; 
  
    int mx_e = arr[n - 1] + 1; 
  
    for (int i = 0; i < n; i++) { 
        if (i % 2 == 0) { 
            arr[i] += ( arr[mx_i] % mx_e) * mx_e; 
            mx_i--; 
        } else { 
            arr[i] += ( arr[mn_i] % mx_e) * mx_e; 
            mn_i++; 
        } 
    } 
    for (int i = 0; i < n; i++) 
        arr[i] = arr[i] / mx_e; 
} 
  
int main() { 
    int t;
    cin>>t;
    int n; 
    while(t--){
        
        cin>>n;
        vector<long long int> arr;
        for (int i = 0; i < n; i++){
            int x;
            cin>>x;
            arr.push_back(x);
        } 
     rearrange(arr, n);        
    for (int i = 0; i < n; i++) 
        cout << arr[i] << " "; 
    cout<<endl;
    }

    return 0; 
} 
