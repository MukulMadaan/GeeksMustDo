int maxDistance(int arr[], int n)
{
    int res = 0;
    unordered_map<int, int> M;
    for(int i = 0; i < n; i++){
        if(M.find(arr[i]) != M.end()){
            res = max(res, i - M[arr[i]]);
        } else {
            M[arr[i]] = i;
        }
    }
    return res;
}
