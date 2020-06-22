#include<bits/stdc++.h>
using namespace std;

bool compare(pair<int,int> &a, pair<int,int> &b){
    return abs(a.first-a.second) >  abs(b.first-b.second);
}
int main()
 {
     int t,n,x,y;
     cin>>t;
     while(t--){
         cin>>n;
         cin>>x;
         cin>>y;
         vector<int>v1(n);
         vector<int>v2(n);
         vector<pair<int,int>>vec;
         for(int i = 0; i < n; i++){
             cin>>v1[i];
         }
         for(int i = 0; i < n; i++){
             cin>>v2[i];
         }
         for(int i = 0; i < n; i++){
             vec.push_back(make_pair(v1[i],v2[i]));
         }
         sort(vec.begin(),vec.end(),compare);
         int ans = 0;
         for(int i = 0; i < n; i++){
             if(x && (vec[i].first >= vec[i].second || y == 0)){
                 ans += vec[i].first;
                 x--;
             }else if(y && (vec[i].first <= vec[i].second || x == 0)){
                 ans += vec[i].second;
                 y--;
             }
         }

         cout<<ans<<endl;
     }
	return 0;
}
