int traverse(Node* root,bool &ans){
    if(!root) return 0;
    int x = traverse(root->left, ans);
    int y = traverse(root->right, ans);
    if(x == 0) x = 1;
    if(y == 0) y = 1;
    if(abs(floor(log2(x) + 1) - (floor(log2(y) + 1))) > 1){
        ans = false;
    } 
    return x + y + 1;
}

bool isBalanced(Node *root)
{
    bool ans = true;
    traverse(root, ans);
    return ans;
}
