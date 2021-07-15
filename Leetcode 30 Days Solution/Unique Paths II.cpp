class Solution {
public:
    
    int uniquePathsWithObstacles(vector<vector<int>>& obs) {
        
        for(int i=0;i<obs.size();i++)
        {
            for(int j=0;j<obs[0].size();j++)
            {
                if(obs[i][j]==0)
                {
                    obs[i][j]=1;
                }
                else
                {
                    obs[i][j]=0;
                }
            }
        }
        int row=obs.size();
        int col=obs[0].size();
        int dp[row][col];
        if(obs[0][0]==0 || obs[row-1][col-1]==0)
        {
            return 0;
        }
        else
        {
            for(int i=0;i<row;i++)
            {
                if(obs[i][0]==0)
                {
                    for(int j=i;j<row;j++)
                    {
                        dp[j][0]=0;
                    }
                    break;
                }
                else
                {
                    dp[i][0]=1;
                }
            }
            for(int i=0;i<col;i++)
            {
                if(obs[0][i]==0)
                {
                    for(int j=i;j<col;j++)
                    {
                        dp[0][j]=0;
                    }
                    break;
                }
                else
                {
                    dp[0][i]=1;
                }
            }
            for(int i=1;i<row;i++)
            {
                for(int j=1;j<col;j++)
                {
                    if(obs[i][j]==0)
                    {
                        dp[i][j]=0;
                    }
                    else
                    {
                        dp[i][j]=dp[i][j-1]+dp[i-1][j];
                    }
                }
            }
            return dp[row-1][col-1];
        }
    }
};
