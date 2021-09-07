DP-


class Solution {
public:
    bool subsetsum(vector<int>&nums,int s){
        int N = nums.size();
        
        int t[N+1][s+1];
        for(int i =0;i<N+1;i++)
        {
            for(int j =0;j<s+1;j++){
                if(i==0)
                    t[i][j] = 0;
                
                else{
                    t[i][j]=1;
                }
            }
        }
        
        for(int i =1;i<N+1;i++){
            for(int j =1;j<s+1;j++){
            
                if(nums[i-1]<=j)
                    t[i][j] = (t[i-1][j] || t[i-1][j-nums[i-1]] );
                else{
                    t[i][j]= t[i-1][j];
                }
            }
                
            
        }
        return t[N][s];
    }
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        for(int i =0;i<nums.size();i++)
        {
            sum += nums[i];
        }
        if(sum %2 !=0)
            return false;
        else{
            return subsetsum(nums,sum/2);
        }
    }
};