class Solution {
public:
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        
        //longest repeating substring
        int ans=0;
        int n1=nums1.size();
        int n2=nums2.size();
        int dp[n1][n2];
        for(int i=0;i<n2;i++)
        {
            if(nums1[0]==nums2[i])
            {
                dp[0][i]=1;
            }
            else
            {
                dp[0][i]=0;
            }
        }
        for(int i=0;i<n1;i++)
        {
            if(nums1[i]==nums2[0])
            {
                dp[i][0]=1;
            }
            else
            {
                dp[i][0]=0;
            }
        }
        for(int i=1;i<n1;i++)
        {
            for(int j=1;j<n2;j++)
            {
                if(nums1[i]==nums2[j])
                {
                    dp[i][j]=1+dp[i-1][j-1];
                    ans=max(ans,dp[i][j]);
                }
                else
                {
                    dp[i][j]=0;
                }
            }
        }
        return ans;
    }
};
