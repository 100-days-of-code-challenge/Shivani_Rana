inOrder traversal of a binary tree
___________________________________ 

void inOrder(Node *root) {
        if(root==NULL)
        return;
        
        
        inOrder(root->left);
        cout<<root->data<<" ";
        inOrder(root->right);

    }