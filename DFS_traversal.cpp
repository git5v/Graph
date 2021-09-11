 void dfs(int node,vector<int>adj[],vector<int>&ans,vector<int>&vis)
    {
        ans.push_back(node);
        vis[node]=1;
        for(auto x:adj[node])
        {
            if(!vis[x]) dfs(x,adj,ans,vis);
        }
    }
    
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int>ans;
        vector<int>vis(V,0);
        dfs(0,adj,ans,vis);
        return ans;
    }
