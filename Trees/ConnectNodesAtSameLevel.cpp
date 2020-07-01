void connect(Node *p)
{
   queue<Node*> q;
   q.push(p);
   int size = q.size();
   Node* assign = NULL;
   while(!q.empty()){
       Node* curr = q.front();
       q.pop();
       curr->nextRight = assign;
       assign = curr;
       if(curr->right) q.push(curr->right);
       if(curr->left) q.push(curr->left);
       if(--size == 0){
           size = q.size();
           assign = NULL;
       }
   }
}
