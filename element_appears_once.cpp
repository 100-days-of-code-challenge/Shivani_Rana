GFG- divide and conquer problem
https://practice.geeksforgeeks.org/problems/find-the-element-that-appears-once-in-sorted-array0624/1
find the element that appears once in sorted array


class Solution
{
  public:
    int findOnce(int arr[], int n)
    {
        //code here.
        int low = 0;
      int high = n-1;
      
      if(high == 0)
      return arr[0];
      
      
while(low<high)
{
    if(low == high)
    return arr[low];
    
    
    int mid = (low+high)/2;
    
   if(mid%2 == 0)
   {
       if(arr[mid] == arr[mid-1])
       high = mid-2;
       else
       
       low = mid;
   }
   else{
       if(arr[mid]==arr[mid+1])
       high = mid-1;
       else
       low = mid+1;
   }

    

    }
    return arr[low];
}
};-