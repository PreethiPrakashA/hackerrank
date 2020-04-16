SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {
    
    struct SinglyLinkedListNode  *tmp;

    tmp = (struct SinglyLinkedListNode *)malloc(sizeof(SinglyLinkedListNode ));
    tmp->data = data;
    if (tmp == NULL)
        return NULL;
    if(llist == NULL)
    {
      llist = tmp;
      return llist;
    }
    else {
        tmp->next = llist;
        llist = tmp;
        return llist;
    }



}
