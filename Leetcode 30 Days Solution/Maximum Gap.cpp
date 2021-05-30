class Solution {
public:
    int maximumGap(vector<int>& nums) {
        
        if(nums.size()==1)
        {
            return 0;
        }
        else
        {
            sort(nums.begin(),nums.end());
            int maxelement=-1;
            for(int i=1;i<nums.size();i++)
            {
                maxelement=max(nums[i]-nums[i-1],maxelement);
            }
            return maxelement;
        }
        
    }
};
