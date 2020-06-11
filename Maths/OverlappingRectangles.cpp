#include<bits/stdc++.h> 
using namespace std;
struct Point 
{ 
	int x, y; 
}; 

// Returns true if two rectangles (l1, r1) and (l2, r2) overlap 
bool doOverlap(Point l1, Point r1, Point l2, Point r2) 
{ 
	// If one rectangle is on left side of other 
	if (l1.x > r2.x || l2.x > r1.x) 
		return false; 

	// If one rectangle is above other 
	if (l1.y < r2.y || l2.y < r1.y) 
		return false; 

	return true; 
} 


// Driver program to test above functions 
int main() 
{ 
    int t;cin>>t;
    while(t--){
        struct Point p1,q1,p2,q2;
        cin>>p1.x>>p1.y>>q1.x>>q1.y;
        cin>>p2.x>>p2.y>>q2.x>>q2.y;
        doOverlap(p1,q1,p2,q2)?cout<<"1\n":cout<<"0\n";
    }
	return 0; 
} 
