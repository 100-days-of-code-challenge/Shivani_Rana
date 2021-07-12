gfg - chocolate distribution problem
https://practice.geeksforgeeks.org/problems/chocolate-distribution-problem3825/1#


class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    
     sort(a.begin(),a.end());
    long long i=0,j=m-1,mi=INT_MAX;
    while(j<n)
    {
        mi=min(mi,a[j]-a[i]);
        ++i;
        ++j;
    }
    return mi;
    
    }   
};