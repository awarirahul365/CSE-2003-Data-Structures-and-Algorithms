class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        
        int sum=0;
        int ans=INT_MIN;
        unordered_set<int>s;
        for(int i=0,j=0;j<nums.size();j++)
        {
            while(s.find(nums[j])!=s.end())
            {
                s.erase(nums[i]);
                sum=sum-nums[i];
                i++;
            }
            s.insert(nums[j]);
            sum=sum+nums[j];
            ans=max(ans,sum);
        }
        return ans;
        
    }
};
