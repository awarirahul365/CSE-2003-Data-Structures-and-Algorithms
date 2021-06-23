class Solution {
public:
    int change(int value, vector<int>& coins) {
        
        int numberOfCoins=coins.size();
        int dp[value+1][numberOfCoins+1];
        for(int i=0;i<numberOfCoins+1;i++)
        {
            dp[0][i]=1;
        }
        for(int i=1;i<value+1;i++)
        {
            dp[i][0]=0;
        }
        for(int i=1;i<value+1;i++)
        {
            for(int j=1;j<numberOfCoins+1;j++)
            {
                dp[i][j]=dp[i][j-1];
                if(coins[j-1]<=i)
                {
                    dp[i][j]=dp[i][j]+dp[i-coins[j-1]][j];
                }
            }
        }
        return dp[value][numberOfCoins];
    }
};
