class Solution {
  public:
    void diagonalSort(vector<vector<int> >& matrix, int n, int m) {
        
        unordered_map<int,vector<int> >mp;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(i==j)
                {
                    continue;
                }
                else
                {
                    int diff=j-i;
                    mp[diff].push_back(matrix[i][j]);
                }
            }
        }
        unordered_map<int,vector<int>>::iterator itr;
        for(itr=mp.begin();itr!=mp.end();itr++)
        {
            if(itr->first<0)
            {
                vector<int>vect1=itr->second;
                sort(vect1.begin(),vect1.end());
                itr->second=vect1;
            }
            else if(itr->first>0)
            {
                vector<int>vect2=itr->second;
                sort(vect2.begin(),vect2.end());
                reverse(vect2.begin(),vect2.end());
                itr->second=vect2;
            }
        }
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(i!=j)
                {
                    matrix[i][j]=mp[j-i].front();
                    mp[j-i].erase(mp[j-i].begin());
                }
            }
        }
    }
};
