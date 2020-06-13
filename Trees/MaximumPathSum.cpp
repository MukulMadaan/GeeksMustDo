int traverse(Node *root, int &res){
    if(!root) return INT_MIN;
    if(!root->left && !root->right) return root->data;
    int x = traverse(root->left, res);
    int y = traverse(root->right, res);
    if(root->left && root->right) res = max(res, x + y + root->data);
    return max(x, y) + root->data;
}
int maxPathSum(Node *root) {
    int res = INT_MIN;
    int a = traverse(root, res);
    return res;
}
