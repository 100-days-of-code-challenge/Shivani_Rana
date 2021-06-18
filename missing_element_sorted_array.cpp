Missing number in an array
N-1 size of array, distinct integer in the range 1 to N
when array is sorted
_______________________________________________________________

class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        // Your code goes here
       int i=0;
       while(i+1 == array[i])
       i++;
       
       
       return i+1;
    }
    
};