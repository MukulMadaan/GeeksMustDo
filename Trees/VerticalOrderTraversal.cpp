vector<int> verticalOrder(Node *root)
{
   if(root == NULL)
        return {};
    map<int,vector<int>>m;
    queue<pair<Node *,int>>q;
    q.push({root,0});
    while(!q.empty()){
        Node *temp = q.front().first;
        int hd = q.front().second;
        m[hd].push_back(temp->data);
        q.pop();
        if(temp->left){
            q.push({temp->left,hd-1});
        }
        if(temp->right){
            q.push({temp->right,hd+1});
        }
    }
    vector<int>res;
    for(auto it = m.begin(); it != m.end(); it++){
        for(int i = 0; i < it->second.size(); i++){
            res.push_back(it->second[i]);
        }
    }
    return res;
}
