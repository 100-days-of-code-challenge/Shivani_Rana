gfg question --> reverse level order
https://practice.geeksforgeeks.org/problems/reverse-level-order-traversal/1
______________________________________________________________________________

vector<int> reverseLevelOrder(Node *root)
{
    // code here
    queue<Node*>q;
    stack<int>s;
    vector<int>v;
    
    if(root == NULL)
    return v;
    
    q.push(root);
    
    
    while(!q.empty())
    {
         Node* temp = q.front();
         
         q.pop();
         s.push(temp->data);
         
         if(temp->right != NULL)
         q.push(temp->right);
         
         if(temp->left != NULL)
         q.push(temp->left);
         
         
         
         
        
    }
    while(!s.empty())
    {
        v.push_back(s.top());
        s.pop();
    }
    
    return v;
}