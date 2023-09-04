
DoublyLinkedListNode* reverse(DoublyLinkedListNode* llist) {
    if(!llist)  return NULL;

    DoublyLinkedListNode *ptr, *ptr2;

    while(llist->next){
        ptr = llist->next;
        ptr2 = llist->prev;

        llist->prev = (!ptr)? NULL:ptr;
        llist->next = (!ptr2)? NULL:ptr2;
        //llist->next->next = llist;
        llist=ptr;
    }

    llist->next = llist->prev;
    llist->prev = NULL;
    return llist;
}

