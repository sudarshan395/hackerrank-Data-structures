/*
  Insert Node at the begining of a linked list
  Initially head pointer argument could be NULL for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
return back the pointer to the head of the linked list in the below method.
*/
Node* Insert(Node *head,int data)
{
  // Complete this method
  
    Node *current = new Node;
    current->data = data;
    current->next = NULL;
    if(head==NULL) {
        head = current;
    }else{
        current->next = head;
        head = current;
    }
    return head;
    
}
