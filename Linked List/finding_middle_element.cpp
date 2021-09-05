Must do ->gfg
finding middle element in a linked list
https://practice.geeksforgeeks.org/problems/finding-middle-element-in-a-linked-list/1#
_______________________________________________________________________________


int getMiddle(Node *head)
{
   // Your code here
   if(head== NULL){
       return -1;
   }
   
   Node* slow = head;
   Node* fast = head;
   while(fast != NULL && fast->next!= NULL){
       fast = fast->next->next;
       slow = slow->next;
       
   }
   return slow->data;
   
}
