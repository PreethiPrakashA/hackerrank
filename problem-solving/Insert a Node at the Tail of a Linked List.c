SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
    struct SinglyLinkedListNode * tmp;
    tmp = (struct SinglyLinkedListNode *)malloc(sizeof(struct SinglyLinkedListNode ));
    tmp->data= data;
    if(head == NULL)
    {
          head = tmp;
          return head;
    }

    struct SinglyLinkedListNode *p;
    p = head;
    while(p->next!=NULL)
        p = p->next;
    p->next = tmp;
    tmp->next = NULL;
    return head;


 
}

