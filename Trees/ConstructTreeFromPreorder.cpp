struct Node *res(int n, int pre[], char preLN[], int& i){
    if(n == 0) return NULL;
    if(i >= n) return NULL;
    Node* root = new Node(pre[i]);
    if(preLN[i++] == 'L') return root;
    root->left = res(n, pre, preLN, i);
    root->right = res(n, pre, preLN, i);
    return root;
}
struct Node *constructTree(int n, int pre[], char preLN[])
{
    int i = 0;
    return res(n, pre, preLN, i);
}
