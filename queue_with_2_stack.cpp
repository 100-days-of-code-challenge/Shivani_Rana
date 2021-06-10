gfg problem, hackerrank problem;- implementing queue using 2 stack


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
        if(s1.empty())
        {
            s1.push(x);
        }
        else{
            while(!s1.empty())
            {
            s2.push(s1.top());
            s1.pop();
            }
            s1.push(x);
            while(!s2.empty())
            {
            s1.push(s2.top());
            s2.pop();
            }
          }
                                                            
        }
        else if(type ==2)
        {
            if(!s1.empty())
            {
               s1.pop();    
            }
        }
        else if(type == 3)
        {

          int y=  s1.top();
          cout<<y<<endl;

          
        }
        
        
        
    }
    
    
    
    return 0;
}