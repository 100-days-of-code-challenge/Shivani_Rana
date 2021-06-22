level order traversal of a binary tree
https://practice.geeksforgeeks.org/problems/level-order-traversal/1#
________________________________________________________________________


class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* node)
    {
        queue<Node*>q;
vector<int>v;
if(node==NULL)
return v;

q.push(node);
while(!q.empty())
{
Node*curr=q.front();
v.push_back(curr->data);
q.pop();
if(curr->left)
q.push(curr->left);
if(curr->right)
q.push(curr->right);
      
      }
      
   return v;   
    }
};