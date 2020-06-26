//Solution3 Without recStack Array
//Using Backtracking
bool dfs(int v,vector<int> adj[], vector<int> &visited, vector<int> &recStack){
    
    bool ans = false;
    visited[v] = 1;
    // recStack[v] = 1;
    
    for(int i = 0; i < adj[v].size(); i++){
        if(visited[adj[v][i]] == 0){
            ans = ans || dfs(adj[v][i], adj, visited, recStack);     
        } else
            return true;
        //else if(recStack[adj[v][i]])
            //return true;
    }
    visited[v] = 0;
    // recStack[v] = 0;
    return ans;
}
bool isCyclic(int V, vector<int> adj[])
{
    vector<int> visited(V, 0);
    vector<int> recStack(V, 0);
    for(int i = 0; i < V; i++){
        if(dfs(i,adj,visited, recStack))
            return true;
    }
    return false;
}

//Solution2
bool dfs(int v,vector<int> adj[], vector<int> &visited, vector<int> &recStack){
    
    bool ans = false;
    visited[v] = 1;
    recStack[v] = 1;
    
    for(int i = 0; i < adj[v].size(); i++){
        if(visited[adj[v][i]] == 0){
            ans = ans || dfs(adj[v][i], adj, visited, recStack);     
        } else if(recStack[adj[v][i]])
            return true;
    }
    recStack[v] = 0;
    return ans;
}
bool isCyclic(int V, vector<int> adj[])
{
    vector<int> visited(V, 0);
    vector<int> recStack(V, 0);
    for(int i = 0; i < V; i++){
        if(dfs(i,adj,visited, recStack))
            return true;
    }
    return false;
}

//Solution1
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
