Heap
magician-and-chocolate
https://www.interviewbit.com/old/problems/magician-and-chocolates/
____________________________________________________________________

int Solution::nchoc(int A, vector<int> &B) {
    
    priority_queue<int>maxh;
    for(int i =0;i<B.size();i++)
    {
        maxh.push(B[i]);
    }
    
    int ans = 0;
    int mod = 1000000007;
    while(A != 0)
    {
        int k = maxh.top();
        maxh.pop();
        
        ans = (ans%mod) + (k%mod);
        A--;
        maxh.push(floor(k/2));
        
    }
    
    return ans%mod;
}
