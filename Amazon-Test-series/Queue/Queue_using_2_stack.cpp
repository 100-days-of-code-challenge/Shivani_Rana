Queue_using_2_stack
https://practice.geeksforgeeks.org/problems/queue-using-two-stacks/1#
gfg must do


void StackQueue :: push(int x)
{
    // Your Code
    s1.push(x);
}

//Function to pop an element from queue by using 2 stacks.
int StackQueue :: pop()
{
        // Your Code  
        if(s2.empty()){
            while(s1.size()>0){
                s2.push(s1.top());
                s1.pop();
            }
        }
        if(s2.size()>0){
            int a = s2.top();
            s2.pop();
            return a;
        }
        else
        return -1;
}