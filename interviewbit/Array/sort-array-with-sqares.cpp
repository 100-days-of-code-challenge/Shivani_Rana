https://www.interviewbit.com/old/problems/sort-array-with-squares/


vector<int> Solution::solve(vector<int> &A) {
    for(int i =0;i<A.size();i++)
    {
        A[i]=A[i]*A[i];
    }
    
    sort(A.begin(),A.end());
    return A;
    
}
