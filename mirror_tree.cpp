gfg-> MirrorProblem
Gooogle and many more
https://practice.geeksforgeeks.org/problems/mirror-tree/1/?company[]=Google&company[]=Google&page=1&query=company[]Googlepage1company[]Google


class Solution {
  public:
    // Function to convert a binary tree into its mirror tree.
    void mirror(Node* node) {
        // code here
         if(node==NULL)
    return;
    
    
    mirror(node->left);
    mirror(node->right);
    
    Node* tmp = node->left;
    node->left = node->right;
    node->right = tmp;

    }
};
