int traverse(node* root){
    if(!root) return 0;
    int x = traverse(root->left);
    int y = traverse(root->right);
    int val;
    if(root->data == "+") val = x + y;
    else if(root->data == "/") val = x / y;
    else if(root->data == "*") val = x * y;
    else if(root->data == "-") val = x - y;
    else val = stoi(root->data); 
    return val;
}
int evalTree(node* root) {
    return traverse(root);
}
