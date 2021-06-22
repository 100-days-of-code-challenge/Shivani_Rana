height of a binary tree
__________________________________________ 

int height(Node* root) {
        // Write your code here.
        if(root == NULL)
            return -1;
        
       int lheight = height(root->left);
       int rheight = height(root->right);
       
       if(lheight > rheight)
       return lheight+1;
       
       else
       return rheight+1;
        
        
    }
