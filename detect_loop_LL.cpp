GFG detect loop in a linked list
https://practice.geeksforgeeks.org/problems/detect-loop-in-linked-list/1#

class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        int flag =0;
        // your code here
        Node* i = head;
        Node* j = head;
        
        while(i != NULL && j != NULL && j->next != NULL)
        {
            
            i = i->next;
            j = j->next->next;
            
            if(i ==j)
            
            return 1;
            
        }
       
        return 0;
        
        
        
        
    }
};
