hackerrank question-> insert an element at the end of the list
https://www.hackerrank.com/challenges/insert-a-node-at-the-tail-of-a-linked-list/problem

SinglyLinkedListNode* new = (SinglyLinkedListNode*)malloc(sizeof(SinglyLinkedListNode));
if( head == NULL)
{
    head = new;
    new->data = data;
    new->next = NULL;
}

 SinglyLinkedListNode* t = head;
 while(t->next != NULL)
   t = t->next;
 
 t -> next = new;
 new->data = data;
 new->next = NULL;
 
return head;
}
