bool compare_lists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    struct SinglyLinkedListNode *p1,*p2;
    p1 = head1;
    p2 = head2;
    int ct1=0,ct2=0;
    while(p1!=NULL){
        ct1++;
        p1=p1->next;

    }
    while(p2!=NULL){
        ct2++;
        p2 = p2->next;
    }
    if(ct1==ct2){
        p1=head1;
        p2=head2;
        while(p1!=NULL){
            if(p1->data == p2->data)
            {
                p1 = p1->next;
                p2=p2->next;
            }
            else
                return 0;
        }
        if(p1==NULL)
            return 1;
    }

    
        return 0;


}
