kth-smallest- element- interviewbit
https://www.interviewbit.com/problems/kth-smallest-element-in-tree/


vector<int>s;
 void inorder(TreeNode* A)
 {
     
     if(A==NULL)
     return ;
     
     if(A->left != NULL)
     inorder(A->left);
     
     s.push_back(A->val);
     
     if(A->right != NULL)
     inorder(A->right);
     
     
     
 }
 
int Solution::kthsmallest(TreeNode* A, int B) {
      s.clear();
     inorder(A);
     
     return s[B-1];
}