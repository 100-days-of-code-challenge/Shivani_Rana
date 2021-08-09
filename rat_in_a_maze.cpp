BackTracking
Rat in Maze
https://practice.geeksforgeeks.org/problems/rat-in-a-maze-problem/1#
_______________________________________________________________________

class Solution{
    public:
    
    void helper(vector<vector<int>> &m,int i,int j,int n,vector<string>&res,string path)
{
    if(i<0 || i>=n || j<0 || j>=n || m[i][j]!=1)
    return;
    if(i==n-1 && j==n-1){
        res.push_back(path);
        return ;
    }
    m[i][j]=-1;
    helper(m,i+1,j,n,res,path+'D');
    helper(m,i-1,j,n,res,path+'U');
    helper(m,i,j+1,n,res,path+'R');
    helper(m,i,j-1,n,res,path+'L');
    m[i][j]=1;
}