BFS of Graph
https://practice.geeksforgeeks.org/problems/bfs-traversal-of-graph/1#
gfg
------------------------------------------------------------------------

class Solution
{
    public:
    //Function to return Breadth First Traversal of given graph.
	vector<int>bfsOfGraph(int V, vector<int> adj[])
	{
	    // Code here
	    vector<int>ans;
	    vector<int>visited(V,0);
	    queue<int>q;
	    q.push(0);
	    visited[0]=1;
	    
	    while(!q.empty())
	    {
	        int node= q.front();
	        ans.push_back(node);
	        q.pop();
	        for(auto i:adj[node])
	        {
	            if(!visited[i])
	            {
	            visited[i]=1;
	            
	            q.push(i);
	            }
	        }
	        
	    }
	    return ans;
	}
};