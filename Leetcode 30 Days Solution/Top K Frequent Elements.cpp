class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k){
        
        unordered_map<int,int>mp;
        vector<int>vect;
        multimap<int,int,greater <int> >mm;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        unordered_map<int,int>:: iterator itr;
        for(itr=mp.begin();itr!=mp.end();itr++)
        {
            mm.insert({itr->second,itr->first});
        }
        multimap<int,int>:: iterator it;
        int count=0;
        for(it=mm.begin();it!=mm.end();it++)
        {
            if(count<k){
                vect.push_back(it->second);
                count++;
            }
            else if(count>=k)
            {
                break;
            }
        }
        return vect;
    }
};
