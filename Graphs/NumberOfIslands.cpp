void dfs(vector<int> A[], int i, int j, int N, int M){
    
    if(i >= N || i < 0 || j >= M || j < 0) return;
    if(A[i][j] == 1) A[i][j] = 0;
    else return;
    
    dfs(A, i + 1, j, N, M);
    dfs(A, i - 1, j, N, M);
    dfs(A, i + 1, j + 1, N, M);
    dfs(A, i, j + 1, N, M);
    dfs(A, i, j - 1, N, M);
    dfs(A, i - 1, j - 1, N, M);
    dfs(A, i + 1, j - 1, N, M);
    dfs(A, i - 1, j + 1, N, M);
    
    return;
}
int findIslands(vector<int> A[], int N, int M) {
    int count = 0;
    for(int i = 0 ; i < N; i++){
        for(int j = 0; j < M; j++){
            if(A[i][j] == 1) {
                dfs(A, i, j, N, M);
                count++;
            }
        }
    }
    return count;
}
