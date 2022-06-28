//Steps -> 1.Input the given graph 2. Apply the topo sort on graph and keep all nodes in stacks
// 3. Store the graph in reverse direction manner and nullify the vis vector 
// 4. Apply the dfs on reverse graph and count strongly connected components


void topo_dfs(int i, vector<int> adj[], vector<int> &vis,
              stack<int> &st)
{
	vis[i] = 1;
	for (auto &it : adj[i])
	{
		if (!vis[it]) topo_dfs(it, adj, vis, st);
	}
	st.push(i);
}

void revdfs(int i, vector<int> rev_adj[], vector<int> &vis)
{
	vis[i] = 1;
	for (auto &it : rev_adj[i])
	{
		if (!vis[it]) revdfs(it, rev_adj, vis);
	}

}

void solve()
{

	int n, m;
	cin >> n >> m; // nodes and edges
	vector<int> adj[n + 1];
	for (int i = 0; i < m; i++)
	{
		int u, v;
		cin >> u >> v;
		adj[u].push_back(v);
	}

	vector<int> vis(n + 1, 0);
	stack<int> st;

	for (int i = 0; i < n; i++)
	{
		if (!vis[i]) topo_dfs(i, adj, vis, st);
	}

	//reverse graph
	vector<int> rev_adj[n + 1];
	for (int i = 0; i < n; i++)
	{
		vis[i] = 0;
		for (auto &it : adj[i])
			rev_adj[it].push_back(i);
	}

	while (!st.empty())
	{
		int node = st.top(); st.pop();
		if (!vis[node])
		{
			cout << node << " SCC \n";
			revdfs(node, rev_adj, vis);
		}
	}

}
