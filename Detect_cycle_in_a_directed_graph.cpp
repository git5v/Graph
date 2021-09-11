bool solve(int node,vector<int>&vis,vector<int>&order,vector<int>adj[])
    {
        vis[node]=1;
        order[node]=1;
        for(auto x:adj[node])
        {
            if(!vis[x])
            {
                if(solve(x,vis,order,adj)) return true;
            }
            else if(order[x]) return true;
        }
        order[node]=0;
        return false;
    }
    
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        vector<int>vis(V,0);
        vector<int>order(V,0);
        for(int i=0;i<V;i++)
        {
            if(!vis[i])
            {
             if(solve(i,vis,order,adj)) return true;   
            }
        }
        return false;
    }
