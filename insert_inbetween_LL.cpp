hackerrank ques-> insert an element in between LL
https://www.hackerrank.com/challenges/insert-a-node-at-a-specific-position-in-a-linked-list/problem
__________________________________________________________________________________________________________


SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int position) {
    SinglyLinkedListNode* new = (SinglyLinkedListNode*)malloc(sizeof(SinglyLinkedListNode*));
    SinglyLinkedListNode* t = llist;
    while(position != 1)
    {
        t = t->next;
        position--;
    }
    new->next = t->next;
    t->next = new;
    new->data = data;
    
return llist;
}
