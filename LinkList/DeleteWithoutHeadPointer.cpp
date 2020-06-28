void deleteNode(Node *node)
{
    Node* prev;
    if (!node) return;
    else {
        while (node->next) {
            node->data = node->next->data;
            prev = node;
            node = node->next;
        }
        prev->next = NULL;
    }
    // *node = *(node->next);
}
