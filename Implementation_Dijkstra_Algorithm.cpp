vector <int> dijkstra(int V, vector<vector<int>> adj[], int s)
    {
        // Code here
        vector<int> dist(V,INT_MAX);
        dist[s]=0;
        priority_queue< pair<int , int> , vector<pair<int , int>> , greater<pair<int , int>> >pq;  // min heap    
        pq.push({0,s});
        while(!pq.empty())
        {
            int distprev = pq.top().first;
            int  prev = pq.top().second;
            pq.pop();

            for(auto it : adj[prev])
            {
              int next = it[0];  // accesing node and dist as adj matrix is given 
              int nextdist = it[1];   
                if(dist[next]>dist[prev]+nextdist)
                {
                    dist[next]=dist[prev] + nextdist;
                    pq.push({dist[next],next});
                }
            }
        }
        return dist;
    }
