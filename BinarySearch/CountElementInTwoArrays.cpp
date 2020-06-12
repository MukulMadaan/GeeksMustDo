vector<int> countEleLessThanOrEqual(int arr1[], int arr2[], 
                             int m, int n){
    sort(arr2, arr2 + n);
    int i = 0;
    int j = 0;
    int val = 0;
    vector<int> res;
    int count = 0;
    for(int i = 0; i < m; i++){
        int lo = 0;
        int hi = n - 1;
        while(lo <= hi){
            int mid = lo + (hi - lo)/2;
            if(arr2[mid] == arr1[i]) lo = mid + 1;    
            else if(arr2[mid] > arr1[i]) hi = mid - 1;
            else lo = mid + 1;
        }
        res.push_back(lo);
    }
    return res;
}
