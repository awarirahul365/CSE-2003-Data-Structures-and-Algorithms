class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        
        map<int,vector<int>>frommp;
        map<int,vector<int>>tomp;
        int maxdist=INT_MIN;
        for(int i=0;i<trips.size();i++)
        {
            maxdist=max(maxdist,max(trips[i][1],trips[i][2]));
            frommp[trips[i][1]].push_back(trips[i][0]);
            tomp[trips[i][2]].push_back(trips[i][0]);
        }
        vector<int>vect(maxdist+1,-1);
        for(int i=0;i<vect.size();i++)
        {
            if(frommp[i].size()!=0 || tomp[i].size()!=0)
            {
                vect[i]=0;
            }
        }
        bool flag=true;
        int curr_pass=0;
        for(int i=0;i<vect.size();i++)
        {
            if(vect[i]==0)
            {
                if(frommp[i].size()!=0)
                {
                    for(int j=0;j<frommp[i].size();j++)
                    {
                        curr_pass=curr_pass+frommp[i][j];
                    }
                }
                if(tomp[i].size()!=0)
                {
                    for(int j=0;j<tomp[i].size();j++)
                    {
                        curr_pass=curr_pass-tomp[i][j];
                    }
                }
                if(curr_pass>capacity)
                {
                    flag=false;
                    break;
                }
            }
        }
        return flag;
    }
};
