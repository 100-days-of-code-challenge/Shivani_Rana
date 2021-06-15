GFG question :--> reverse linked list in group of size k
https://practice.geeksforgeeks.org/problems/reverse-a-linked-list-in-groups-of-given-size/1
______________________________________________________________________________________________


class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
        // Complete this method
        int count = 0;
        struct node* prev = NULL;
        struct node* nextnode = NULL;
        struct node* curr = head;
        while(curr != NULL && count<k)
        {
            nextnode = curr->next;
            curr->next = prev;
            
            prev = curr;
            curr = nextnode;
            
            count++;
            
        }
        if(nextnode != NULL)
        head->next = reverse(nextnode,k);
        return prev;
    }

};
