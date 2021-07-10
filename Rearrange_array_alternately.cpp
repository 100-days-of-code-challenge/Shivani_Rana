GEEKS FOR GEEKS PROBLEM - Rearrange Array Altternately
https://practice.geeksforgeeks.org/problems/-rearrange-array-alternately-1587115620/1#
________________________________________________________________________________________

class Solution{
    public:
    // This function wants you to modify the given input
    // array and no need to return anything
    // arr: input array
    // n: size of array
    //Function to rearrange  the array elements alternately.
    void rearrange(long long *arr, int n) 
    { 
    	
    	// Your code here
    	int mini = 0;
    	int maxi = n-1; 
    	int maxe = arr[n-1]+1;
    	
    	for(int i = 0;i<n;i++)
    	{
    	    if(i%2 == 0)
    	    {
    	        arr[i]= (arr[i]+(arr[maxi]%maxe) * maxe);
    	        maxi--;
    	        
    	    }
    	    else{
    	        arr[i] += (arr[mini]%maxe)*maxe;
    	        mini++;
    	    }
    	}
    	for(int i=0;i<n;i++)
    	arr[i] = arr[i]/maxe;
    	 
    }
};
