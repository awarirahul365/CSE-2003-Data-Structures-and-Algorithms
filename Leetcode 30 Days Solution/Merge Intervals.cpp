class Solution {
public:
    static bool comp(const pair<int,int> &a,const pair<int,int> &b)
    {
        if(a.first==b.first)
        {
            return a.second<b.second;
        }
        else
        {
            return a.first<b.first;
        }
    }
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        vector<pair<int,int>>vp;
        for(int i=0;i<intervals.size();i++)
        {
            vp.push_back(make_pair(intervals[i][0],intervals[i][1]));
        }
        sort(vp.begin(),vp.end(),comp);
        stack<pair<int,int>>stc;
        for(int i=0;i<vp.size();i++)
        {
            if(stc.empty())
            {
                stc.push({vp[i].first,vp[i].second});
            }
            else
            {
                auto tp=stc.top();
                int sstart=tp.first;
                int send=tp.second;
                int astart=vp[i].first;
                int aend=vp[i].second;
                if(send>=astart)
                {
                    stc.pop();
                    int newstart=min(sstart,astart);
                    int newend=max(send,aend);
                    stc.push({newstart,newend});
                }
                else
                {
                    stc.push({astart,aend});
                }
            }
        }
        vector<vector<int> >res;
        vector<int>temp;
        while(!stc.empty())
        {
            auto p=stc.top();
            stc.pop();
            temp.push_back(p.first);
            temp.push_back(p.second);
            res.push_back(temp);
            temp.clear();
        }
        return res;
    }
};
