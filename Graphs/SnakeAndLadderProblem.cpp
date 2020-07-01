#include<bits/stdc++.h>
using namespace std;
int bfs(vector<int>moves){
    vector<int>visit(30,0);
    queue<int>q;
    q.push(0);
    visit[0] = 1;
    int step = 0;
    while(!q.empty()){
        int size = q.size();
        while(size--){
            int v = q.front();
            if(v == 29){
                return step;
            }
            q.pop();
            for(int i = v + 1; i <= v + 6 && i < 30; i++){
                if(!visit[i]){
                    visit[i] = 1;
                    if(moves[i] == -1){
                        q.push(i);
                    }else{
                        q.push(moves[i]);
                    }
                }
            }
        }
        step++;
    }
    return -1;
}
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    vector<int>moves(30,-1);
	    int n;
	    cin>>n;
	    int a,b;
	    for(int i = 0; i < n; i++){
	        cin>>a>>b;
	        moves[a - 1] = b - 1;
	    }
	    cout<<bfs(moves)<<endl;
	}
	return 0;
}
