ques- Divisible Sum Pairs

https://www.hackerrank.com/challenges/divisible-sum-pairs/problem
________________________________________________________________________
int divisibleSumPairs(int n, int k, int ar_count, int* ar) {
    int count=0;
    
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if((ar[i]+ar[j])%k == 0)
            {
                count++;
            }
        }
    }
return count;
}