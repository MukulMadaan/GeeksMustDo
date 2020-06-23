vector<int> arr1;

void pl(Node *r){
    if(!r) return;
    if(r->left){ 
        arr1.push_back(r->data);
        pl(r->left);
    }else if(r->right) { 
        arr1.push_back(r->data);
        pl(r->right);
    }
}

void le(Node *r){
    if(!r) return ;
    le(r->left);
    if(!r->left && !r->right) {
        arr1.push_back(r->data);
        return;
    }
    
    le(r->right);
}

void ri(Node *r)
{
    
    if(!r) return;
    if(r->right) {
        ri(r->right);
        arr1.push_back(r->data);
    } else if(r->left) {
        ri(r->left);
        arr1.push_back(r->data);
    }
}

vector <int> printBoundary(Node *root)
{
    arr1.clear();
    if(!root) return arr1;
    arr1.push_back(root->data);
    pl(root->left);
    le(root);
    ri(root->right);
    return arr1;
}
