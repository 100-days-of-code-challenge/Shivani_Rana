342Interviewbit :- mzxSubArray  Problem
https://www.interviewbit.com/problems/max-sum-contiguous-subarray/
___________________________________________________________________


int Solution::maxSubArray(const vector<int> &A) {
    int max = 0;
    int res = A[0];
    int l= A.size();
    if(l==1)
    {
        return A[0];
    }
    for(int i=0;i<l;i++)
    {
        max = max+A[i];
        if(max<A[i])
        max = A[i];
        
        if(res < max)
         res = max;
    }
    return res;
    
    
}
