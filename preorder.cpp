preorder traversal of a binary tree
_____________________________________

void preOrder(Node *root) {
        if(root == NULL)
        return;
        
        cout<<root->data<<" ";
        preOrder(root->left);
        preOrder(root->right);

    }