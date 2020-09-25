vector<int> increasingSubsequence(vector<int> A){
    int n = A.size();
    vector<int> dp(n, 1);
    for(int i = 1 ; i < n; i++){
        for(int j = 0 ; j < i ; j++){
            if(A[i] > A[j]) dp[i] = max(dp[j] + 1, dp[i]);
        }
    }
    return dp;
}

int Solution::longestSubsequenceLength(const vector<int> &A) {
    if(A.size() == 0) return 0;
    vector<int> arr = A;
    vector<int> inc = increasingSubsequence(arr);
    reverse(arr.begin(), arr.end());
    vector<int> dec = increasingSubsequence(arr);
    reverse(dec.begin(), dec.end());
    for(int i = 0; i < inc.size(); i++) inc[i] += dec[i];
    return *max_element(inc.begin(), inc.end()) - 1;
}

