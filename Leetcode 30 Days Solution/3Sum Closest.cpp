class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
        sort(nums.begin(),nums.end());
        int ans=INT_MAX;
        int res=0;
        int flag=0;
        for(int i=0;i<nums.size()-2;i++)
        {
            int low=i+1;
            int high=nums.size()-1;
            while(low<high)
            {
                int sum=nums[low]+nums[high]+nums[i];
                int diff=abs(target-sum);
                if(diff<ans)
                {
                    ans=diff;
                    res=sum;
                }
                if(sum==target)
                {
                    flag=1;
                    break;
                }
                else if(sum<target)
                {
                    low++;
                }
                else
                {
                    high--;
                }
            }
            if(flag==1)
            {
                break;
            }
        }
        if(flag==1)
        {
            return target;
        }
        else
        {
            return res;
        }
    }
};
