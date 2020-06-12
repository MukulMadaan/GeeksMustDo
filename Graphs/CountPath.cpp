#include<bits/stdc++.h>
using namespace std;
void dfs( vector<int>vec[],vector<int>&visit,int src,int dest,int &count){
    visit[src] = 1;
    if(src == dest){
        count++;
    }
    for(int i = 0; i < vec[src].size(); i++){
        if(!visit[vec[src][i]]){
            dfs(vec,visit,vec[src][i],dest,count);
        }
    }
    visit[src] = 0;
}
int main()
 {
     int t;
     int m,n;
     cin>>t;
     while(t--){
         cin>>m>>n;
         int u,v;
         int src,dest;
         vector<int>vec[m];
         for(int i = 0; i < n; i++){
             cin>>u;
             cin>>v;
             vec[u].push_back(v);
         }
         cin>>src;
         cin>>dest;
         int count = 0;
         vector<int>visit(m,0);
         dfs(vec,visit,src,dest,count);
         cout<<count<<endl;
     }
	return 0;
}
