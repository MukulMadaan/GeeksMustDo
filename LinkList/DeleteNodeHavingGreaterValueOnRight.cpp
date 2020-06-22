//Recursive
Node *compute(Node *head)
{ 
    if(!head->next) return head;
    Node *temp = compute(head->next);
    if(temp->data > head->data) return temp;
    else head->next=temp;
    return head;
}

//Iterative
Node *compute(Node *head)
{
    if(!head) return NULL;
    if(!head->next) return head;
    while(!head && head->data < head->next->data) head->next = head;
    Node* curr = head->next;
    Node* prev = head;
    Node* prevPrev;
    while(curr){
        if(curr->data > prev->data){
            prevPrev->next = curr;
        } else{
            prevPrev = prev;
        }
            prev = curr;
            curr = curr->next;    
    }
    return head;
}
