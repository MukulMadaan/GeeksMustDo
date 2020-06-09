void subSum(Node* root, int &sum){
    if(!root) return;
    sum += root->data;
    subSum(root->left, sum);
    subSum(root->right, sum);
}

void traverse(Node* root){
    if(!root) return;
    if(!root->left && !root->right){
        root->data = 0;
        return;
    } 
    int sum = 0;
    subSum(root, sum);
    root->data = sum - root->data;
    traverse(root->left);
    traverse(root->right);
}

void toSumTree(Node *node)
{
    traverse(node);
}
