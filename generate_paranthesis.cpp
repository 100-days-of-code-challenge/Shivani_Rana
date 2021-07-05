geeksforgeeks - Recursion question
https://practice.geeksforgeeks.org/problems/generate-all-possible-parentheses/1/?category[]=Recursion&category[]=Recursion&page=1&query=category[]Recursionpage1category[]Recursion
_____________________________________________________________________________________________________________________________________________________________________________________

class Solution
{
    public:
    
    void generate(vector<string>&ans,int open,int close,int N,string str)
    {
        if(str.length() == 2*N)
        ans.push_back(str);
        
        if(open<N)
        generate(ans,open+1,close, N,str+'(');
        
        if(close<open)
        generate(ans,open,close+1,N,str+')');
        
        
    }
    
    vector<string> AllParenthesis(int n) 
    {
        // Your code goes here 
        vector<string>ans;
        generate(ans,0,0,n,"");
        
        return ans;
    
        
    }
};