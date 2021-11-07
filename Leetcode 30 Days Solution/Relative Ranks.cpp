class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        
        vector<string>ans;
        vector<int>original;
        original=score;
        sort(score.begin(),score.end());
        reverse(score.begin(),score.end());
        unordered_map<int,int>mp;
        for(int i=0;i<score.size();i++)
        {
            mp[score[i]]=i+1;
        }
        for(int i=0;i<original.size();i++)
        {
            int rank=mp[original[i]];
            if(rank==1)
            {
                ans.push_back("Gold Medal");
            }
            else if(rank==2)
            {
                ans.push_back("Silver Medal");
            }
            else if(rank==3)
            {
                ans.push_back("Bronze Medal");
            }
            else
            {
                string r=to_string(rank);
                ans.push_back(r);
            }
        }
        return ans;
    }
};
