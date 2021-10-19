class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int>vect;
        unordered_map<int,int>mp;
        for(int i=0;i<nums2.size();i++)
        {
            mp[nums2[i]]=i;
        }
        for(int i=0;i<nums1.size();i++)
        {
            int val=nums1[i];
            if(mp.find(val)!=mp.end())
            {
                int index=mp[val];
                int flag=0;
                for(int j=index+1;j<nums2.size();j++)
                {
                    if(nums2[j]>val)
                    {
                        flag=1;
                        vect.push_back(nums2[j]);
                        break;
                    }
                }
                if(flag==0)
                {
                    vect.push_back(-1);
                }
            }
            else
            {
                vect.push_back(-1);
            }
        }
        return vect;
    }
};
