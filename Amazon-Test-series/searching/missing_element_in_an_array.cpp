Missing elemnt in an array
https://practice.geeksforgeeks.org/problems/missing-number-in-array1416/1/?track=amazon-searching&batchId=192

class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        // Your code goes here
        int sum  = 0;
       for(int i=0;i<n-1;i++)
       {
           sum = sum + array[i];
       }
       int real_sum =( n*(n+1))/2;
       return real_sum-sum;
    }
    
};