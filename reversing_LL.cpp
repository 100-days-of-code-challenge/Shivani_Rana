reversing an element in a linkedlist
https://www.hackerrank.com/challenges/print-the-elements-of-a-linked-list-in-reverse/problem
______________________________________________________________________________________________


void reversePrint(SinglyLinkedListNode* llist) {
    if(llist == NULL)
      return;
    
    SinglyLinkedListNode* curr = llist;
      
    SinglyLinkedListNode* prev = NULL;
    
    SinglyLinkedListNode* nextnode = NULL;
    
    while(curr != NULL)
    {
        nextnode = curr->next;
        curr->next = prev;
        
        prev = curr;
        curr = nextnode;
    }  
    while (prev != NULL)
    {
    
     printf("%d\n",prev->data);
     prev = prev->next;
    }
}