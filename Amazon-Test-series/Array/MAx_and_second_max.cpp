gfg
amazon series
Max and second max
https://practice.geeksforgeeks.org/problems/max-and-second-max/1/?track=amazon-arrays&batchId=192#
______________________________________________________________________________


class Solution{
  public:
    /* Function to find largest and second largest element
    *sizeOfArray : number of elements in the array
    * arr = input array
    */
    vector<int> largestAndSecondLargest(int n, int arr[]){
        int max = -1, max2= -1;
        vector<int>v;
        for(int i =0;i<n;i++){
            if(arr[i]>max){
                max2 = max;
                max = arr[i];
            }
            
            else if(arr[i]>max2 && arr[i]!=max){
                max2 = arr[i];
            }
            
        }
        v.push_back(max);
            v.push_back(max2);
        return v;
        /*********************************
         * Your code here
         * This function should return a
         * vector with first element as
         * max and second element as 
         * second max
         * *******************************/
         
    }
};