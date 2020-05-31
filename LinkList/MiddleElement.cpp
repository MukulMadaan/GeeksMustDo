int getMiddle(Node *head)
{
    Node *fast = head;
    Node *slow = head;
    while(fast && fast->next){
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow->data;
}
