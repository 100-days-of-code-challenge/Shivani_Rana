GEEKSFOR GEEKS problem -> check whether kth bit is set or not
https://practice.geeksforgeeks.org/problems/check-whether-k-th-bit-is-set-or-not-1587115620/1#

class Solution
{
    public:
    // Function to check if Kth bit is set or not.
    bool checkKthBit(int n, int k)
    {
        // Your code here
        // It can be a one liner logic!! Think of it!!
        int x = 1<<k;
        if(n&x)
        {
        return 1;
        }
        return 0;
    }
};