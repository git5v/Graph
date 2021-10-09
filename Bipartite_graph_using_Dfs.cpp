bool bipartileDfs(int node,vector<int>adj[],int color[])
    {
        if(color[node]==-1)
            color[node]=1;
            
        for(auto it:adj[node])
        {
            if(color[it]==-1)
            {
                color[it]=!color[node];
                if(!bipartileDfs(it,adj,color)) return false;
            }
            else 
            {
                if(color[it]==color[node]) return false;
            }
        }
        return true;
    }
    
public:

	bool isBipartite(int V, vector<int>adj[]){
	    // Code here
	    int color[V];
	    memset(color,-1,sizeof color);
	    
	    for(int i=0;i<V;i++)
	    {
	        if(color[i]==-1)
	        {
    	        if(!bipartileDfs(i,adj,color))
    	            return false;
	        }
	    }
	    return true;
	}
