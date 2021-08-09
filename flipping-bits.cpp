HackerRank
bit manipulation
https://www.hackerrank.com/challenges/flipping-bits/problem
------------------------------------------------------------------



long flippingBits(long n) {
        // bitset<32>b(n);
        // for(int i =0;i<b.size();i++)
        // b.flip(i);
        
        // return b;
        
        for(int i =0;i< 32;i++)
        {
            n = n ^ 1U<<i;
        }
    return n;
    

}