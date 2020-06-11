//solution 1
bool helper(Node* root1, Node* root2){
    if(!root1 and !root2) return true;

    if(root1 and root2 and root1->data == root2->data)
        return (helper(root1->left, root2->right) and helper(root1->right, root2->left));
        
    return false;
}

bool isSymmetric(struct Node* root)
{
    return helper(root, root);
}

//Solution 2
void traverse(struct Node* l, struct Node* r, bool &ans){
    if(!l && !r) return;
    if((l && !r) || (!l && r)) {
        ans = false;
        return;
    }
    if(l->data != r->data) ans = false;
    traverse(l->left, r->right, ans);
    traverse(l->right, r->left, ans);
}

bool isSymmetric(struct Node* root)
{
    if(!root) return true;
    bool ans = true;
	traverse(root->left, root->right, ans);
	return ans;
}
