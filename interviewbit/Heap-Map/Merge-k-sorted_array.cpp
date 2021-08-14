Heap
https://www.interviewbit.com/old/problems/merge-k-sorted-arrays/
____________________________________________________________________


vector<int> Solution::solve(vector<vector<int> > &A) {
    vector<int>v;
    
    priority_queue<int,vector<int>,greater<int>>minh;
    
    for(int i =0;i<A.size();i++)
    {
        for(int j =0; j<A[i].size();j++)
        {
            minh.push(A[i][j]);
            
        }
    }
    while(minh.size() != 0)
    {
    v.push_back(minh.top());
    minh.pop();
    }
    
    return v;
}