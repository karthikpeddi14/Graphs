vector < vector < int >> printAdjacency(int n, int m, vector < vector < int >> & edges) 
{
    vector<vector<int>> graph(n);
    for(int i=0 ; i<n ; i++) graph[i].push_back(i);
    for(int i=0 ; i<m ; i++)
    {
        int a = edges[i][0];
        int b = edges[i][1];
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    return graph;
    
}
