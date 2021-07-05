GFG bit manipulation

https://practice.geeksforgeeks.org/problems/bit-difference-1587115620/1

class Solution{
    public:
    // Function to find number of bits needed to be flipped to convert A to B
    int countBitsFlip(int a, int b){
        
        // Your logic here
        int x = a^b;
        return __builtin_popcount(x);
        
    }
};