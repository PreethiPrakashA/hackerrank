SinglyLinkedListNode* reverse(SinglyLinkedListNode* head) {
     struct SinglyLinkedListNode *p;
    p =head;
    int stack[1000];
    int top = -1;
    while(p!=NULL)
    {
        top++;
        stack[top] = p->data;
        p=p->next;

    }
    p=head;
    while((top!=-1) && (p!=NULL))
    {
        p->data = stack[top];
        top--;
        p = p->next;
        

    }
    return head;

}
