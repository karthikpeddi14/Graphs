class Solution {
  public:
    
    void f(vector<int> adj[], vector<int>& ans, vector<int>& visited, int index)
    {
        ans.push_back(index);
        visited[index] = 1;
        for(auto it:adj[index]) 
        {
            if(visited[it]!=1) f(adj,ans,visited,it);
        }
    
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        vector<int> visited(V,0);
        vector<int> dfs;
        f(adj,dfs,visited,0);
        return dfs;
    }
};
