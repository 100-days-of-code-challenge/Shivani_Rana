height of binary tree
https://practice.geeksforgeeks.org/problems/height-of-binary-tree/1#

class Solution{
    public:
    //Function to find the height of a binary tree.
    int height(struct Node* node){
        // code here 
         if(node == NULL){
        return 0;
    }
    int r = height(node->right);
    int l = height(node->left);
    return  max(r,l)+1;
    }
};