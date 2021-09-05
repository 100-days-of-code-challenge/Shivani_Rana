leetcode
set-matrix-zeroes
https://leetcode.com/problems/set-matrix-zeroes/submissions/
___________________________________________________________________

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        bool row[m];
        for(int i =0;i<m;i++)
            row[i]= false;
        
        
        bool column[n] ;
        for(int i =0;i<n;i++)
            column[i]= false;
        
        for(int i =0;i<m;i++){
            for(int j =0;j<n;j++)
            {
                if(matrix[i][j]==0){
                    row[i] = true;
                    column[j] = true;
                }
            }        
        }
        for(int i =0;i<m;i++){
            for(int j =0;j<n;j++){
                if(row[i]==1 || column[j]==1){
                    matrix[i][j]=0;
                }
            }
        }
        
    }
};