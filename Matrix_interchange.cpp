GFG --- Matrix Interchange,  c++ course
https://practice.geeksforgeeks.org/problems/matrix-interchange/1/?track=module-2-arrays-and-strings&batchId=113#


class Solution{
    public:
    
    // Complete this function
    void interchange(vector<vector<int>>&arr, int r,int c)
    {
        // Your code here
      
      
       for(int i=0; i<r; i++) 
    {          
        
           swap(arr[i][0],arr[i][c-1]);
            
    	   
    
    
}
        
        // Printing the modified matrix
        for(int i=0;i<r;i++) { 
    	   for(int j=0;j<c;j++) {
        	   cout << arr[i][j] << " ";
            }
        	cout << endl;
    	}
    }
};