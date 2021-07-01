class Solution {
public:
    static bool comp(const pair<int,int> &a,const pair<int,int> &b)
    {
        if(a.second==b.second)
        {
            return a.first>b.first;
        }
        else
        {
            return a.second>b.second;
        }
    }
    vector<int> filterRestaurants(vector<vector<int>>& rest, int veganFriendly, int maxPrice, int maxDistance) {
        
        
        vector<pair<int,int>>vect;
        int i=0;
        int orderid;
        int rating;
        int veganindex;
        int p;
        int d;
        if(veganFriendly==0)
        {
            while(i<rest.size())
            {
                orderid=rest[i][0];
                rating=rest[i][1];
                veganindex=rest[i][2];
                p=rest[i][3];
                d=rest[i][4];
                if(p<=maxPrice && d<=maxDistance && (veganindex==1 || veganindex==0))
                {
                    vect.push_back(make_pair(orderid,rating));
                    i++;
                }
                else
                {
                    i++;
                }
            }
        }
        else if(veganFriendly==1)
        {
            while(i<rest.size())
            {
                orderid=rest[i][0];
                rating=rest[i][1];
                veganindex=rest[i][2];
                p=rest[i][3];
                d=rest[i][4];
                if(p<=maxPrice && d<=maxDistance && veganindex==1)
                {
                    vect.push_back(make_pair(orderid,rating));
                }
                i++;
            }
        }
        sort(vect.begin(),vect.end(),comp);
        vector<int>ans;
        for(int i=0;i<vect.size();i++)
        {
            ans.push_back(vect[i].first);
        }
        return ans;
    }
};
