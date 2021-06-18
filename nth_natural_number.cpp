GFG question--> Nth natural number
https://practice.geeksforgeeks.org/problems/nth-natural-number/1#
_______________________________________________________________________


class Solution{
	public:
    	long long findNth(long long N)
    {
        // code here.
        if(N<9)
        return N;
        
       long long res = 0;
        long long p = 1;
        
        while(N)
        {
            res += p * (N % 9);
            
            N /= 9;
            
            p *= 10;
        }
        
        return res;
            
            
        }
};