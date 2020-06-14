int getCount(struct node* root, int k) 
{
    queue<struct node* > q;
    if(!root) return 0;
    q.push(root);
    int size = q.size();
    int level = 1;
    int res = 0;
    while(!q.empty()){
        struct node* curr = q.front();
        q.pop();
        if(!curr->left && !curr->right) {
            k -= level;
            if(k >= 0) res++;
            else return res;
        }
        
        if(curr->left)
            q.push(curr->left);
        if(curr->right)
            q.push(curr->right);
        
        if(--size == 0){
            size = q.size();
            level++;
        }
    }
    return res;
}
