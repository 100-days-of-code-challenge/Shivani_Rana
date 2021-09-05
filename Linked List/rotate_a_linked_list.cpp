GFG Must do
Rotate a linked list
https://practice.geeksforgeeks.org/problems/rotate-a-linked-list/1#


class Solution
{
    public:
    //Function to rotate a linked list.
    Node* rotate(Node* head, int k)
    {
    //
    
    Node* x = head;
    
    while( x->next != NULL){
        x = x->next;
    }
    x->next = head;
    Node* end;
    while(k--){
       end = head;
       head = head->next;
        
    }
    end->next= NULL;
    return head;
    }
    
};
    