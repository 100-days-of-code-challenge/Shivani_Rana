reversing linked_list
https://practice.geeksforgeeks.org/problems/reverse-a-linked-list/1


struct Node* reverseList(struct Node *head)
    {
        struct Node* prev = NULL;
        struct Node* nextNode = NULL;
        while(head){
            nextNode = head->next;
            head->next = prev;
            prev = head;
            head = nextNode;
        }
        return prev;
    }