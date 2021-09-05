Must do
Reverse a linked list in groups of given size
https://practice.geeksforgeeks.org/problems/reverse-a-linked-list-in-groups-of-given-size/1



class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
        // Complete this method
        node* nex;
        node* prev = NULL;
        node*curr = head;
        
        
        int c = 0;
        while(curr != NULL&& c<k){
            nex = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nex;
            c++;
            
        }
        if(nex!=NULL){
            head->next = reverse(curr,k); 
        }
        return prev;
        
    }
};

