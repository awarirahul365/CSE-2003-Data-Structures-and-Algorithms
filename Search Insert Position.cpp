class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int flag=0;
        int ans;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
            {
                flag=1;
                ans=i;
                break;
            }
        }
        int outp;
        if(flag==1)
        {
            outp=ans;
        }
        else if(flag==0)
        {
            int predict;
            int j;
            for(j=0;j<nums.size();j++)
            {
                if(nums[j]>target)
                {
                    predict=j;
                    break;
                }
            }
            if(j==nums.size())
            {
                outp=nums.size();
            }
            else
            {
                outp=predict;
            }
        }
        return outp;
    }
};
