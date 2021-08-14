class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        queue<pair<int,int>>q;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(matrix[i][j]==0)
                {
                    q.push({i,j});
                }
            }
        }
        while(!q.empty())
        {
            auto p=q.front();
            q.pop();
            int xcod=p.first;
            int ycod=p.second;
            for(int i=0;i<matrix[0].size();i++)
            {
                matrix[xcod][i]=0;
            }
            for(int i=0;i<matrix.size();i++)
            {
                matrix[i][ycod]=0;
            }
        }
    }
};
