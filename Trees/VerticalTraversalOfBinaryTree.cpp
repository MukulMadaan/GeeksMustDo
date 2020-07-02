void topView(struct Node *root)
{
    if(!root) return;
    map<int, int> M;
    queue<pair<Node *,int>>q;
    q.push({root,0});
    while(!q.empty()){
        Node *temp = q.front().first;
        int hd = q.front().second;
        if(M.find(hd) == M.end()) M[hd] = temp->data;
        q.pop();
        if(temp->left){
            q.push({temp->left,hd - 1});
        }
        if(temp->right){
            q.push({temp->right,hd + 1});
        }
    }
    for(auto it = M.begin(); it != M.end(); it++){
        cout<<it->second<<" ";
    }
    return;
}
