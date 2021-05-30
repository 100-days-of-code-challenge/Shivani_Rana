GFG question:- palindrome string
https://practice.geeksforgeeks.org/problems/palindrome-string0817/1#
________________________________________________________________________________

class Solution{
public:	
	
	
	int isPlaindrome(string S)
	{
	    int flag =1;
	    // Your code goes here
	    int l = S.length();
	    int i =0;
	    int j =l-1;
	    while(i<j)
	    {
	        if(S[i]!=S[j])
	        {
	        return 0;
	        }
	        i++;
	        j--;
	       
	        
	    }
	    return 1;
	    