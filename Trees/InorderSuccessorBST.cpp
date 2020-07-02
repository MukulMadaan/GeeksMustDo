Node * inOrderSuccessor(Node *root, Node *x)
{
    if(!root) return NULL;
    
    Node* y = NULL;
    if(root->data<x->data)  y = inOrderSuccessor(root->right, x);
    else if(root->data>x->data){
        y = inOrderSuccessor(root->left, x);
        if(!y) y = root;
    }else {
        y = inOrderSuccessor(root->right, x);
    }
    
    return y;
}
