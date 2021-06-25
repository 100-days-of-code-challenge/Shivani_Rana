vector<int>v;

void inorder(TreeNode* A)
{
    if(A== NULL)
    return;
    
    
    if(A->left != NULL)
    inorder(A->left);
    
    v.push_back(A->val);
    
    if(A->right != NULL)
    inorder(A->right);
    
}
 
interviewbit question-- 2sum-binary-tree
https://www.interviewbit.com/old/problems/2sum-binary-tree/
\_______________________________________________________________

int Solution::t2Sum(TreeNode* A, int B) {
    v.clear();
    
    inorder(A);
    
    int i,j;
    i = 0;
    j = v.size()-1;
    
    while(i<j)
    {
        if(v[i]+v[j] > B)
        j--;
        
        else if(v[i]+v[j]<B)
        i++;
        
        else if(v[i]+v[j]==B)
        return 1;
    }
    return 0;
}