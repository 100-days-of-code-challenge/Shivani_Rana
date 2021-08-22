Heap
n-Max-pair-combination
https://www.interviewbit.com/old/problems/n-max-pair-combinations/
_______________________________________________________________________

vector<int> Solution::solve(vector<int> &A, vector<int> &B) {
    int n = A.size();
    vector<int>v;
    priority_queue<pair<int,pair<int,int>>>maxh;
    sort(A.rbegin(),A.rend());
    sort(B.rbegin(),B.rend());
    
    for(int i =0;i<n;i++){
        maxh.push({A[i]+B[0],{i,0}});
        
    }
    while(n--)
    {
        pair<int,pair<int,int>> tp = maxh.top();
        maxh.pop();
        v.push_back(tp.first);
        int i = tp.second.first;
        int j = tp.second.second;
        maxh.push({A[i]+B[j+1],{i,j+1}});
    }
    return v;
    
}
