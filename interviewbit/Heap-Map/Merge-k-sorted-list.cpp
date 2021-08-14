heap
Merge-k-sorted-list
https://www.interviewbit.com/old/problems/merge-k-sorted-lists/
__________________________________________________________________

ListNode* Solution::mergeKLists(vector<ListNode*> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    priority_queue<int,vector<int>,greater<int>>pq;
    
    ListNode* temp;
     for(ListNode* i:A){
        temp = i;
        while(temp != nullptr){
            pq.push(temp->val); temp = temp->next;
        }
    }
    
    ListNode *head = new ListNode(0);
    
    temp = head;
    while(!pq.empty()){
        int topV = pq.top(); pq.pop();
        temp->next = new ListNode (topV);
        temp = temp->next;
    }
    return head->next;

}
