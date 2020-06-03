https://www.geeksforgeeks.org/minimum-number-of-swaps-required-to-sort-an-array-set-2/?ref=rp

//if range of number is 1 to m - 1
int minSwaps(int arr[], int N){
    int res = 0;
    vector<bool> visited(N, false);
    for(int i = 0 ; i < N; i++){
        int pos = arr[i] - 1;
        int count = 0;
        while(visited[pos] == false){
            visited[pos] = true;
            pos = arr[pos] - 1;
            count++;
        }
        if(count != 0) res += count - 1;
    }
    return res;
}


//TLE Solution
int minSwaps(int arr[], int N){
    map<int, int> M;
    for(int i = 0; i < N; i++){
        M[arr[i]] = i;
    }
    int count = 0;
    auto it = M.begin();
    for(int i = 0 ; i < N; i++,it++){
        if(arr[i] != it->first){
            int temp = arr[i];
            swap(arr[i], arr[it->second]);
            M[temp] = it->second;
            M[it->first] = i;
            count++;
        } 
    }
    return count;
}
