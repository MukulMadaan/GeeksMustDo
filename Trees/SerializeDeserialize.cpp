int i = 0;
void serialize(Node *root,vector<int> &A)
{
    i = 0;
    if(!root){
        A.push_back(-1);
        return;
    }
    A.push_back(root->data);
    serialize(root->left, A);
    serialize(root->right, A);
    return;
}

/*this function deserializes
 the serialized vector A*/

Node * deSerialize(vector<int> &A)
{
    if(A[i] == -1) {
        i++;
        return NULL;
    }
    Node* root = new Node(A[i++]);
    root->left = deSerialize(A);
    root->right = deSerialize(A);
    return root;
}
