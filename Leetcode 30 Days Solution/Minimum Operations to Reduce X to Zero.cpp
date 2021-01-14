class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        
        unordered_map<int,int>mp;
        int presum=0;
        for(int i=0;i<nums.size();i++)
        {
            presum=presum+nums[i];
            mp[presum]=i;
        }
        int largestsubarraysum=presum-x;
        if(largestsubarraysum<0)
        {
            return -1;
        }
        //largest subarray with given sum concept for sum-x
        int currsum=0;
        int res=INT_MIN;
        mp[0]=-1;
        for(int i=0;i<nums.size();i++)
        {
            currsum=currsum+nums[i];
            if(currsum==largestsubarraysum)
            {
                res=i+1;
            }
            if(mp.find(currsum-largestsubarraysum)!=mp.end())
            {
                res=max(res,i-mp[currsum-largestsubarraysum]);
            }
        }
        return res==INT_MIN?-1:nums.size()-res;
    }
};
