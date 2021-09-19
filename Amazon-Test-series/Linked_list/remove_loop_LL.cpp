Remove loop in linked list
https://practice.geeksforgeeks.org/problems/remove-loop-in-linked-list/1

class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        // code here
        // just remove the loop without losing any nodes
        Node* prev = head;
        while(head != NULL){
            prev = head;
            head->data = -1;
            head = head->next;
            if(head != NULL && head->data == -1)
            {
                prev->next = NULL;
                break;
            }
            
        }
    }
};