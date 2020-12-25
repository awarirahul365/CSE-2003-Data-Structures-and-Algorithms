class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& matrix) {
        
        //diagonal traverse
        map<int,vector<int>>mp;
        int sum;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                sum=i+j;
                mp[sum].push_back(matrix[i][j]);
            }
        }
        vector<int>vect;
        map<int,vector<int>>::iterator itr;
        for(itr=mp.begin();itr!=mp.end();itr++)
        {
            int num=itr->first;
            if(num%2==0)
            {
                for(int k=itr->second.size()-1;k>=0;k--)
                {
                    vect.push_back(mp[num][k]);
                }
            }
            else if(num%2!=0)
            {
                for(int p=0;p<itr->second.size();p++)
                {
                    vect.push_back(mp[num][p]);
                }
            }
        }
        return vect;
    }
};
