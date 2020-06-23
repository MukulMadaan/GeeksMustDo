Node* LCA(Node* root, int a, int b)
{
    if (!root) return NULL;
    
    if (root->data == a || root->data == b) return root;
    
    Node* left_node = LCA(root->left, a, b);
    Node* right_node = LCA(root->right, a, b);
    
    if (left_node && right_node) return root;
    
    return (left_node) ? left_node : right_node;
}

void length(Node* root, int a, int len, int &ans){
    if (!root) return ;
    if(root->data == a) ans += len;
    len++;
    length(root->left, a, len, ans);
    length(root->right, a, len, ans);
}

int findDist(Node* root, int a, int b)
{
    Node* ancestor = LCA(root, a, b);
    int ans = 0;
    length(ancestor, a, 0, ans);
    length(ancestor, b, 0, ans);
    return ans;
}
