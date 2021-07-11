GFG Equilibrium Point
https://practice.geeksforgeeks.org/problems/equilibrium-point-1587115620/1#

class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        if(n==1)
        return 1;
        
        
        long long sum = 0;
        for(int i =0;i<n;i++)
        {
            sum += a[i];
        }
        
        long long lsum = 0;
        long long diff=0;
        
        for(int j=0;j<n-1;j++)
        {
            lsum += a[j];
            diff = sum - lsum +a[j];
            
         
         if(lsum == diff)
         return j+1;
         
            
        }
    return -1;
    }

};