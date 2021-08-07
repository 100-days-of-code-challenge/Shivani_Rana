gfg
bit manipulation
longest consecutive 1
https://practice.geeksforgeeks.org/problems/longest-consecutive-1s-1587115620/1#


class Solution
{
    public:
    int maxConsecutiveOnes(int x)
    {
        // code here
        
        int ans = 0;
        while(x)
        {
            x = x&(x<<1);
            ans++;
        }
        return ans;
        
    }
};
