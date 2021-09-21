Full binary tree
Amazon series
https://practice.geeksforgeeks.org/problems/full-binary-tree/1/?track=amazon-trees&batchId=192#
_____________________________________________________________________


bool isFullTree (struct Node* root)
{
//add code here.
if(root== NULL)
return 1;
if(!root->left && !root->right)
return 1;

if(!root->left && root->right)
return 0;

if(root->left && !root->right)
 return false;

int l = isFullTree(root->left);
int r = isFullTree(root->right);

return l && r;
}
