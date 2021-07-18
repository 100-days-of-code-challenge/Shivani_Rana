GFG --->c++ course
https://practice.geeksforgeeks.org/problems/need-some-change/1/?track=module-2-arrays-and-strings&batchId=113#

class Solution{
  public:
    void swapElements(int arr[], int sizeof_array){
        
        // Your code here
       for(int i =0;i<sizeof_array-2;i++)
       {
           swap(arr[i],arr[i+2]);
       }
          
         
    }
};