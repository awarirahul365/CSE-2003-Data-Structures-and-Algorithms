class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        
        int dp[n][n];
        int top=0;
        int left=0;
        int right=n-1;
        int bottom=n-1;
        int counter=1;
        while(left<=right && top<=bottom)
        {
            for(int i=left;i<=right;i++)
            {
                dp[top][i]=counter;
                counter++;
            }
            top++;
            for(int i=top;i<=bottom;i++)
            {
                dp[i][right]=counter;
                counter++;
            }
            right--;
            if(top<=bottom)
            {
                for(int i=right;i>=left;i--)
                {
                    dp[bottom][i]=counter;
                    counter++;
                }
                bottom--;
            }
            if(left<=right)
            {
                for(int i=bottom;i>=top;i--)
                {
                    dp[i][left]=counter;
                    counter++;
                }
                left++;
            }
        }
        vector<vector<int> > vect;
        vector<int>temp;
        vect.clear();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                temp.push_back(dp[i][j]);
            }
            vect.push_back(temp);
            temp.clear();
        }
        return vect;
    }
};
