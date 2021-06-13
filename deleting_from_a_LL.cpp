hackerrank problem -> deleting from a linkedList
https://www.hackerrank.com/challenges/delete-a-node-from-a-linked-list/problem
_____________________________________________________________________________________

SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* llist, int position) {
    
    SinglyLinkedListNode* t = llist;
    if(llist == NULL)
    {
        return NULL;
    }
    
    while(position != 1)
    {
        t = t->next;
        position--;
    }
    SinglyLinkedListNode* t1 = t->next;
    t->next = t->next->next;
    free(t1);
    
    if(llist == NULL)
    return NULL;
return llist;
}