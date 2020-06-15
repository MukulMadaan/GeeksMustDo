vector<int> duplicates(int arr[], int n) {
    vector<bool> count(n, false);
    vector<bool> visited(n, false);
    vector<int> res;
    for(int i = 0 ; i < n; i++){
        if(visited[arr[i]] == false && count[arr[i]] == true){
            visited[arr[i]] = true;
            res.push_back(arr[i]);    
        } 
        count[arr[i]] = true;
    }
    if(res.size() != 0) {
        sort(res.begin(), res.end());
        return res;
    }
    res.push_back(-1);
    return res;
}
