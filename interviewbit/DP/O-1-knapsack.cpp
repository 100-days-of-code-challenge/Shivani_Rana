0-1 knapsack problem
https://www.interviewbit.com/old/problems/0-1-knapsack/
___________________________________________________________________________


int t[1001][1001];
int knapsack(vector<int>&A,vector<int>&B,int C,int n)
{
   
    if(C ==0 || n ==0)
    {
        return 0;;
    }
        if(t[n][C] != -1)
        return t[n][C];
    
    if(B[n-1]<=C)
    {
        return t[n][C] = max(A[n-1]+knapsack(A,B,C-B[n-1],n-1),knapsack(A,B,C,n-1));
        
    }
    else if(B[n-1]>C)
    return t[n][C]=knapsack(A,B,C,n-1);
}
int Solution::solve(vector<int> &A, vector<int> &B, int C) {
    memset(t , -1 , sizeof(t)); 
    int n = A.size();
    return knapsack(A,B,C,n);
    
}
