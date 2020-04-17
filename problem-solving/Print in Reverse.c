void reversePrint(SinglyLinkedListNode* head) {
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
    while(top!=-1){
        printf("%d\n",stack[top]);
        top--;

    }




}
