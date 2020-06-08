void linkdelete(struct Node  *head, int M, int N)
{
    struct Node* current = head;
    struct Node* prev;
    int temp1,temp2;
    temp1 = M; temp2 = N;
    while(current){
        while(M-- && current){
        prev = current;
        current = current->next;
        }
        while(N-- && current){
            prev->next = current->next;
            current = current->next;
        }
        M = temp1;
        N = temp2;
    }
}
