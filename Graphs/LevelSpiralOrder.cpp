void printSpiral(Node *root)
{
    vector<int> res;
    vector<vector<int>> ans;
    if(!root) return;
   queue<Node*> q;
   q.push(root);
   int size = q.size();
   while(!q.empty()){
       
       Node* curr = q.front();
       q.pop();
       res.push_back(curr->data);
       if(curr->left) q.push(curr->left);
       if(curr->right) q.push(curr->right);
       if(--size == 0){
           size = q.size();
           ans.push_back(res);
           res.clear();
       }
   }
   for(int i = 0 ; i < ans.size(); i++){
       if(i % 2 == 0) reverse(ans[i].begin(), ans[i].end());
       for(int j = 0; j < ans[i].size(); j++){
            cout<<ans[i][j]<<" ";  
       }
   }
}
