   vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int>ans;
        queue<int>q;
        q.push(0);
        vector<int>vis(V,0);
        vis[0]=1;
        
        while(!q.empty())
        {
            int t = q.front();
            q.pop();
            ans.push_back(t);
            
            for(auto x:adj[t])
            {
                if(!vis[x])
                {  
                    vis[x]=1;
                   q.push(x);
                }
            }
        }
        return ans;
    }
