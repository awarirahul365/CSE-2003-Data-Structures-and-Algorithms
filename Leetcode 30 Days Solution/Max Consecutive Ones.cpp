class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int i=0;
        int ans=0;
        int currcount=0;
        while(i<nums.size())
        {
            if(nums[i]==1)
            {
                currcount++;
                i++;
            }
            else
            {
                ans=max(ans,currcount);
                currcount=0;
                i++;
            }
        }
        if(currcount!=0)
        {
            ans=max(ans,currcount);
        }
        return ans;
    }
};
