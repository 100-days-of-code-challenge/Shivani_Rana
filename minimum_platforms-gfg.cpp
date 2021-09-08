Minimum platforms
https://practice.geeksforgeeks.org/problems/minimum-platforms-1587115620/1#
________________________________________________________________________________

class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
    	sort(arr,arr+n);
    	sort(dep,dep+n);
    	int pf =1;
    	int j =0;
    	for(int i =1;i<n;i++){
    	    if(arr[i]<=dep[j])
    	    pf++;
    	    else{
    	        j++;
    	    }
    	   
    	}
    	 return pf;
    }
};