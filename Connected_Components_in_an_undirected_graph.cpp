class Solution {
    private:
    void dfs(int i,vector<vector<int>> &adj,vector<int> &vis) // DFS on adjacency matrix 
    {
        vis[i] = 1;
        for(int ii=0;ii<adj[i].size();ii++)
        {
            if(!vis[ii] and adj[ii][i]) dfs(ii,adj,vis);  // check if not visited and matrix correspondings are also marked as 1
        }
    }
  public:
    int numProvinces(vector<vector<int>> adj, int V) {
        
        vector<int> vis(V,0);
        int c = 0 ;
        for(int i=0;i<V;i++)
        {
            if(!vis[i]) {c++; dfs(i,adj,vis);}
        }
        return c;
    }
