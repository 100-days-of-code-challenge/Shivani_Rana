Stack 
amazon series
implement stack using array

Q1
https://practice.geeksforgeeks.org/problems/implement-stack-using-array/1/?track=amazon-stacks&batchId=192

void MyStack :: push(int x)
{
    // Your Code
    if(top != 1000)
    {
        arr[++top] = x;
    }
}

//Function to remove an item from top of the stack.
int MyStack :: pop()
{
    // Your Code   
    if(top >=0){
        return arr[top--];
        
        
    }
    else{
        return -1;
    }
}