class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int low=0;
        int high=nums.size()-1;
        int flag=0;
        int index;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(nums[mid]==target)
            {
                flag=1;
                index=mid;
                break;
            }
            else if(nums[low]<=nums[mid])
            {
                if(target>=nums[low] && target<=nums[mid])
                {
                    high=mid-1;
                }
                else
                {
                    low=mid+1;
                }
            }
            else
            {
                if(target>=nums[mid] && target<=nums[nums.size()-1])
                {
                    low=mid+1;
                }
                else
                {
                    high=mid-1;
                }
            }
        }
        if(flag==1)
        {
            return index;
        }
        else
        {
            return -1;
        }
    }
};
