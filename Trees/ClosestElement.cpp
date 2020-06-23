void traverse(Node* root,int K, int & res){
    if(!root) return;
    res = min(abs(K - root->data), res);
    if(root->data > K) traverse(root->left, K, res);
    if(root->data < K) traverse(root->right, K, res);
    return;
}

int minDiff(Node *root, int K)
{
    int res = INT_MAX;
    traverse(root, K, res);
    return res;
    
}
