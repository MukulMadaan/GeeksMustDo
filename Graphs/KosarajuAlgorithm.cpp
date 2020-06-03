
void dfs(int s, vector<int> adj[], vector<int>& visited, stack<int>& st){
    visited[s] = 1;
    int val;
    for(int i = 0; i < adj[s].size(); i++){
        val = adj[s][i];
        if(visited[val] == 0){
            dfs(val, adj, visited, st);
        }
    }
    st.push(s);
}

void DFS(int s, vector<int> adj[], vector<int> visited){
    visited[s] = 1;
    int val;
    for(int i = 0; i < adj[s].size(); i++){
        val = adj[s][i];
        if(visited[val] == 0){
            DFS(val, adj, visited);
        }
    }
}

int kosaraju(int V, vector<int> adj[])
{
    vector<int> visited(V);
    stack<int> st;
    for(int i = 0 ; i < V; i++){
        if(visited[i] == 0) dfs(0, adj, visited, st);    
    }
    
    vector<int> transpose[V];
    for(int i = 0; i < V ; i++){
        for(int j = 0; j < adj[i].size(); j++){
            int val = adj[i][j];
            transpose[val].push_back(i);
        }
    }
    
    for(int i = 0; i < V; i++) visited[i] = 0;
    int res = 0;
    while(!st.empty()){
        int val = st.top();
        st.pop();
        if(visited[val] == 0){
            DFS(val, transpose, visited);
            res++;
        } 
    }
    return res;
}
