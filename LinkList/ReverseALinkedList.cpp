Node* reverseList(Node *head)
{
  Node* prev = NULL;
  Node* post = head;
  while(head){
      post = head->next;
      head->next = prev;
      prev = head;
      head = post;
  }
  return prev;
}
