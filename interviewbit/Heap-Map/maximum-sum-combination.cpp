Heap
Maximum-sum-combination
https://www.interviewbit.com/old/problems/maximum-sum-combinations/
______________________________________________________________________



vector<int> Solution::solve(vector<int> &A, vector<int> &B, int C) {
    
    vector<int>v;
    sort(A.rbegin(),A.rend());
    sort(B.rbegin(),B.rend());
    priority_queue<int,vector<int>,greater<int>>minh;
    
    for(int i =0; i<C; i++)
    {
        for(int j =0;j<C;j++)
        {
            minh.push(A[i]+B[j]);
              if(minh.size()>C)
                  minh.pop();
        }
    }
    while(C != 0)
    {
        v.push_back(minh.top());
        minh.pop();
        C--;
    }
        reverse(v.begin(),v.end());
    return v;
    
}