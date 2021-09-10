count squares
https://practice.geeksforgeeks.org/problems/count-squares3649/1#
________________________________________________________________

class Solution {
  public:
    int countSquares(int N) {
        // code here
        int count =0;
        for(int i=1;i*i<N;i++){
            count++;
        }
        return count;
    }
};
