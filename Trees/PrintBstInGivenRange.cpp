void push(Node *root, int l, int h, vector<int>& res)
{
    if(!root) return;
    if(root->data > l) 
        push(root->left, l, h, res);
    if(root->data >= l and root->data<=h)
        res.push_back(root->data);
    if(root->data < h) 
        push(root->right, l, h, res);
}

vector<int> printNearNodes(Node *root, int low, int high)
{
    vector<int> res;
    push(root, low, high, res);
    return res;
}
