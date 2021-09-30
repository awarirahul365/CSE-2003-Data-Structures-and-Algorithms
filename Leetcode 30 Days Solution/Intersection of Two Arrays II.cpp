class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int>vect;
        unordered_map<int,int>mp1;
        unordered_map<int,int>mp2;
        for(int i=0;i<nums1.size();i++)
        {
            mp1[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++)
        {
            mp2[nums2[i]]++;
        }
        unordered_map<int,int>::iterator itr;
        for(itr=mp1.begin();itr!=mp1.end();itr++)
        {
            if(mp2.find(itr->first)!=mp2.end())
            {
                int count=min(itr->second,mp2[itr->first]);
                for(int j=0;j<count;j++)
                {
                    vect.push_back(itr->first);
                }
                mp2.erase(itr->first);
            }
        }
        return vect;
    }
};
