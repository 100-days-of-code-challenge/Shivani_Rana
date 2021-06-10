hacherrank problem:- optimized, queue implementation with 2 stack
https://www.hackerrank.com/challenges/queue-using-two-stacks/problem
_______________________________________________________________________

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    stack<int>s1;
    stack<int>s2;
    int q;
    cin>>q;
    while(q--)
    {
        int type,x ;
        cin>>type;
        if(type==1)
        {
            cin>>x;
       
            s1.push(x);
       
        }
        else if(type ==2)
        {
            if(!s2.empty())
            {
               s2.pop();    
            }
            else 
            {
                while(!s1.empty())
                {
                    s2.push(s1.top());
                    s1.pop();
                }
                s2.pop();
            }
        }
        else if(type == 3)
        {
          if(s2.empty())
          {
              while(!s1.empty())
              {
              s2.push(s1.top());
              s1.pop();
          }
          cout<<s2.top()<<endl;
          }
          else
          {
          int y=  s2.top();
          cout<<y<<endl;
          }
          
        }
        
        
        
    }
    
    
    
    return 0;
}
