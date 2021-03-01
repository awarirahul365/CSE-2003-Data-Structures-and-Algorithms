class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        
        int ans;
        unordered_set<int>s;
        int n=candyType.size();
        int limit=n/2;
        for(int i=0;i<candyType.size();i++)
        {
            if(s.find(candyType[i])==s.end())
            {
                s.insert(candyType[i]);
            }
        }
        if(s.size()<=limit)
        {
            ans=s.size();
        }
        else if(limit<s.size())
        {
            ans=limit;
        }
        return ans;
    }
};
