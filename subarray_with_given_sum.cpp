MUST DO QUESTION - GFG;
subarray with given sum;
https://practice.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1#
____________________________________________________________________________________

class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    void sum(vector<int>&a,int arr[],int n,int s)
    {
        int i =0;
        int j=0;
        int temp =0;
        int flag =0;
        
        
        for(;j<n;j++)
        {
            temp = temp+arr[j];
            
            while(temp>s)
            {
            temp = temp - arr[i];
            i++;
            
        }
        
        if(temp == s)
        {
        flag = 1;
        break;
        }
        
        
        }
        if(flag == 1)
        {
        a.push_back(i+1);
        a.push_back(j+1);
        }
        else
        a.push_back(-1);
    }
    vector<int> subarraySum(int arr[], int n, int s)
    {
        // Your code here
        vector<int>a;
        sum(a,arr,n,s);
        return a;
        
    }
};
