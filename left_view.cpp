Left view if Binay Tree
https://practice.geeksforgeeks.org/problems/left-view-of-binary-tree/1#
______________________________________________________________________________

void find_result(Node* root, int height, vector<int>&result)
{
    if(root == NULL)
    return;
    
    
    if(height>result.size())
    result.push_back(root->data);
    
    
    find_result(root->left,height+1,result);
    find_result(root->right,height+1,result);
    
}

vector<int> leftView(Node *root)
{
   // Your code here
   vector<int>result;
   find_result(root,1,result);
   return result;
   
   
}