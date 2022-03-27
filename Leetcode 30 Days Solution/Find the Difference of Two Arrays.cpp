class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        
        vector<vector<int>>vect;
        unordered_set<int>notnums2;
        unordered_set<int>notrepeat1;
        unordered_set<int>notnums1;
        unordered_set<int>notrepeat2;
        for(int i=0;i<nums2.size();i++)
        {
            notnums2.insert(nums2[i]);
        }
        vector<int>temp;
        for(int i=0;i<nums1.size();i++)
        {
            if(notnums2.find(nums1[i])==notnums2.end() && notrepeat1.find(nums1[i])==notrepeat1.end())
            {
                temp.push_back(nums1[i]);
                notrepeat1.insert(nums1[i]);
            }
        }
        vect.push_back(temp);
        temp.clear();
        for(int i=0;i<nums1.size();i++)
        {
            notnums1.insert(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++)
        {
            if(notnums1.find(nums2[i])==notnums1.end() && notrepeat2.find(nums2[i])==notrepeat2.end())
            {
                temp.push_back(nums2[i]);
                notrepeat2.insert(nums2[i]);
            }
        }
        vect.push_back(temp);
        return vect;
    }
};
