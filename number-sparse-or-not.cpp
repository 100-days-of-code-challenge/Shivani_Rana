Number_is_a_sparse_or_not
https://practice.geeksforgeeks.org/problems/number-is-sparse-or-not-1587115620/1
__________________________________________________________________________________

class Solution
{
    public:
    //Function to check if the number is sparse or not.
    bool isSparse(int n)
    {
        // Your code
        int ans = 0;
        while(n)
        {
            n = n&(n<<1);
            ans++;
        }
        if(ans>=2)
        return 0;
        
        return 1;
    }
};
