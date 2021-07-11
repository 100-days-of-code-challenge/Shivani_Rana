GFG - Leaders in an Array
https://practice.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1#
___________________________________________________________________________________

class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        int max = a[n-1];
        vector<int>v;
        v.push_back(a[n-1]);
        
        for(int i = n-2;i>=0;i--)
        {
            if(max>a[i])
            {
                continue;
            }
            else if(a[i]>=max)
            {
                v.push_back(a[i]);
                max = a[i];
                
            }
            
        }
        reverse(v.begin(),v.end());
        return v;
    }
};
