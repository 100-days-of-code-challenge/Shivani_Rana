postorder traversal of a binary tree
_______________________________________

void postOrder(Node *root) {
        
        if(root == NULL)
        return;
        
        postOrder(root->left);
        postOrder(root->right);
        cout<<root->data<<" ";

    }