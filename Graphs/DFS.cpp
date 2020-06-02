

//TLE

void DFS(int s, vector<int> g[], vector<int> visited, vector<int> &res){
    visited[s] = 1;
    res.push_back(s);
    for(int i = 0; i < g[s].size(); i++){
        if(!visited[g[s][i]]) DFS(g[s][i], g, visited, res);
    }
}
vector <int> dfs(vector<int> g[], int n)
{
    vector<int> res;
    vector<int> visited(n, 0);
    DFS(0, g, visited, res);
    return res;
}
