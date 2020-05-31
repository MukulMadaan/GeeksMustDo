int intersectPoint(Node* head1, Node* head2)
{
    Node* current1 = head1;
    Node* current2 = head2;
    int l1 = 0, l2 = 0;
    while(current1){
        l1++;
        current1 = current1->next;
    }
    while(current2){
        l2++;
        current2 = current2->next;
    }
    int diff = abs(l1 - l2);
    if(l1 > l2){
        while(diff--){
            head1 = head1->next;
        }
    } else {
        while(diff--){
            head2 = head2->next;
        }
    }
    while(head1 && head2){
        if(head1 == head2) return head1->data;
        head1 = head1->next;
        head2 = head2->next;
    }
    return -1;
}
