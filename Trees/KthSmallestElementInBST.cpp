int traverse(Node *root, int &K){
    if(!root) return -1;
    int x = traverse(root->left, K);
    if(--K == 0) return root->data;
    int y = traverse(root->right, K);
    if(x > 0) return x;
    return y;
}
int KthSmallestElement(Node *root, int K)
{
    return traverse(root, K);
}
