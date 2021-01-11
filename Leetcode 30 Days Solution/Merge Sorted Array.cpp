class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        vector<int>vect;
        int i=0;
        int j=0;
        while(i<m && j<n)
        {
            if(nums1[i]<nums2[j])
            {
                vect.push_back(nums1[i]);
                i++;
            }
            else if(nums1[i]>nums2[j])
            {
                vect.push_back(nums2[j]);
                j++;
            }
            else if(nums1[i]==nums2[j])
            {
                vect.push_back(nums1[i]);
                vect.push_back(nums2[j]);
                i++;
                j++;
            }
        }
        if(j==n && i<m)
        {
            for(int k=i;k<m;k++)
            {
                vect.push_back(nums1[k]);
            }
        }
        else if(i==m && j<n)
        {
            for(int k=j;k<n;k++)
            {
                vect.push_back(nums2[k]);
            }
        }
        nums1.clear();
        nums1=vect;
    }
};
