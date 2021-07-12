class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        
        int row=grid.size();
        int col=grid[0].size();
        if(row==1 && col>=1)
        {
            int sum1=0;
            for(int i=0;i<col;i++)
            {
                sum1=sum1+grid[0][i];
            }
            return sum1;
        }
        else if(col==1 && row>=1)
        {
            int sum2=0;
            for(int i=0;i<row;i++)
            {
                sum2=sum2+grid[i][0];
            }
            return sum2;
        }
        else
        {
            int dp[row][col];
            dp[0][0]=grid[0][0];
            for(int i=1;i<col;i++)
            {
                dp[0][i]=dp[0][i-1]+grid[0][i];
            }
            for(int i=1;i<row;i++)
            {
                dp[i][0]=dp[i-1][0]+grid[i][0];
            }
            for(int i=1;i<row;i++)
            {
                for(int j=1;j<col;j++)
                {
                    dp[i][j]=min(dp[i][j-1]+grid[i][j],dp[i-1][j]+grid[i][j]);
                }
            }
            return dp[row-1][col-1];
        }
    }
};
