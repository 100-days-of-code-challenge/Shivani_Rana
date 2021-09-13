BFS of a graph
adjacency list+visited array+queue
https://practice.geeksforgeeks.org/problems/bfs-traversal-of-graph/1#


class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        bool visited[V] = {0};
        vector<int>ans;
        queue<int>q;
        q.push(0);
        visited[0]=true;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            ans.push_back(node);
            vector<int>:: iterator it;
            for(it=adj[node].begin();it!=adj[node].end();it++){
                if(!visited[*it]){
                    visited[*it] = true;
                    q.push(*it);
              }
                      }
           
            
        }
        return ans;
    }
};
