struct Node* reverse(struct Node* head){
    struct Node* curr = head;
    struct Node* post;
    struct Node* prev = NULL;
    while(curr){
        post = curr->next;
        curr->next = prev;
        prev = curr;
        curr = post;
    }
    return prev;
}
void rearrange(struct Node *head)
{
    if(!head || !head->next) return;
    struct Node* prev = head;
    struct Node* curr = head->next;
    struct Node* dummy = new Node(-1);
    struct Node* end = dummy;
    while(curr){
        end->next = curr;
        end = end->next;
        if(!curr->next) break;
        prev->next = curr->next;
        prev = curr->next;
        curr = prev->next;
    }
    struct Node* join = reverse(dummy->next);
    // prev->next = join;
}
