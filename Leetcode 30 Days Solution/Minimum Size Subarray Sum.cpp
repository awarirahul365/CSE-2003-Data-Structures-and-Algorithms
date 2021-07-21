class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        int ans=INT_MAX;
        int lftptr=0;
        int prefixsum=0;
        bool flag=false;
        for(int i=0;i<nums.size();i++)
        {
            prefixsum=prefixsum+nums[i];
            while(prefixsum>=target)
            {
                ans=min(ans,(i-lftptr)+1);
                prefixsum=prefixsum-nums[lftptr];
                lftptr++;
                flag=true;
            }
        }
        if(flag==false)
        {
            return 0;
        }
        else
        {
            return ans;
        }
    }
};
