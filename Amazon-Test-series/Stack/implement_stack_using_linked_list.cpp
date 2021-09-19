Implement stack using linked list
amazon series
https://practice.geeksforgeeks.org/problems/implement-stack-using-linked-list/1/?track=amazon-stacks&batchId=192
Q2-->

void MyStack ::push(int x) 
{
    // Your Code
    StackNode* node = new StackNode(x);
    node->next = top;
    top = node;
    
   
    
}

//Function to remove an item from top of the stack.
int MyStack ::pop() 
{
    // Your Code
    if(top == NULL)
    return -1;
    
    StackNode* temp = top;
    top = top->next;
    
    int data = temp->data;
    free(temp);
    return data;
    
}
