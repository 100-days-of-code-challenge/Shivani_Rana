Heap
Profit_maximisation
https://www.interviewbit.com/old/problems/profit-maximisation/
_________________________________________________________________



int Solution::solve(vector<int> &A, int B) {
    int ans =0;
    priority_queue<int>maxh;
    
    for(int i =0;i<A.size();i++)
    {
        maxh.push(A[i]);
        
    }
    while(B != 0)
    {
        int k = maxh.top();
        ans= ans+k;
        maxh.pop();
        k--;
        maxh.push(k);
        B--;
        
    }
    return ans;
    
}