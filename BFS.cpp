vector<int> bfsTraversal(int n, vector<vector<int>> &adj){
    vector<int> visited(n,0);
    vector<int> ans;
    queue<int> q;
    q.push(0);
    visited[0] = 1;


    while(!q.empty())
    {
        int a = q.front();
        ans.push_back(a);
        q.pop();
        for(int i=0 ; i<adj[a].size() ; i++)
        {
          if (visited[adj[a][i]] == 0) {
            q.push(adj[a][i]);
            visited[adj[a][i]] =1;
          }
        }
    }
    return ans;
}
