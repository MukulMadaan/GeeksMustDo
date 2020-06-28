Node* deleteAllOccurances(Node *head,int x)
{
    Node* curr = head;
    Node* prev;
    while(curr){
        while(head && head->data == x){
            head = head->next;
            curr = head;
        }
        if(!curr) return head;
        if(curr->data == x){
           prev->next = curr->next; 
           curr = prev;
        }
        prev = curr;
        curr = curr->next;
    }
    return head;
}
