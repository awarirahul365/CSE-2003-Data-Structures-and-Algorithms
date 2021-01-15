class Solution {
public:
    int getMaximumGenerated(int n) {
        
        vector<int>nums;
        nums.push_back(0);
        nums.push_back(1);
        int res;
        if(n==0)
        {
            res=0;
        }
        else if(n==1)
        {
            res=1;
        }
        else
        {
            int i=1;
            int nelement=n+1;
            while(nums.size()!=nelement)
            {
                nums.push_back(nums[i]);
                if(nums.size()!=nelement)
                {
                    nums.push_back(nums[i]+nums[i+1]);
                }
                i++;
            }
            res=nums[0];
            for(int i=1;i<nums.size();i++)
            {
                res=max(res,nums[i]);
            }
        }
        return res;
    }
};
