int findMirrorRec(int target, struct Node* left,
							struct Node* right)
{
    if(!left || !right) return -1;
    if(target == left->key) return right->key;
    if(target == right->key) return left->key;
    int x = findMirrorRec(target, left->left, right->right);
    int y = findMirrorRec(target, left->right, right->left);
    if(x != -1) return x;
    if(y != -1) return y;
}
