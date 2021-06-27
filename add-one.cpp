interviewbit question
https://www.interviewbit.com/old/problems/add-one-to-number/
Given a non-negative number represented as an array of digits,

add 1 to the number ( increment the number represented by the digits ).

The digits are stored such that the most significant digit is at the head of the list.

Example:

If the vector has [1, 2, 3]

the returned vector should be [1, 2, 4]

as 123 + 1 = 124.


____________________________________________________________________________________

vector<int> Solution::plusOne(vector<int> &A) {

    int n = A.size();
    int i = n-1;
    
    if(A[n-1]<9)
    {
    A[n-1] =  A[n-1]+1;
    while(A[0]==0)
        A.erase(A.begin());
    return A;
    }
    
    else if(A[n-1] == 9)
    {
        A[n-1] += 1;
        int carry = A[n-1]/10;
        A[n-1] = A[n-1] %10;
        
        
        for(int i = n-2;i>=0;i--)
        {
            if(carry == 1)
            {
                A[i] += 1;
                carry = A[i]/10;
                A[i] = A[i]%10;
                
         
            }
        }
        
        if(carry == 1)
        A.insert(A.begin(),1);
       
     
    }
     
        while(A[0]==0)
        A.erase(A.begin());
    return A;
}

