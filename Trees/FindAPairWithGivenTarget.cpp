bool search(struct Node* root, int num, struct Node* check){
    if(!root) return false;
    if(root->data == num && root != check) return true;
    bool x = false; bool y = false;
    if(num > root->data) x = search(root->right, num, check);
    else y = search(root->left, num, check);
    // cout<<x<<" "<<y<<endl;
    return x || y;
}

bool traverse(struct Node *root, int target, struct Node* start){
    if(!root) return false;
    bool z = search(start, target - root->data , root);
    // cout<<root->data<<" "<<z<<" "<<target<<" ";
    if(z) return true;
    bool x = traverse(root->left, target, start);
    if(z || x) return true;
    bool y = traverse(root->right, target, start);
    return x || y || z;
}

bool isPairPresent(struct Node *root, int target)
{
    return traverse(root, target, root);
    
}
