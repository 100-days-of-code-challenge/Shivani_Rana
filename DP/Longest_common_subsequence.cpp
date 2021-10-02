leetcode
DP ->string
LCS
https://leetcode.com/problems/longest-common-subsequence/submissions/



class Solution {
public:
   
    
    int longestCommonSubsequence(string text1, string text2) {
         int t[1001][1001];
        //memset(t,0,sizeof(t));
        
        int m = text1.size();
        int n = text2.size();
        for(int i =0;i<=m;i++)
        {
            for(int j =0;j<=n;j++){
                if(i==0 ||j==0)
                    t[i][j] = 0;
            }
        }     
        
        for(int i =1;i<=m;i++){
            for(int j =1;j<=n;j++){
               
                
            if(text1[i-1] == text2[j-1])
                t[i][j] = 1 + t[i-1][j-1];
                else{
                  t[i][j] =   max(t[i][j-1],t[i-1][j]);
                }
            }
        }
            
        return t[m][n];
        
    }
};