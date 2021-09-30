DFS of a graph
__________________
visited array, adjacency list and recursion 

void dfs(vector<int> adj[],int s,bool visited[],vector<int>&ans){
        visited[s]=true;
        ans.push_back(s);
        for(auto x : adj[s]){
            if(visited[x]==false){
                dfs(adj,x,visited,ans);
            }
        }
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        bool visited[V]={0};
        vector<int>ans;
        dfs(adj,0,visited,ans);
        return ans;
    }
};