BFS of a graph

queue, visited array, adjacency list 

class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int>ans;
        queue<int>q;
        bool visited[V] = {0};
        
        q.push(0);
        visited[0] = 1;
        
        while(!q.empty()){
            int temp = q.front();
            q.pop();
            ans.push_back(temp);
            for(auto x : adj[temp]){
                if(visited[x] == 0){
                    visited[x] = 1;
                    q.push(x);
                }
            }
        }
        return ans;
    }
};