Amazon Series
Symmetric Tree
https://practice.geeksforgeeks.org/problems/symmetric-tree/1/?track=amazon-trees&batchId=192
________________________________________________________________________

class Solution{
    public:
    // return true/false denoting whether the tree is Symmetric or not
    bool help(struct Node* root1, struct Node* root2 ){
        if(root1 == NULL && root2 == NULL)
        return true;
        
        if(root1 != NULL && root2 != NULL && root1->data == root2->data)
        return help(root1->left, root2->right) && help(root1->right, root2->left);
        
        return false;
        
    }
    bool isSymmetric(struct Node* root)
    {
	    // Code here
	    return help(root,root);
    }
};