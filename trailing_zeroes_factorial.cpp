gfg--> Trailing zeroes in factorial
https://practice.geeksforgeeks.org/problems/trailing-zeroes-in-factorial5134/1#
_________________________________________________________________________________


int trailingZeroes(int N){
if(N<5)
return 0;
return (N/5)+trailingZeroes(N/5);
}