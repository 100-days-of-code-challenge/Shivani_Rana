Nth node from end of linked list
https://practice.geeksforgeeks.org/problems/nth-node-from-end-of-linked-list/1#



int getNthFromLast(Node *head, int n)
{
       // Your code here
       int count = 0;
    Node* temp = head;
    
    while(temp != NULL){
         if(count==n){
             break;
            
        }
       
        temp = temp->next;
        
        count++;
        
       
    }
    Node* temp1 = head;
    while(temp!=NULL){
        temp1=temp1->next;
         temp=temp->next;
        
    }
    if(count != n)
    return -1;
    return temp1->data;
}

