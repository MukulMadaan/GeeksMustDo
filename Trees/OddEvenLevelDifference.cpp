int getLevelDiff(Node *root)
{
   int oddSum = 0;
   int evenSum = 0;
   int level = 1;
   queue<Node*> q;
   q.push(root);
   int size = q.size();
   while(!q.empty()){
       Node* curr = q.front();
       q.pop();
       if(curr->left) q.push(curr->left);
       if(curr->right) q.push(curr->right);
       
       if(level % 2 != 0) oddSum += curr->data;
       else evenSum += curr->data;
       
       if(--size == 0){
           size = q.size();
           level++;
       }
   }
   return oddSum - evenSum;
}
