bool traverse(Node* root1, Node* root2){
    if(!root1 && !root2) return true;
    if(!root1 || !root2) return false;
    return traverse(root1->left, root2->right) && traverse(root1->right, root2->left);
}

bool IsFoldable(Node* root)
{
    if(!root) return true;
    return traverse(root->left, root->right);
}
