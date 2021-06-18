GFG merge sort


class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
    {
         // Your code here
         int temp[r-l+1]; 
         int i = l;
         int j = m+1;
         int k = 0;
         
         while(i<=m && j<= r)
         {
             if(arr[i]<arr[j])

{             
    temp[k]= arr[i];
    
    k += 1;
    i += 1;
    
    
         }
         else{
             temp[k]= arr[j];
              k += 1;
              j += 1;
             
         }
         }
         while(i<=m)
         {
             temp[k]=arr[i];
             k += 1;
             i += 1;
         }
        
         while(j<=r)
         {
             temp[k]=arr[j];
             k += 1;
             j += 1;
         }
         for(i = l; i <= r; i += 1) {
		arr[i] = temp[i - l];
	}
          
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        //code here
        if(l<r)
        {
            int mid = (l + r) / 2;
		mergeSort(arr, l, mid);
		mergeSort(arr, mid+1, r);
		merge(arr, l, mid, r);
        }
    }
};

// { Driver Code Starts.


int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}  // } Driver Code Ends