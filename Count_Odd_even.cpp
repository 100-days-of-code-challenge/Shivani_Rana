GFG ---> C++ Problem
https://practice.geeksforgeeks.org/problems/count-odd-even/1/?track=module-2-arrays-and-strings&batchId=113#
CountOdd Even
_______________________________________________________________________________________________________________


class Solution{
    public:
    /*Function to count even and odd elements in the array
    * arr : Array with its elements
    * sizeof_array : number of array elements
    * countOdd : variable to count number of odd elements
    * countEven : variable to count number of even elements
    */
    void countOddEven(int arr[], int sizeof_array)
    {
        
        // your code here
        int counte = 0;
        int counto=0;
        for(int i =0;i<sizeof_array;i++)
        {
            if(arr[i]%2==0)
            counte++;
            
            else
            counto++;
            
        }
        cout<<counto<<" "<<counte<<endl;
       
        
    }
};