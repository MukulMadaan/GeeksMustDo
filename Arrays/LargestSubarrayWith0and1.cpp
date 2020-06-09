int maxLen(int arr[], int N) {
    for(int i = 0; i < N; i++){
        if(arr[i] == 0) arr[i] = -1;
    }
    unordered_map<int, int> pre;
    int sum = 0;
    int res = 0;
    pre[0] = 0;
    for(int i = 0; i < N; i++){
        sum += arr[i];
        if(pre.find(sum) != pre.end()){
            res = max((i + 1) - pre[sum], res);
        } else{
            pre[sum] = i + 1;
        }
    }
    return res;
}
