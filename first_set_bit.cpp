geeksforgeeks-> first set bit
https://practice.geeksforgeeks.org/problems/find-first-set-bit-1587115620/1#
_________________________________________________________________________________

class Solution
{
    public:
    //Function to find position of first set bit in the given number.
    unsigned int getFirstSetBit(int n)
    {
        // Your code here
       unsigned int x = (n & -n);
        return log2(x)+1;
    }
};