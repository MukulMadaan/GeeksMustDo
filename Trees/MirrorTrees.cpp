void traverse(Node* a, Node* b, bool &ans){
    if(!a && !b) return;
    if(!a || !b) {
        ans = false;
        return;
    }
    if(a->data != b->data) ans = false;
    traverse(a->left, b->right, ans);
    traverse(a->right, b->left, ans);
}
int areMirror(Node* a, Node* b) {
    bool ans = true;
    traverse(a,b, ans);
    return ans;
}
