struct node *reverse (struct node *head, int k){
    node* prev = NULL;
    node* curr = head;
    node* post;
    int counter = k;
    while(counter-- && curr != NULL){
        post = curr->next;
        curr->next = prev;
        prev = curr;
        curr = post;
    }
    if(head != NULL) head->next = reverse(post, k);
    return prev;
}
