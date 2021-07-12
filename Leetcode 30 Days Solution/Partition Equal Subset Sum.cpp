class Solution {
public:
    bool canPartition(vector<int>& nums) {
        
        int prefixsum=0;
        for(int i=0;i<nums.size();i++)
        {
            prefixsum=prefixsum+nums[i];
        }
        if(prefixsum%2!=0)
        {
            return false;
        }
        else
        {
            int n=nums.size();
            int sum=prefixsum/2;
            bool dp[n+1][sum+1];
            for(int i=0;i<n+1;i++)
            {
                dp[i][0]=true;
            }
            for(int i=1;i<sum+1;i++)
            {
                dp[0][i]=false;
            }
            for(int i=1;i<n+1;i++)
            {
                for(int j=1;j<sum+1;j++)
                {
                    if(nums[i-1]<=j)
                    {
                        dp[i][j]=dp[i-1][j] || dp[i-1][j-nums[i-1]];
                    }
                    else
                    {
                        dp[i][j]=dp[i-1][j];
                    }
                }
            }
            return dp[n][sum];
        }
    }
};
