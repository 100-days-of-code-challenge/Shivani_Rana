height of the tree
Amazon series
https://practice.geeksforgeeks.org/problems/height-of-binary-tree/1/?track=amazon-trees&batchId=192
=------------------------------------------------------------


class Solution{
    public:
    //Function to find the height of a binary tree.
    int height(struct Node* node){
        // code here 
        if(node == NULL)
        return 0;
        
        int l = height(node->left);
        int r = height(node->right);
        
        return max(l,r)+1;
    }
};