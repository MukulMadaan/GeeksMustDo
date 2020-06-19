typedef pair<int,pair<int,int>> pi;
int *mergeKArrays(int arr[][N], int k){
    int *res = new int[k*k];
    priority_queue<pi,vector<pi>,greater<pi>>pq;
    for(int i  = 0; i < k; i++){
        pq.push(make_pair(arr[i][0],make_pair(i,0)));
    }
    int j = 0;
    while(!pq.empty()){
        pi v = pq.top();
        pq.pop();
        res[j++] = v.first;
        int r = v.second.first;
        int c = v.second.second;
        if(c < k-1){
           pq.push(make_pair(arr[r][c+1],make_pair(r,c+1)));
        }
    }
    return res;
}
