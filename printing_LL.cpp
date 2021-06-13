Print Linked List elements
https://practice.geeksforgeeks.org/problems/print-linked-list-elements/1#
_____________________________________________________________________________


class Solution
{
    public:
    void display(Node *head)
    {
      //your code goes here
       while(head != NULL)
   {
       cout<< head->data <<" ";
       head= head->next;
       
   }
    }