Bit manipulation gfg
https://practice.geeksforgeeks.org/problems/toggle-bits-given-range0952/1

class Solution {

  public:
    int toggleBits(int N , int L , int R) {
        // code here
        int x = pow(2,R)-1;
        int y = pow(2,L-1)-1;
        int z = x ^ N;
        
        int num = z^y;
        
        return num;
    }
};