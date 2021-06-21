class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        
        if(matrix.size()==1)
        {
            return matrix[0][0];
        }
        else
        {
            int n=matrix.size();
            int dp[n][n];
            for(int i=0;i<n;i++)
            {
                dp[n-1][i]=matrix[n-1][i];
            }
            int trav=n-2;
            while(trav>=0)
            {
                for(int i=0;i<n;i++)
                {
                    if(i==0)
                    {
                        dp[trav][i]=min(matrix[trav][i]+dp[trav+1][i],matrix[trav][i]+dp[trav+1][i+1]);
                    }
                    else if(i==n-1)
                    {
                        dp[trav][i]=min(matrix[trav][i]+dp[trav+1][i],matrix[trav][i]+dp[trav+1][i-1]);
                    }
                    else
                    {
                        dp[trav][i]=min(matrix[trav][i]+dp[trav+1][i+1],min(matrix[trav][i]+dp[trav+1][i],matrix[trav][i]+dp[trav+1][i-1]));
                    }
                }
                trav--;
            }
            int ans=INT_MAX;
            for(int i=0;i<n;i++)
            {
                ans=min(ans,dp[0][i]);
            }
            return ans;
        }
        
    }
};
