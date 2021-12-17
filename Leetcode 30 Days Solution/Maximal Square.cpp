class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        
        int ans=0;
        int row=matrix.size();
        int col=matrix[0].size();
        int dp[row][col];
        for(int i=0;i<row;i++)
        {
            dp[i][0]=(int)matrix[i][0]-48;
            ans=max(ans,dp[i][0]);
        }
        for(int i=0;i<col;i++)
        {
            dp[0][i]=(int)matrix[0][i]-48;
            ans=max(ans,dp[0][i]);
        }
        for(int i=1;i<row;i++)
        {
            for(int j=1;j<col;j++)
            {
                if(matrix[i][j]=='0')
                {
                    dp[i][j]=0;
                }
                else
                {
                    dp[i][j]=1+min(dp[i-1][j-1],min(dp[i][j-1],dp[i-1][j]));
                    ans=max(ans,dp[i][j]);
                }
            }
        }
        return ans*ans;
    }
};
