gfg question:- paranthesis checker
https://practice.geeksforgeeks.org/problems/parenthesis-checker2744/1
_______________________________________________________________________ 


bool ispar(string x)
    {
        stack<char>s;
        int l = x.size();
        for(int i=0;i<l;i++)
        {
            char c  = x[i];
            if(c=='(' || c == '[' || c== '{')
            {
               s.push(c);
            }
            else 
            {
                if(!s.empty())
                return false;
                
                if(c = ')' && s.top() != '(')
                return false;
                
                  if(c = '}' && s.top() != '{')
                    return false;
                
                  if(c = ']' && s.top() != '[')
                      return false;
                
                s.pop();
                
            }
        }
        
        // Y our code here
        
        return s.empty();
    }
