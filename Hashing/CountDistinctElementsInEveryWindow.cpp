vector <int> countDistinct (int A[], int n, int k) {
    unordered_map<int, int> M;
    vector<int> res;
    int pos = 0;
    if(n < k) return res;
    k -= 1;
    for(int i = 0; i < n; i++){
        M[A[i]]++;
        if(i == k){
            res.push_back(M.size());
            M[A[pos]]--;
            if(M[A[pos]] <= 0) M.erase(A[pos]);
            k++; pos++;
        }
    }
    return res;
}
