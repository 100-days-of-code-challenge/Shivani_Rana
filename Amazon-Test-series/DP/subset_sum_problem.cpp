-Dp
amazon series
subset sum problem

https://practice.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1/?category[]=Dynamic%20Programming&category[]=Dynamic%20Programming&page=4&query=category[]Dynamic%20Programmingpage4category[]Dynamic%20Programming#

class Solution{   
public:

    bool isSubsetSum(int N, int arr[], int sum){
        // code here 
        int t[N+1][sum+1];
        for(int i =0;i<N+1;i++)
        {
            for(int j =0;j<sum+1;j++){
                if(i==0)
                {
                    t[i][j]=0;
                }
                if(j==0)
                t[i][j] = 1;
            }
        }
        for(int i =1;i<N+1;i++)
        {
            for(int j =0;j<sum+1;j++)
            {
                if(arr[i-1]<=j)
                t[i][j] = (t[i-1][j] || t[i-1][j-arr[i-1]]);
                
                else{
                    t[i][j] = t[i-1][j];
                    
                }
            }
        }
        return t[N][sum];
    }
};