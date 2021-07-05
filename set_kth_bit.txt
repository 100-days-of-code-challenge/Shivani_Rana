gfg problem
https://practice.geeksforgeeks.org/problems/set-kth-bit3724/1

class Solution
{
public:
    int setKthBit(int N, int K)
    {
        // Write Your Code here
        int x = pow(2,K);
        int y = N | x;
        return y;
    }
    
};

