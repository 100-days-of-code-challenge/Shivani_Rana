amazon series
linked list
intersection point in y shapped
https://practice.geeksforgeeks.org/problems/intersection-point-in-y-shapped-linked-lists/1/#
___________________________________________________________________________


int intersectPoint(Node* head1, Node* head2)
{
    //Your Code Here
    
    Node* x = head1;
    
    while(x->next != NULL){
        x = x->next;
    }
    
   
    
    Node* slow = head1;
    Node* fast = head1;
     x->next = head2;
     do{
         slow = slow->next;
         fast = fast->next->next;
     }while(slow != fast);
    
    slow = head1;
    while(slow != fast){
        slow = slow->next;
        fast = fast->next;
    }
    return slow->data;
}
