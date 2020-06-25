    #include <bits/stdc++.h>
    using namespace std;
     
    int main() {
    	int t;
    	cin >> t;
    	while(t--){
    	    int n;
    	    cin >> n;
    	    vector<string> arr(n);
    	    for(string& s : arr) cin >> s;
    	    vector<vector<int>> edge(n,vector<int>());
    	    for(int i=0;i<n;i++){
    	        for(int j=0;j<n;j++){
    	            if(i != j){
    	                if(arr[i][arr[i].size()-1] == arr[j][0])
    	                    edge[i].push_back(j);
    	            }
    	        }
    	    }
     
    	    vector<int> visited(n,0);
    	    queue<int> q;
    	    q.push(0);
    	    visited[0] = 1;
    	    int last = 0;
    	    while(!q.empty()){
    	        int cur = q.front();
    	        q.pop();
    	        for(int j : edge[cur]){
    	            if(!visited[j]){
    	                q.push(j);
    	                visited[j] = 1;
    	            }
     
    	        }
    	        if(q.size() == 0)
    	            last = cur;
    	    }
    	    bool ok = true;
    	    for(int i=0;i<n;i++)
    	        if(!visited[i]) ok = false;
    	    if(arr[last][arr[last].size()-1] != arr[0][0]) ok = false;
     
    	    cout << ok << endl;
    	}
    }
