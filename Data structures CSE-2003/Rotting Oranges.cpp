class Solution {
public:
    bool isinside(vector<vector<int>>& grid,int x,int y)
    {
        if(x<0 || y>=grid[0].size() || x>=grid.size() || grid[x][y]==0 || grid[x][y]==2)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
    int orangesRotting(vector<vector<int>>& grid) {
        
        if(grid[0][0]==0 && grid.size()==1 && grid[0].size()==1)
        {
            return 0;
        }
        else
        {
            queue<pair<int,int>>q;
        int time=-1;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                if(grid[i][j]==2)
                {
                    q.push({i,j});
                }
            }
        }
        while(!q.empty())
        {
            int sz=q.size();
            for(int i=0;i<sz;i++)
            {
                auto p=q.front();
                q.pop();
                int xcod=p.first;
                int ycod=p.second;
                if(isinside(grid,xcod+1,ycod)==true)
                {
                    grid[xcod+1][ycod]=2;
                    q.push({xcod+1,ycod});
                }
                if(isinside(grid,xcod-1,ycod)==true)
                {
                    grid[xcod-1][ycod]=2;
                    q.push({xcod-1,ycod});
                }
                if(isinside(grid,xcod,ycod+1)==true)
                {
                    grid[xcod][ycod+1]=2;
                    q.push({xcod,ycod+1});
                }
                if(isinside(grid,xcod,ycod-1)==true)
                {
                    grid[xcod][ycod-1]=2;
                    q.push({xcod,ycod-1});
                }
            }
            time=time+1;
        }
        int flag=1;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                if(grid[i][j]==1)
                {
                    flag=0;
                    break;
                }
            }
            if(flag==0)
            {
                break;
            }
        }
        if(flag==1 && time!=-1)
        {
            return time;
        }
        else if(flag==1 && time==-1)
        {
            return 0;
        }
        else
        {
            return -1;
        }
        }
    }
};
