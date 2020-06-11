Node *removeDuplicates(Node *root)
{
    Node* prev;
    Node* curr = root;
    while(curr){
        prev = curr;
        curr = curr->next;
        while(curr and prev->data == curr->data){
            prev->next = curr->next;
            curr = curr->next;
        }
    }
    return root;
}
