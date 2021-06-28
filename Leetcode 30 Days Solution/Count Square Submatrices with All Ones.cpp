class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        
        int r=matrix.size();
        int c=matrix[0].size();
        if(r==1 && c==1 && matrix[0][0]==1)
        {
            return 1;
        }
        else if(r==1 && c==1 && matrix[0][0]==0)
        {
            return 0;
        }
        else
        {
            int dp[r][c];
            int maxelement=INT_MIN;
            for(int i=0;i<r;i++)
            {
                dp[i][0]=matrix[i][0];
            }
            for(int i=1;i<c;i++)
            {
                dp[0][i]=matrix[0][i];
            }
            for(int i=1;i<r;i++)
            {
                for(int j=1;j<c;j++)
                {
                    if(matrix[i][j]==0)
                    {
                        dp[i][j]=0;
                    }
                    else
                    {
                        dp[i][j]=1+min(dp[i][j-1],min(dp[i-1][j-1],dp[i-1][j]));
                    }
                    maxelement=max(maxelement,dp[i][j]);
                }
            }
            int sum=0;
            for(int i=1;i<=maxelement;i++)
            {
                for(int j=0;j<r;j++)
                {
                    for(int k=0;k<c;k++)
                    {
                        if(dp[j][k]>=i)
                        {
                            sum++;
                        }
                    }
                }
            }
            return sum;
        }
    }
};
