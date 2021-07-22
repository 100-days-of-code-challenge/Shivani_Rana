GFG --> Wave Array
https://practice.geeksforgeeks.org/problems/wave-array-1587115621/1/?company[]=Google&company[]=Google&problemStatus=unsolved&page=1&query=company[]GoogleproblemStatusunsolvedpage1company[]Google#
_____________________________________________________________________________________________________________________________________

class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to sort the array into a wave-like array.
    void convertToWave(vector<int>& arr, int n){
        
        // Your code here
        if(n%2==0)
        {
        for(int i =0;i<n;i+=2)
        {
            swap(arr[i],arr[i+1]);
        }
        }
        else{
            for(int i =0;i<n-1;i+=2)
            {
                swap(arr[i],arr[i+1]);
            }
        }
        
    }
};
