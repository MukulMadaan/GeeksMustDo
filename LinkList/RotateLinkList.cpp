//Class Solution

Node* rotate(Node* head, int k) {
    Node* temp = head;
    while(temp->next){
        temp = temp->next;
    }
    temp->next = head;  // linking last node with first node
    Node *end;
    while(k--){
        end = head;
        head = head->next;
    }
    end->next = NULL;
    return head;
}



// Output limit overflow

#include <bits/stdc++.h>
using namespace std;

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

Node* rotate(Node* head, int k) {
    Node* current = head;
    Node* prev;
    int length = 0;
    while(current){
        length++;
        current = current->next;
    }
    current = head;
    for(int i = 0 ; i < k; i++){
        prev = current;
        current = current->next;
    } 
    prev->next = reverseList(current);
    head = reverseList(head);
    current = head;
    int minus = length - k;
    for(int i = 0 ; i < minus; i++){
        prev = current;
        current = current->next;
    }
    prev->next = reverseList(current);
    return head;
}
