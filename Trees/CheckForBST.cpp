int isBSTUtil(Node* root, int min, int max){
    if(!root) return 1;
    if((root->data > min && root->data <= max)
    && isBSTUtil(root->left, min, root->data) && isBSTUtil(root->right,root->data, max))
    return 1;
    return 0;
}

bool isBST(Node* root) {
    if(isBSTUtil(root, INT_MIN, INT_MAX))   return true;
    return false;
}
