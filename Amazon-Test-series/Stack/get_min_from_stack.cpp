Amazon Sries
Get minimumelement from stack
https://practice.geeksforgeeks.org/problems/get-minimum-element-from-stack/1/?track=amazon-stacks&batchId=192#



class Solution{
    int minEle;
    stack<int> s;
    stack<int>ss;
    public:
    
       /*returns min element from stack*/
       int getMin(){
           
           //Write your code here
           if(ss.size()!= 0)
           return ss.top();
           
           return -1;
           
           
       }
       
       /*returns poped element from stack*/
       int pop(){
           
           //Write your code here
           if(s.size()== 0)
           return -1;
           
               int ans = s.top();
               s.pop();
               
               if(ans == ss.top())
               ss.pop();
               
               
           
           
           
           
           return ans;
       }
       
       /*push element x into the stack*/
       void push(int x){
           
           //Write your code here
           s.push(x);
           if(ss.size()==0 || ss.top()>=x){
               ss.push(x);
           }
          return;
       }
};