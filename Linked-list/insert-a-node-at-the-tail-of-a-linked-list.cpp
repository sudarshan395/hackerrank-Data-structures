
Node* Insert(Node *head,int data)
{
    Node *node = new Node;
    node -> data = data;

    if (head == NULL) {
        return node;
    }
    else {
        Node *last = head;
        while (last -> next != NULL) {
            last = last -> next;
        }
        last -> next = node;
        return head; 
    }

}
