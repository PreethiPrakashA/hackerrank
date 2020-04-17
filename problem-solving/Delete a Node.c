SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* head, int position) {
    struct SinglyLinkedListNode  *p, *tmp2;
    int i;
    
    p = head;
    if(position == 0)
    {
        tmp2=head;
        head = head->next;
        free(tmp2);
        return head;
    }

    for(i=0; p!=NULL && i<position; i++)
    {
        tmp2 = p;
        p = p->next;

    }
    if(p!=NULL)
    {
        tmp2->next = p->next;
        free(p);
        return head;
    }

    
     return NULL;

    

}
