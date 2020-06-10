struct Node* reverse(Node* root){
    Node* prev = NULL;
    Node* post;
    while(root){
        post = root->next;
        root->next = prev;
        prev = root;
        root = post;
    }
    return prev;
}
struct Node * mergeResult(Node *node1,Node *node2)
{
    Node* dummy = new Node();
    Node* point = dummy;
    while(node1 && node2){
        if(node1->data < node2->data){
            point->next = node1;
            point = point->next;
            node1 = node1->next;
        } else{
            point->next = node2;
            point = point->next;
            node2 = node2->next;
        }
    }
    if(node1) point->next = node1;
    if(node2) point->next = node2;
    return reverse(dummy->next);
}
