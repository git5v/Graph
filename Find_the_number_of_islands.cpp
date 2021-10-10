void dfs(vector<vector<char>>& M,int i,int j,int ROW,int COL)
  {
      if(i<0 or i>=ROW or j<0 or j>=COL or M[i][j]!='1') return ;
      
        M[i][j]='2';
  
        //moving now in 8 directions
        dfs(M, i + 1, j, ROW, COL);     //right side traversal
        dfs(M, i - 1, j, ROW, COL);     //left side traversal
        dfs(M, i, j + 1, ROW, COL);     //upward side traversal
        dfs(M, i, j - 1, ROW, COL);     //downward side traversal
        dfs(M, i + 1, j + 1, ROW, COL); //upward-right side traversal
        dfs(M, i - 1, j - 1, ROW, COL); //downward-left side traversal
        dfs(M, i + 1, j - 1, ROW, COL); //downward-right side traversal
        dfs(M, i - 1, j + 1, ROW, COL);
  }
    // Function to find the number of islands.
    int numIslands(vector<vector<char>>& grid) {
        // Code here
        int c=0;
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if (grid[i][j]=='1')
                {
                 
                    c++;
                    dfs(grid,i,j,n,m);
                }
            }
        }
        return c;
    }
