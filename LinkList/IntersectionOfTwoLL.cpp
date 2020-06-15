Node* findIntersection(Node* head1, Node* head2)
{
    unordered_map<int, Node*> M;
    while(head2){
        M[head2->data] = head2;
        head2 = head2->next;
    }
    Node* dummy = new Node(1);
    Node* curr = dummy;
    while(head1){
        if(M.find(head1->data) != M.end()){
            curr->next = head1;
            curr = curr->next;
        }
        head1 = head1->next;
    }
    curr->next = NULL;
    return dummy->next;
}
