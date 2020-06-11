Node* deleteK(Node *head,int K)
{
  if(K == 1){
      while(head) head = head->next;
  }
  Node* prev;
  Node * curr = head;
  int count = K;
  while(curr){
      if(--count == 0){
          prev->next = curr->next;
          curr->next = prev->next;
          count = K;
      }
      prev = curr;
      curr = curr->next;
  }
  return head;
}
