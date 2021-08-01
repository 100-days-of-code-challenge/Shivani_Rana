DFS of Graph
https://practice.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1#
GFG
-----------------------------------------------------------------------------------

class Solution 
{
    public:
	//Function to return a list containing the DFS traversal of the graph.
	vector<int>dfsOfGraph(int V, vector<int> adj[])
	{
	    // Code here
	    vector<int>ans;
	    vector<bool>b(V,false);
	    dfs(0,adj,V,b,ans);
	    return ans;
	    
	    
	}
	
	void dfs(int v,vector<int>adj[],int V, vector<bool>&b,vector<int>&ans)
	{
	    b[v]= true;
	    ans.push_back(v);
	    for(int i:adj[v]){
	    if(!b[i])
	    dfs(i,adj,V,b,ans);
	    }
	}
};