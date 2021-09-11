Left view if binary Tree
https://practice.geeksforgeeks.org/problems/left-view-of-binary-tree/1#
___________________________________________________________________________



vector<int> leftView(Node *root)
{
   // Your code here
   vector<int>v;
   queue<Node*>q;
   if(root == NULL){
       return v;
       
   }
   q.push(root);
   
   
   
   while(!q.empty()){
        
       int n = q.size();
       for(int i =0;i<n;i++){
         Node* temp = q.front();
          q.pop();
         
          if(i==0){
          v.push_back(temp->data);    
          }
          
            if(temp->left != NULL){
                q.push(temp->left);
            }
            if(temp->right != NULL){
                q.push(temp->right);
            }
          
             
             
       }
   }
   return v;
   
}