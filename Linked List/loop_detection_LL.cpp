detect loop i a linked list
https://practice.geeksforgeeks.org/problems/detect-loop-in-linked-list/1#

class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        // your code here
        while(head->next!=NULL)
{
head->data=NULL;
head=head->next;
if(head->data==NULL)
return 1;
}

return 0;
    }
};