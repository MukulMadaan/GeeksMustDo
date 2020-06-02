#include <bits/stdc++.h>
using namespace std;

int numberOfPaths(int a, int b, int r, int c){
    if(a >= r || a < 0 || b >= c || b < 0) return 0;
    if(a == r - 1 && b == c - 1) return 1;
    
    return numberOfPaths(a + 1, b, r, c) + numberOfPaths(a, b + 1, r, c);
    
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int r,c;
        cin>>r>>c;
        cout<<numberOfPaths(0, 0, r, c)<<endl;
    }
	
	return 0;
}
