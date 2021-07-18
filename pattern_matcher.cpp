GFG -> c++ course
The pattern matcher
https://practice.geeksforgeeks.org/problems/the-pattern-matcher/1/?track=module-2-arrays-and-strings&batchId=113#
_______________________________________________________________________________________________________

class Solution{
    public:
    void follPatt(string s)
    {
       //Your code here
       bool flag = true; 
       int count = 0;
       
       for(int i =0;i<s.length();)
       {
           if(s[i]=='x')
           {
               while(s[i]=='x')
               {
               count++;
               i++;
               }
           }
          else if(s[i]=='y')
           {
               while(s[i]=='y')
               {
               count--;
               i++;
               }
               
               if(count != 0)
               {
                   flag = false;
                   break;
               }
           }
       }
           
           if (flag & count == 0) {
            cout << 1 << endl;
            } 
            else {
               cout << 0 << endl;
           
       
       
       
      // cout<<endl;
    }
    }
};