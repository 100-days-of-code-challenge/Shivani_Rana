hackerrank problem;->insert an elemnt at the head
https://www.hackerrank.com/challenges/insert-a-node-at-the-head-of-a-linked-list/problem
_______________________________________________________________________________________________


SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {


SinglyLinkedListNode* new =(SinglyLinkedListNode*)malloc(sizeof(SinglyLinkedListNode));

   if(llist == NULL)
{
    llist = new;
    new->data = data;
    new->next = NULL;
    return llist;
    
}    

 new->next = llist;
 new->data = data;
 llist = new;


return llist;
}