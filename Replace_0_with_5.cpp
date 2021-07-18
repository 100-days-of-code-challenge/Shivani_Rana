AmazonSdeTestSeries
Array-> Q1
https://practice.geeksforgeeks.org/problems/replace-all-0s-with-5/1/?track=amazon-arrays&batchId=192#

->You are given an integer N. You need to convert all zeroes of N to 5

_______________________________________________________________________________________________________

int convertFive(int n) {
    // Your code here
      int res = 0;
      int cur = 1;
      while(n)
      {
          int r = n%10;
          n /= 10;
          if(!r)
          r = 5;
          res = cur*r+res;
          cur*=10;
          
      }
      return res;
}