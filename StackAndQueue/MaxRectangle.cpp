int MAH(vector<int>v,int n){
    stack<int>s;
	int ans = 0;
	vector<int>w(n);
	int area = 0;
	int i = 0;
	while(i < n){
	     if(s.empty() || v[s.top()] <= v[i]){
	         s.push(i++);
	     }else{
	         int t = s.top();
	         s.pop();
	         area = v[t] * (s.empty() ? i : (i-s.top()-1));
	         ans = max(area,ans);
	     } 
	}
	 while(!s.empty()){
	    int t = s.top();
        s.pop();
        area = v[t] * (s.empty() ? i : (i-s.top()-1));
	    ans = max(area,ans);
    }
    return ans;
}
int maxArea(int M[MAX][MAX], int n, int m) {
    vector<int>vec(m,0);
    int ans = INT_MIN;
    for(int i = 0; i< n;i++){
        for(int j = 0; j < m; j++){
            if(M[i][j] == 1){
                vec[j] += M[i][j];
            }else{
                vec[j] = 0;
            }
        }
        ans = max(ans,MAH(vec,m));
    }
    return ans;
}
