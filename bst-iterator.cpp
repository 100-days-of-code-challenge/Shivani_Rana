interviewbit question->bst iterator
https://www.interviewbit.com/old/problems/bst-iterator/
___________________________________________________________

stack<TreeNode*>s;
 
 void Linsert(TreeNode *root)
 {
     if(root ==NULL)
     return;
     
     
     s.push(root);
     
     if(root->left != NULL)
     Linsert(root->left);
 }

BSTIterator::BSTIterator(TreeNode *root) {
    while(!s.empty())
    s.pop();
    
    Linsert(root);
    

}

/** @return whether we have a next smallest number */
bool BSTIterator::hasNext() {
    if(s.empty())
    return false;
    
    return true;

}

/** @return the next smallest number */
int BSTIterator::next() {
    TreeNode* temp = s.top();
    s.pop();
    Linsert(temp->right);
    
    return temp->val;

}