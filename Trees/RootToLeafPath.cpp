map<int, int> M;
void traverse(Node* root,int len){
    if(!root) return;
    if(!root->left && !root->right) {
        M[len]++;
        return;
    }
    len++;
    traverse(root->left , len);
    traverse(root->right , len);
    return;
}
void pathCounts(Node *root)
{
    M.clear();
    traverse(root, 1);
    for(auto i = M.begin(); i != M.end(); i++)
    {
        cout<<i->first<<" "<<i->second<<" $";
    }
}
