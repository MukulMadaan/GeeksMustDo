Node* lca(Node* root ,int n1 ,int n2 )
{
    Node *lnode, *rnode;
    if(!root) return NULL;
    if(root->data == n1 || root->data == n2) return root;
    lnode = lca(root->left, n1, n2);
    rnode = lca(root->right, n1, n2);
    if(lnode && rnode) return root;
    return (lnode) ? lnode : rnode; 
}
