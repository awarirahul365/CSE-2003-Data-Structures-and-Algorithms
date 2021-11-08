class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        
        bool ans=true;
        unordered_map<int,set<int>>mp;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                int diff=i-j;
                mp[diff].insert(matrix[i][j]);
            }
        }
        unordered_map<int,set<int>>::iterator itr;
        for(itr=mp.begin();itr!=mp.end();itr++)
        {
            if(itr->second.size()!=1)
            {
                ans=false;
                break;
            }
        }
        return ans;
    }
};
