bool dfs(int v,vector<int> adj[], vector<int>&visited,int s){
    if(visited[v] == 1){
       return true; 
    }
    if(visited[v] == 0){
        visited[v] = 1;
        for(int i = 0; i < adj[v].size(); i++){
            if( adj[v][i] != s && dfs(adj[v][i], adj, visited, v)){
                return true;
            }
        }
    }
    visited[v] = 2;
    return false;
}
bool isCyclic(vector<int> adj[], int V)
{
    vector<int>visited(V,0);
    for(int i = 0; i < V; i++){
        if(dfs(i, adj, visited, -1))
            return true;
    }
    return false;
}
