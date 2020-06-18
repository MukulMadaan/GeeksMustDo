Node* traverse(Node* root){
    if(!root) return NULL;
    Node* x = traverse(root->left);
    Node* y = traverse(root->right);
    root->right = x;
    root->left = y;
    return root;
}
void mirror(Node* node) 
{
     traverse(node);
}
