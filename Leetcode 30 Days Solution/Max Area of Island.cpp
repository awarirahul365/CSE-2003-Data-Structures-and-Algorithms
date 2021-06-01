class Solution {
public:
    void DFS(vector<vector<int>>& grid,int r,int c,int &count,int x,int y)
    {
        if(x<0 || x>=r || y<0 || y>=c || grid[x][y]==0)
        {
            return;
        }
        else
        {
            count++;
            grid[x][y]=0;
            DFS(grid,r,c,count,x+1,y);
            DFS(grid,r,c,count,x-1,y);
            DFS(grid,r,c,count,x,y+1);
            DFS(grid,r,c,count,x,y-1);
        }
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        
        int r=grid.size();
        int c=grid[0].size();
        int count=0;
        int ans=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                if(grid[i][j]==1)
                {
                    DFS(grid,r,c,count,i,j);
                }
                ans=max(ans,count);
                count=0;
            }
        }
        return ans;
    }
};
