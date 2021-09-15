gfg 
amazon series
Insert in a sorted list
https://practice.geeksforgeeks.org/problems/insert-in-a-sorted-list/1/?track=amazon-linkedlists&batchId=192#


class Solution{
  public:
    // Should return head of the modified linked list
    Node *sortedInsert(struct Node* head, int data) {
        // Code here
        if(head == NULL){
            head = new Node(data);
        }
        if(data<head->data){
            Node* temp = new Node(data);
            temp->next = head;
            head = temp;
            return head;
        }
        Node* curr = head->next;
        Node* prev = head;
        while(curr != NULL){
            if(curr->data > data){
                Node* temp = new Node(data);
                temp->next = curr;
                prev->next = temp;
                 return head;
            }
            prev = curr;
            curr = curr->next;
        }
        prev->next = new Node(data);
        return head;
        
    }
};
