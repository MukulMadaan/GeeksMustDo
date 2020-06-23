#include <bits/stdc++.h>
using namespace std;

void numberOfPaths(vector<int>adj[], int sv, int ev, bool *visited, int &count){
    if(sv == ev){
        count++;
        return;
    }
    visited[sv] = true;
    for(auto it = adj[sv].begin(); it != adj[sv].end(); ++it){
        if(!visited[*it]){
            numberOfPaths(adj, *it, ev, visited, count);
        }
    }
    visited[sv] = false;
    return;
}

int main()
{
	int t;
	cin>>t;
	while(t--){
	    int i,n,v,e;
	    cin>>v>>e;
	    vector<int>adj[v];
	    for(i=0;i<e;i++){
	        int a,b;
	        cin>>a>>b;
	        a = a - 1;
	        b = b - 1;
	        adj[a].push_back(b);
	    }
	    int sv,ev;
	    cin>>sv>>ev;
	    sv = sv - 1;
	    ev = ev - 1;
	    int count = 0;
	    bool *visited = new bool[v];
	    for(i=0;i<v;i++)
	        visited[i] = false;
	    numberOfPaths(adj, sv, ev, visited, count);
	    cout<<count<<endl;
	}
	return 0;
}
