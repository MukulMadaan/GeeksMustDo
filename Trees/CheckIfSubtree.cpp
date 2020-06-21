bool isSubTree(Node* T, Node* S) {
    if(!T && !S) return true;
    if(!S || !T) return false;
    if(T && S && T->data == S->data) 
        return (isSubTree(T->left, S->left) && isSubTree(T->right, S->right)) 
                || (isSubTree(T->left, S) || isSubTree(T->right, S));
    else
        return isSubTree(T->left, S) || isSubTree(T->right, S);
}
