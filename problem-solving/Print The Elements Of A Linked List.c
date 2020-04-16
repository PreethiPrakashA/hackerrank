void printLinkedList(SinglyLinkedListNode* head) {

    struct SinglyLinkedListNode * tmp;
    tmp = head;;
    while(tmp!=NULL){

        printf("%d\n",tmp->data);
        tmp = tmp->next;


    }
        

}

