Party of couples
https://practice.geeksforgeeks.org/problems/alone-in-couple5507/1

class Solution{
    public:
    int findSingle(int N, int arr[]){
        // code here
        
        int ans = 0;
        for(int i =0;i<N;i++)
        {
            ans = ans^arr[i];
        }
        return ans;
    }
};