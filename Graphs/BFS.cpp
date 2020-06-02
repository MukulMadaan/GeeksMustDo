vector <int> bfs(vector<int> g[], int n) {
    queue<int> q;
    vector<int> res;
    vector<int> visited(n , 0);
    q.push(0);
    visited[0] = 1;
    while(!q.empty()){
        int i = q.front();
        res.push_back(i);
        q.pop();
        for(int j = 0; j < g[i].size(); j++){
            if(!visited[g[i][j]]) q.push(g[i][j]);
            visited[g[i][j]] = 1;
        }
    }
    return res;
}
