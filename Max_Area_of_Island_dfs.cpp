class Solution {
    
    int maxarea = 0; 
    void dfs(vector<vector<int>>& grid , int i, int j, int n ,int m,int &area)
    {
        if(i>=n or j>=m or i<0 or j<0 or grid[i][j] != 1 ) return ;
        
        grid[i][j] = 0 ;
        
        area++;
        dfs(grid,i-1,j,n,m,area);
        dfs(grid,i+1,j,n,m,area);
        dfs(grid,i,j-1,n,m,area);
        dfs(grid,i,j+1,n,m,area);
        maxarea = max( maxarea , area); 
     
    }
    
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();
                
        int area = 0;
                 
        for(int i =0 ;i < n ; i++)
        {
            for (int j=0;j < m ; j++)
            {
                  if(grid[i][j]==1)
                  {
                      area = 0;
                    dfs(grid,i,j,n,m,area);             
                  }
            }
        }
        return maxarea;  
    }
};
