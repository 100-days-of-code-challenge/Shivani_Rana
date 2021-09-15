Linked list
amazon series
delete middle element of linked list

https://practice.geeksforgeeks.org/problems/delete-middle-of-linked-list/1/?track=amazon-linkedlists&batchId=192#

Node* deleteMid(Node* head)
{
    // Your Code Here
    Node* slow = head;
    Node* fast = head;
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        
    }
    Node* x = head;
    while(x->next != slow){
        x = x->next;
    }
    x->next = x->next->next;
    slow->next = NULL;
    
    
  return head;  
}