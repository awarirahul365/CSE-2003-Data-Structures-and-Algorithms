class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& gp) {
        
        map<int,vector<int>> mp;
        for(int i=0;i<gp.size();i++)
        {
            int num=gp[i];
            mp[num].push_back(i);
        }
        map<int,vector<int>>::iterator itr;
        vector<vector<int> > res;
        for(itr=mp.begin();itr!=mp.end();itr++)
        {
            int grpsz=itr->first;
            vector<int>vect;
            for(int i=0;i<itr->second.size();i++)
            {
                if(i%grpsz!=0 || i==0)
                {
                    vect.push_back(mp[grpsz][i]);
                }
                else if(i%grpsz==0)
                {
                    res.push_back(vect);
                    vect.clear();
                    vect.push_back(mp[grpsz][i]);
                }
            }
            res.push_back(vect);
        }
        return res;
    }
};
