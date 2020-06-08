int traverse(Node* root){
    if(!root) return 0;
    if(!root->left && !root->right) return root->data;
    return traverse(root->left) + traverse(root->right);
}

/*You are required to complete below method */
int sumOfLeafNodes(Node *root ){
     return traverse(root);
}
