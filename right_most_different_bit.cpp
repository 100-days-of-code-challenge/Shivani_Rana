geeksforgeeks problem - bit manipulation-- rightmost different bit
https://practice.geeksforgeeks.org/problems/rightmost-different-bit-1587115621/1#
___________________________________________________________________________________


class Solution
{
    public:
    //Function to find the first position with different bits.
    int posOfRightMostDiffBit(int m, int n)
    {
        // Your code here
        int x = m^n;
        return (log2(x & -x))+1;
    }
};