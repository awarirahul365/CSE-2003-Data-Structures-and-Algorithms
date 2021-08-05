class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        
        int n=piles.size();
        int dp[n][n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                dp[i][j]=0;
            }
        }
        for(int gap=0;gap<n;gap++)
        {
            for(int i=0,j=gap;j<n;i++,j++)
            {
                if(gap==0)
                {
                    dp[i][j]=piles[i];
                }
                else if(gap==1)
                {
                    dp[i][j]=max(piles[i],piles[j]);
                }
                else
                {
                    dp[i][j]=max(piles[i]+min(dp[i+2][j],dp[i+1][j-1]),piles[j]+min(dp[i+1][j-1],dp[i][j-2]));
                }
            }
        }
        if(dp[0][n-1]>0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
