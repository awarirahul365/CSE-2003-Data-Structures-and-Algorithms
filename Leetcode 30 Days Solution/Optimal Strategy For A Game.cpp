long long maximumAmount(int arr[], int n) 
{
    long long int dp[n][n];
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
                dp[i][j]=arr[i];
            }
            else if(gap==1)
            {
                dp[i][j]=max(arr[i],arr[j]);
            }
            else
            {
                dp[i][j]=max(arr[i]+min(dp[i+2][j],dp[i+1][j-1]),arr[j]+min(dp[i+1][j-1],dp[i][j-2]));
            }
        }
    }
    return dp[0][n-1];
}
