unordered_set <Node*> s;

void countNode(Node* root, int k, vector <Node*> v) {
    if(!root) return;
    v.push_back(root);
    if(!root->left && !root->right && v.size() > k)
        s.insert(v[v.size() - k - 1]);
    countNode(root->left, k, v);
    countNode(root->right, k, v);
}
int printKDistantfromLeaf(Node* node, int k)
{
    vector <Node*> v;
    s.clear();
    countNode(node, k, v);
    return s.size();
}
