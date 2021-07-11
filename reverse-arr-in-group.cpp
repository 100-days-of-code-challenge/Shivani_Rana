GFG Problem - reverse array in groups
https://practice.geeksforgeeks.org/problems/reverse-array-in-groups0255/1#

class Solution{
public:
    //Function to reverse every sub-array group of size k.
    void reverse(vector<long long >&arr,int i,int j)
    {
        while(i<j)
        swap(arr[i++],arr[j--]);
    }
    void reverseInGroups(vector<long long>& arr, int n, int k){
        // code here
        int i = 0,j=k-1;
        while(j<n)
        {
            reverse(arr,i,j);
            
            i = j + 1;
            j += k;
    }
        
       if(j > n){
        j = n - 1;
        reverse(arr, i, j);
    }
        
        
    }
};