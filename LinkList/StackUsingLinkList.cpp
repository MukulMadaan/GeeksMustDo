void MyStack ::push(int x) {
    StackNode* node = new StackNode(x);
    node->next = top;
    top = node;
}

/* The method pop which return the element
  poped out of the stack*/
int MyStack ::pop() {
    if(!top) return -1;
    StackNode* temp = top;
    top = top->next;
    int data = temp->data;
    free(temp);
    return data;
}
