class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        
        vector<int>vect;
        for(int i=0;i<nums.size();i++)
        {
            int val=nums[i];
            int flag=0;
            int ans;
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[j]>val)
                {
                    flag=1;
                    ans=nums[j];
                    break;
                }
            }
            if(flag==0)
            {
                for(int j=0;j<i;j++)
                {
                    if(nums[j]>val)
                    {
                        flag=1;
                        ans=nums[j];
                        break;
                    }
                }
            }
            if(flag==1)
            {
                vect.push_back(ans);
            }
            else
            {
                vect.push_back(-1);
            }
        }
        return vect;
    }
};
