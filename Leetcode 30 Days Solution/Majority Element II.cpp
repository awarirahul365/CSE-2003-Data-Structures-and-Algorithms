class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        vector<int>vect;
        int sz=nums.size();
        int req=sz/3;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        unordered_map<int,int>::iterator itr;
        for(itr=mp.begin();itr!=mp.end();itr++)
        {
            if(itr->second>req)
            {
                vect.push_back(itr->first);
            }
        }
        return vect;
    }
};
