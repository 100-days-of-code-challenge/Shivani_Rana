Heap
Kth largest element
https://www.interviewbit.com/old/problems/k-largest-elements/
__________________________________________________________________


vector<int> Solution::solve(vector<int> &A, int B) {
     priority_queue<int,vector<int>,greater<int>>minh;
      vector<int>v;
    
    for(int i =0;i<A.size();i++)
    {
        minh.push(A[i]);
        
        if(minh.size()>B)
        {
            minh.pop();
        }
        
    }
    while(!minh.empty())
    {
        v.push_back(minh.top());
        minh.pop();
    }
    reverse(v.begin(),v.end());
    return v;
}