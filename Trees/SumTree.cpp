
int traverse(Node *root, bool &res){
    if(!root) return 0;
    if(!root->left && !root->right) return root->data;
    int x = traverse(root->left, res);
    int y = traverse(root->right, res);
    if(root->left || root->right) res = (root->data == x + y);
    return x +  y + root->data;
}

bool isSumTree(Node* root)
{
     bool res = false;
    int a = traverse(root, res);
    return res;
}
