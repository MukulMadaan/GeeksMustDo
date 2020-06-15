bool isIsomorphic(Node *root1,Node *root2)
{
    if(!root1 && !root2) return true;
    if(!root1 || !root2) return false;
    if(root1->data == root2->data){
        bool x = isIsomorphic(root1->left, root2->left) || isIsomorphic(root1->left, root2->right);
        bool y = isIsomorphic(root1->right, root2->left) || isIsomorphic(root1->right, root2->right);
        return x && y;
    }
    return false;
}
