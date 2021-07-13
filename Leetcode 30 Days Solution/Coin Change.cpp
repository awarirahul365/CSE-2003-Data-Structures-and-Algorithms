class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        
        int dp[amount+1];
        dp[0]=0;
        for(int i=1;i<amount+1;i++)
        {
            dp[i]=10000000;
        }
        for(int i=1;i<amount+1;i++)
        {
            for(int j=0;j<coins.size();j++)
            {
                if(coins[j]<=i)
                {
                    dp[i]=min(dp[i],1+dp[i-coins[j]]);
                }
            }
        }
        if(dp[amount]==10000000)
        {
            return -1;
        }
        else
        {
            return dp[amount];
        }
    }
};
