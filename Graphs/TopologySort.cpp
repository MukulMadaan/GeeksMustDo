void topo(int i,int V, vector<int>& vis,vector<int> adj[], stack<int> &s) {
    vis[i] = 1;
    for(int j =0 ;j < adj[i].size(); j++){
        if(!vis[adj[i][j]])
            topo(adj[i][j], V, vis, adj, s);
    }
    s.push(i);
}

int* topoSort(int V, vector<int> adj[]){
    stack<int> s;
    vector<int> visited(V, 0);
    for(int i = 0;i < V; i++){
        if(!visited[i])
            topo(i, V, visited, adj, s);
    }
    int *a = ((int*) malloc (sizeof(int)*V));
    int j = 0;
    while(!s.empty()) {
        a[j] = s.top();
        s.pop();
        j++;
    }
    return a;
}
