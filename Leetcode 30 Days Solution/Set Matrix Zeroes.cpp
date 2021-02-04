class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        int r=matrix.size();
        int c=matrix[0].size();
        vector<pair<int,int>>vect;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                int num=matrix[i][j];
                if(num==0)
                {
                    vect.push_back(make_pair(i,j));
                }
            }
        }
        for(int i=0;i<vect.size();i++)
        {
            int rowindex=vect[i].first;
            int colindex=vect[i].second;
            for(int j=0;j<c;j++)
            {
                matrix[rowindex][j]=0;
            }
            for(int k=0;k<r;k++)
            {
                matrix[k][colindex]=0;
            }
        }
        
    }
};
