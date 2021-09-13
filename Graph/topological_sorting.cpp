Topological sorting

https://practice.geeksforgeeks.org/problems/topological-sort/1#

adjacency list + indegree array +queue 

class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	    vector<int>ans;
	    vector<int>indegree(V,0);
	    queue<int>q;
	    
	    for(int i =0;i<V;i++){
	        for(auto u : adj[i]){
	            indegree[u]++;
	        }
	    }
	    for(int i =0;i<V;i++){
	        if(indegree[i]==0){
	            q.push(i);
	        }
	    }
	    while(!q.empty()){
	        int u = q.front();
	        ans.push_back(u);
	        for(auto v:adj[u]){
	            indegree[v]--;
	            if(indegree[v]==0){
	                q.push(v);
	            }
	        }
	        q.pop();
	    }
	    return ans;
	}
};
