Node* pairWiseSwap(struct Node* head) {
    Node* HEAD = head;
    while(head && head->next){
        int temp = head->data;
        head->data = head->next->data;
        head->next->data = temp;
        head = head->next->next;
    }
    return HEAD;
}
