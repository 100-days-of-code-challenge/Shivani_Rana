gfg problem:- reverse a string with staCK
https://practice.geeksforgeeks.org/problems/reverse-a-string-using-stack/1#
_______________________________________________________________________

char* reverse(char *S, int len)
{
    char a[len];
    
    //code here
    stack<char>s;
    for(int i=0;i<len;i++)
    {
        s.push(S[i]);
        
    }
    for(int i=0;i<len;i++)
    {
        S[i]=s.top();
        s.pop();
    }
    return S;
}