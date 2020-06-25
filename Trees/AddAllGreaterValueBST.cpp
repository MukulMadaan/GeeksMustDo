int add = 0;
void traverse(Node * root){
    if(!root) return;
    traverse(root->right);
    root->data += add;
    add = root->data;
    traverse(root->left);
}
Node* modify(Node *root)
{
    add = 0;
    traverse(root);
    return root;
}
