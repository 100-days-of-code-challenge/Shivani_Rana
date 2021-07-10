merge without extra space -gfg
https://practice.geeksforgeeks.org/problems/merge-two-sorted-arrays-1587115620/1#
___________________________________________________________________________________


class Solution{
    public:
        //Function to merge the arrays.
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            // code here 
            int i =n-1;
            int j= 0;
            
            while(i>=0 && j<m)
            {
                if(arr1[i]>arr2[j])
                {
                    swap(arr1[i],arr2[j]);
                i--;
                j++;
                }
                else 
                {
                    
                
                i--;
                
                    
                }
            }
            
            sort(arr1,arr1+n);
            sort(arr2,arr2+m);
        } 
};