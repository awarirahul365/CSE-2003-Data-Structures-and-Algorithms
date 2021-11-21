class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        
        int row=matrix.size();
        int col=matrix[0].size();
        vector<int>res;
        vector<vector<int>>vect(row,vector<int>(col,0));
        int j=0;
        while(j<col)
        {
            int ans=INT_MIN;
            for(int i=0;i<row;i++)
            {
                ans=max(ans,matrix[i][j]);
            }
            for(int i=0;i<row;i++)
            {
                vect[i][j]=ans;
            }
            j++;
        }
        int m=0;
        while(m<row)
        {
            int minelement=INT_MAX;
            for(int p=0;p<col;p++)
            {
                minelement=min(minelement,matrix[m][p]);
            }
            for(int h=0;h<col;h++)
            {
                if(minelement==vect[m][h])
                {
                    res.push_back(minelement);
                }
            }
            m++;
        }
        return res;
    }
};
