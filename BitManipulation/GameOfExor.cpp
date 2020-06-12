#include<iostream>
#include<bits/stdc++.h>
#define MAX 1000
using namespace std;

int arr[MAX];

int getXoR(int n){
    if (n%2==0)
        return 0;
    int ans = 0;
    for (int i=0; i<n; i+=2)
            ans ^= arr[i];
    return ans;
}
void getArray(int n){
    int i = 0;
    while(i < n)
        cin >> arr[i++];
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        getArray(n);
        cout << getXoR(n) << endl;
    }
}
