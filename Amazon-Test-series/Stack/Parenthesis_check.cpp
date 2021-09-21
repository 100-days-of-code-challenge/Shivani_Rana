Parenthesis Check
GFg must do
https://practice.geeksforgeeks.org/problems/parenthesis-checker2744/1#
------------------------------------------------------------------------


class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    stack<char>s;
    bool helper(char a, char b){
        if(a=='(' & b==')')
        return true;
        
       else if(a== '{' && b == '}')
        return true;
        
        else if(a == '[' && b == ']'){
            return true;
        }
        
        return false;
    }
    bool ispar(string x)
    {
        // Your code here
        int n = x.size();
        
        for(int i =0;i<n;i++){
            if(x[i] == '(' ||x[i] == '{' || x[i]=='[')
            {
                s.push(x[i]);
            }
            else if(s.empty())
            return 0;
            
            else if(x[i] == ')' || x[i] ==  '}' || x[i]== ']'){
                char l = s.top();
                if(!helper(l,x[i]))
                return false;
                
                s.pop();
                    
                
            }
            
        }
       
        if(s.empty())
            return true;
            else
            return false;
    }  

};