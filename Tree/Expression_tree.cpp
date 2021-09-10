flipkart
gfg
expression tree
https://practice.geeksforgeeks.org/problems/expression-tree/1/?category[]=Tree&category[]=Tree&company[]=Flipkart&company[]=Flipkart&page=1&query=category[]Treecompany[]Flipkartpage1company[]Flipkartcategory[]Tree#

class Solution{
  public:
    /*You are required to complete below method */
    int x =0;
    int evalTree(node* root) {
        int lt =0;
        int rt = 0;
        // Your code here
        if(root == NULL){
            return NULL;
        }

          if(root->left == NULL && root->right == NULL){
               return stoi(root->data);
               
           }   
           lt = evalTree(root->left);
           rt = evalTree(root->right);
           
           if(root->data == "+")
               return lt+rt;
           if(root->data == "*")
                return lt*rt;
                if(root->data == "/")
                return lt/rt;
                if(root->data == "-")
                return lt-rt;
           
           
        
    }
};
