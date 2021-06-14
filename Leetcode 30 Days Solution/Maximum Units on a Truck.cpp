class Solution {
public:
    static bool comp(const pair<int,int> &a,const pair<int,int> &b)
    {
        if(a.second==b.second)
        {
            return a.first<b.first;
        }
        else
        {
            return a.second>b.second;
        }
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int trucksize) {
        
        vector<pair<int,int>>vect;
        for(int i=0;i<boxTypes.size();i++)
        {
            vect.push_back(make_pair(boxTypes[i][0],boxTypes[i][1]));
        }
        sort(vect.begin(),vect.end(),comp);
        int ans=0;
        int val;
        for(int i=0;i<vect.size();i++)
        {
            int diff=trucksize-vect[i].first;
            if(diff>=0)
            {
                ans=ans+(vect[i].first)*(vect[i].second);
                trucksize=trucksize-vect[i].first;
            }
            else
            {
                ans=ans+trucksize*(vect[i].second);
                break;
            }
        }
        return ans;
    }
};
