class Solution
{
    public:
    //Function to find the nth catalan number.
    cpp_int findCatalan(int n) 
    {
        long long int dp[n+1];
        dp[0]=1;
        dp[1]=1;
        for(int i=2;i<n+1;i++)
        {
            long long int startptr=0;
            long long int endptr=i-1;
            int sum=0;
            if(i%2!=0)
            {
                while(startptr<endptr)
                {
                    sum=sum+dp[startptr]*dp[endptr]+dp[startptr]*dp[endptr];
                    startptr++;
                    endptr--;
                }
                sum=sum+dp[startptr]*dp[endptr];
            }
            else
            {
                while(startptr<=endptr)
                {
                    sum=sum+dp[startptr]*dp[endptr]+dp[startptr]*dp[endptr];
                    startptr++;
                    endptr--;
                }
            }
            dp[i]=sum;
        }
        return dp[n];
    }
};
