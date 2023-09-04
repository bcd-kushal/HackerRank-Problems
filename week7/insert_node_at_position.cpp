
SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int position) {
    SinglyLinkedListNode *temp = (SinglyLinkedListNode*)malloc(sizeof(SinglyLinkedListNode));
    temp->data = data;

    if(position==0){
        temp->next = llist;
        llist = temp;
        return llist;
    }


    SinglyLinkedListNode *ptr = llist;
    position-=1;
    while(position>0){
        ptr=ptr->next;
        position-=1;
    }

    temp->next = ptr->next;
    ptr->next = temp;

    return llist;
}
