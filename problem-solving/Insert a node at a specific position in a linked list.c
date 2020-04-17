SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position) {

struct SinglyLinkedListNode *tmp, *p;
tmp = (struct SinglyLinkedListNode *)malloc(sizeof(struct SinglyLinkedListNode));
tmp->data = data;
int i;
p = head;

for(i=1;i<position;i++)
{
    p = p->next;
}
tmp->next = p->next;
p->next = tmp;
return head;

}
