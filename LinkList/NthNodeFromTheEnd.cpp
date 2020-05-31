int getNthFromLast(Node *head, int n)
{
    Node* ahead = head;
    Node* behind = head;
    for(int i = 0 ; i < n ; i++){
        if(!ahead) return -1;
        ahead = ahead->next;
    }
    while(ahead){
        ahead = ahead->next;
        behind = behind->next;
    }
    return behind->data;
}

