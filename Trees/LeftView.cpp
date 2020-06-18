void leftView(Node *root)
{
   
    if(!root) return;
   queue<Node*> q;
   q.push(root);
   int size = q.size();
   int check = size;
   while(!q.empty()){
       
       Node* curr = q.front();
       q.pop();
       if(curr->left) q.push(curr->left);
       if(curr->right) q.push(curr->right);
       if(size == check) cout<<curr->data<<" ";
       if(--size == 0){
           size = q.size();
            check = size;
       }
   }
   
}
