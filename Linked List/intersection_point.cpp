Intersection point in y shaped linked list
valid only if input idspositive 


int intersectPoint(Node* head1, Node* head2)
{
    if(head1 == NULL || head2 == NULL){
        return -1;
    }
    // Your Code Here
    Node* temp = head1;
    while(temp != NULL){
        temp->data = -1 * (temp->data);
        temp = temp -> next;
    }
    temp = head2;
    int ans = -1;
    while(temp){
        if(temp->data<0){
            ans = ans*(temp->data);
            break;
        }
        temp = temp->next;
    }
    return ans;
}