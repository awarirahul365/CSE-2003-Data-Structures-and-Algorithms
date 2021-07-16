class Solution {
public:
    int longestSubsequence(vector<int>& arr, int diff) {
        
        int n=arr.size();
        int dp[n];
        dp[0]=1;
        for(int i=1;i<arr.size();i++)
        {
            dp[i]=1;
            int num=arr[i];
            int prevnum=num-diff;
            for(int j=0;j<i;j++)
            {
                if(prevnum==arr[j])
                {
                    dp[i]=max(dp[i],dp[j]+1);
                }
            }
        }
        int ans=INT_MIN;
        for(int i=0;i<n;i++)
        {
            ans=max(ans,dp[i]);
        }
        return ans;
    }
};
//tried to implement using LIS concept not an efficient solution
