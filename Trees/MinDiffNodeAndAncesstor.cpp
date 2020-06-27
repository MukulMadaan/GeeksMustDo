int traverse(Node* root, int& res){
    if(!root) return INT_MAX;
    if(!root->left && !root->right) return root->data;
    int x = traverse(root->left, res);
    int y = traverse(root->right, res);
    res = max(res, root->data - min(x, y));
    return min({root->data, x, y});
}
int maxDiff(Node* root)
{
    int res = INT_MIN;
    int tats = traverse(root, res);
    return res;
}
