class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        
        int rorg=mat.size();
        int corg=mat[0].size();
        if(r*c!=rorg*corg)
        {
            return mat;
        }
        else
        {
            vector<vector<int>>vect(r,vector<int>(c,0));
            vector<int>temp;
            for(int i=0;i<mat.size();i++)
            {
                for(int j=0;j<mat[i].size();j++)
                {
                    temp.push_back(mat[i][j]);
                }
            }
            int d=0;
            for(int i=0;i<r;i++)
            {
                for(int j=0;j<c;j++)
                {
                    vect[i][j]=temp[d];
                    d++;
                }
            }
            return vect;
        }
    }
};
