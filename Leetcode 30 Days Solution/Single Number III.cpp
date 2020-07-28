class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        
        unordered_map<int,int>mp;
        vector<int>vect;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        unordered_map<int,int>:: iterator itr;
        for(itr=mp.begin();itr!=mp.end();itr++)
        {
            if(itr->second==1)
            {
                vect.push_back(itr->first);
            }
        }
        return vect;
    }
};
