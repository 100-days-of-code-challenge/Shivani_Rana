interviewbit question- path-to-a-given-node
https://www.interviewbit.com/old/problems/path-to-given-node/
_________________________________________________________________

bool hasPath(TreeNode* A, vector<int>&v,int x)
 {
     if(A == NULL)
     return false;
     
     
    v.push_back(A->val);
    
    if(A->val == x)
    return true;
    
    
    if(hasPath(A->left,v,x) || hasPath(A->right,v,x))
    return true;
    
    v.pop_back();
    return false;
 }
 
vector<int> Solution::solve(TreeNode* A, int B) {
    
    vector<int>v;
    hasPath(A,v,B);
    return v;
}