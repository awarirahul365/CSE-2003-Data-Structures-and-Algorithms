class Solution {
public:
    bool issafe(vector<vector<int>>& mat,int row,int col,int xaxis,int yaxis,vector<vector<bool>> &visited)
    {
        if(xaxis<0 || xaxis>=row || yaxis<0 || yaxis>=col || visited[xaxis][yaxis]==true)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
    int BFS(int x,int y,vector<vector<int>>& mat,int row,int col)
    {
        vector<vector<bool>>visited(row,vector<bool>(col,false));
        queue<pair<int,int>>q;
        q.push({x,y});
        visited[x][y]=true;
        int steps=0;
        int flag=0;
        while(!q.empty())
        {
            int sz=q.size();
            for(int i=0;i<sz;i++)
            {
                auto p=q.front();
                q.pop();
                int xcod=p.first;
                int ycod=p.second;
                if(mat[xcod][ycod]==0)
                {
                    flag=1;
                    break;
                }
                else
                {
                    if(issafe(mat,row,col,xcod+1,ycod,visited)==true)
                    {
                        q.push({xcod+1,ycod});
                        visited[xcod+1][ycod]=true;
                    }
                    if(issafe(mat,row,col,xcod-1,ycod,visited)==true)
                    {
                        q.push({xcod-1,ycod});
                        visited[xcod-1][ycod]=true;
                    }
                    if(issafe(mat,row,col,xcod,ycod+1,visited)==true)
                    {
                        q.push({xcod,ycod+1});
                        visited[xcod][ycod+1]=true;
                    }
                    if(issafe(mat,row,col,xcod,ycod-1,visited)==true)
                    {
                        q.push({xcod,ycod-1});
                        visited[xcod][ycod-1]=true;
                    }
                }
            }
            if(flag==1)
            {
                break;
            }
            else
            {
                steps++;
            }
        }
        return steps;
    }
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        
        int row=mat.size();
        int col=mat[0].size();
        vector<vector<int>>vect(row,vector<int>(col,0));
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(mat[i][j]==0)
                {
                    vect[i][j]=0;
                }
                else
                {
                    int outp=BFS(i,j,mat,row,col);
                    vect[i][j]=outp;
                }
            }
        }
        return vect;
    }
};
