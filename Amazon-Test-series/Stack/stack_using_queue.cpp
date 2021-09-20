stack with 2 queue
https://practice.geeksforgeeks.org/problems/stack-using-two-queues/1/?track=amazon-stacks&batchId=192#
amazon series


void QueueStack :: push(int x)
{
        // Your Code
        
        q1.push(x);
        
}

//Function to pop an element from stack using two queues. 
int QueueStack :: pop()
{
        // Your Code  
        if(q1.empty())
        {
            return -1;
            
        }
        
        
            while(q1.size() != 1)
            {
            q2.push(q1.front());
             q1.pop();
            }
             int s2 = q1.front();
              q1.pop();
            
        while(!q2.empty())
        {
            q1.push(q2.front());
            q2.pop();
        }
       
        return s2;
}
