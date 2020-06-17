Node* addTwoLists(Node* first, Node* second) {
    Node* dummy = new Node(-1);
    Node* end = dummy;
    int carry = 0;
    while(first || second){
        int a = 0;
        int b = 0;
        if(first) a = first->data; 
        if(second) b = second->data;
        int s = a + b + carry;
        if(s >= 10) carry = 1;
        else carry = 0;
        s = s % 10;
        Node* res = new Node(s);
        end->next = res;
        end = end->next;
        if(first) first = first->next;
        if(second) second = second->next;
    }
    if(carry == 1){
        Node* res = new Node(carry);
        end->next = res;
        end = end->next;
    }
    return dummy->next;
}
