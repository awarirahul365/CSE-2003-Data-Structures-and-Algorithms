class Solution {
public:
    void DFS(vector<vector<int>>& grid,int x,int y,int row,int col,bool &island)
    {
        if(x<0 || x>=row || y<0 || y>=col)
        {
            return;
        }
        else
        {
            if(grid[x][y]==-2)
            {
                island=false;
                return;
            }
            else if(grid[x][y]==1 || grid[x][y]==-1)
            {
                return;
            }
            else
            {
                grid[x][y]=-1;
                DFS(grid,x+1,y,row,col,island);
                DFS(grid,x-1,y,row,col,island);
                DFS(grid,x,y+1,row,col,island);
                DFS(grid,x,y-1,row,col,island);
            }
        }
    }
    int closedIsland(vector<vector<int>>& grid) {
        
        //for borders
        int row=grid.size();
        int col=grid[0].size();
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                if((i==0 || j==0 || i==row-1 || j==col-1) && grid[i][j]==0)
                {
                    grid[i][j]=-2;
                }
            }
        }
        int count=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                bool island=true;
                if(grid[i][j]==0)
                {
                    DFS(grid,i,j,row,col,island);
                    if(island==true)
                    {
                        count++;
                    }
                }
            }
        }
        return count;
    }
};
