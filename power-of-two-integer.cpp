Interviewbit problem- power-of-two-integer
https://www.interviewbit.com/problems/power-of-two-integers/


int Solution::isPower(int A) {
    if(A == 1)
    {
        return true;
    }
    
    for(int x = 2; x <= sqrt(A); x++)
    {
        unsigned long long product = x * x;
        
        while(product <= A && product > 0)
        {
            if(product == A)
            {
                return true;
            }
            
            product = product * x;
        }
    }
    
    return false;
}