class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        
        int ans;
        if(cost.size()==2)
        {
            ans=min(cost[0],cost[1]);
        }
        else
        {
            cost.push_back(0);
            int n=cost.size();
            int dp[n+1];
            dp[0]=0;
            dp[1]=cost[0];
            dp[2]=min(cost[0]+cost[1],cost[1]);
            for(int i=3;i<n+1;i++)
            {
                dp[i]=min(cost[i-1]+dp[i-1],cost[i-1]+dp[i-2]);
            }
            ans=dp[n];
        }
        return ans;
        
    }
};
