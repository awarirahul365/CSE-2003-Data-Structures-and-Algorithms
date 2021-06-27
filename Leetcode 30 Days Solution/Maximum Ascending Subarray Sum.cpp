class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        
        int i=0;
        int sum=0;
        int ans=0;
        while(i<nums.size())
        {
            int j;
            sum=nums[i];
            for(j=i+1;j<nums.size();j++)
            {
                if(nums[j]>nums[j-1])
                {
                    sum=sum+nums[j];
                }
                else
                {
                    break;
                }
            }
            ans=max(ans,sum);
            i=j;
            sum=0;
        }
        return ans;
    }
};
