// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
int spanningTree(int V, int E, vector<vector<int>> &graph);
// Driver code

int main() {
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int> > graph(V, vector<int>(V, INT_MAX));
        int i=0;
        while (i++<E) {
            int u, v, w;
            cin >> u >> v >> w;
            u--, v--;
            graph[u][v] = w;
            graph[v][u] = w;
        }

        cout << spanningTree(V, E, graph) << endl;
    }
    return 0;
}
// } Driver Code Ends


// Function to construct and print MST for
// a graph represented using adjacency
// matrix representation, with V vertices.
// graph[i][j] = weight if edge exits else INT_MAX
#define pii pair<int,int>
int spanningTree(int V, int E, vector<vector<int>> &graph) {
   
   vector<bool> vis(V);
   vector<int> key(V , INT_MAX);
   key[0] = 0;
   priority_queue<pii, vector<pii>, greater<pii>> pq;
   pq.push({0,0});
   
   int wt = 0;
   
   while(pq.size())
   {
       int x = pq.top().second;
       
       pq.pop();
       
       if(!vis[x]) {
            vis[x] = true;
            
            wt += key[x];
           
           for(int i = 0 ; i < V ; i++)
               if(!vis[i] && key[i] > graph[x][i]) {
                   key[i] = graph[x][i];
                   pq.push({key[i] , i});
               }
       }
   }
   return wt;
}
