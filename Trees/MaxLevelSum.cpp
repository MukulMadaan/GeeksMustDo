int maxLevelSum(Node* root) {
    int sum = 0;
    int res = INT_MIN;
   queue<Node*> q;
   q.push(root);
   int size = q.size();
   while(!q.empty()){
       Node* curr = q.front();
       q.pop();
       if(curr->left) q.push(curr->left);
       if(curr->right) q.push(curr->right);
       sum += curr->data;
       
       if(--size == 0){
           size = q.size();
           res = max(res, sum);
           sum = 0;
       }
   }
   return res;
}
