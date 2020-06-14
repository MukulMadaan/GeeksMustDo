int traverse(Node *root, int &res){
    if(!root) return 0;
    int x = traverse(root->left, res);
    int y = traverse(root->right, res);
    res = max(res, x + y + 1);
    return max(x, y) + 1;
}

int diameter(Node* root) {
    int res = 0;
    int a = traverse(root, res);
    return res;
}
